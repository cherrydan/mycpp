#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QFileInfoList>
#include <QDateTime>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);
    model->setFilter(QDir::AllEntries);
    model->setRootPath("");
    ui->lvBackup->setModel(model);
    ui->lvSource->setModel(model);
    //Правую панель подключаем явно
    QObject::connect(ui->lvBackup, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(on_lvSource_doubleClicked(QModelIndex)));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_lvSource_doubleClicked(const QModelIndex &index)
{
   //Обработка двойного щелчка для левой панельки, который будет использоваться и для правой

   QListView *listView = (QListView *) sender(); //Создаем динамический указатель на панельку, и получаем вызвавшую сигнал панельку при помощи метода sender - левая или правая вызвала сигнал

   QFileInfo fileInfo = model->fileInfo(index); //Создаем класс информации о файле (связанный с моделью)

   if(fileInfo.fileName() == "..") { //метод fileInfo.filename() =  если вернул две точки
       QDir dir = fileInfo.dir(); //создаем объект-директорию
       dir.cdUp(); //переходим на директорию вверх
       listView->setRootIndex(model->index(dir.absolutePath())); //делаем этот путь корневым в модели и отображаем его в панельке
   }

   else if(fileInfo.fileName() == ".") { //Если вернул одну точку
       listView->setRootIndex(model->index("")); //делаем текущий путь
   }

   else if(fileInfo.isDir()) { //Если мы уже внутри каталога
       listView->setRootIndex(index); //передавая ему индекс из метода = отображается содержимое каталога
   }
}

void recursiveContentList(QDir &dir, QFileInfoList &contentList)
{
    //просматриваем каждый файл в директории
    foreach (QFileInfo info, dir.entryInfoList(QDir::Files | QDir::Dirs| QDir::NoDotAndDotDot, QDir::Name|QDir::DirsFirst)) {
        contentList.append(info); //добавляем info в contentList
        //если элемент не файл, а директория
        if(info.isDir() && dir.cd(info.fileName())) {
            recursiveContentList(dir, contentList); //используем рекурсию и выходим на уровень выше
            dir.cdUp();

        }

    }
}

void contentDifference(QDir &sDir, QDir &dDir, QFileInfoList &diffList)
{
    //Идем по каждому элементу, который мы "вынимаем" из sDir и dDir - объектов QDir
    foreach (QFileInfo sInfo, sDir.entryInfoList(QDir::Files | QDir::Dirs| QDir::NoDotAndDotDot, QDir::Name|QDir::DirsFirst)) {
       bool fileExists = false; //По умолчанию одинаковых файлов нет

       foreach (QFileInfo dInfo, dDir.entryInfoList(QDir::Files | QDir::Dirs| QDir::NoDotAndDotDot, QDir::Name|QDir::DirsFirst)) {
           //Но если имя совпало - то одинаковые файлы есть
           if(sInfo.fileName() == dInfo.fileName()) {
               if(sInfo.isDir() || sInfo.lastModified() <= dInfo.lastModified()) //Если еще и дата создания совпадает то зажигаем флажок в true
                   fileExists = true;
               break;
           }
       }

       if(!fileExists)
           diffList.append(sInfo); //Если одинаковых файлов нет, значит пополняем список различий

       if(sInfo.isFile())
           continue;

       if(fileExists) {
           sDir.cd(sInfo.fileName());
           dDir.cd(sInfo.fileName());
           contentDifference(sDir, dDir, diffList);
           sDir.cdUp();
           dDir.cdUp();

       }
       else {
           sDir.cd(sInfo.fileName());
           recursiveContentList(sDir,diffList);
           sDir.cdUp();
       }

   }
}


void MainWidget::on_btnBackup_clicked()
{
    //Получаем объекты QDir  - нашу source и backup директории
    QDir sDir = QDir(model->filePath(ui->lvSource->rootIndex()));
    QDir dDir = QDir(model->filePath(ui->lvSource->rootIndex()));
    QFileInfoList diffList = QFileInfoList();
    contentDifference(sDir, dDir, diffList);


}
