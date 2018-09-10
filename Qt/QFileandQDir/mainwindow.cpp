#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QTextStream>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setCentralWidget(ui->textEdit); //Растягиваем выбраный виджет на весь экран
    ui->statusBar->showMessage("Привет! Я готов к работе.");
    ui->comboBox->clear();

    months << "Январь" << "Февраль " << "Март" << "Апрель" << "Май" << "Июнь" << "Июль" << "Август" << "Сентябрь" << "Октябрь" << "Ноябрь" << "Декабрь";

    for(int i = 0; i <= months.size()-1; i++)
        ui->comboBox->addItem(months[i]);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_3_triggered()
{
    Dialog *dlg = new Dialog(this);
    dlg->show();
    connect(dlg, SIGNAL(FilePath(QString)), this, SLOT(ReadToFile(QString)));

}

void MainWindow::ReadToFile(const QString &filePath)
{
    QFile mFile(filePath); //Создали обьект QFile c именем взятым из текстового поля

    if(!mFile.open(QFile::ReadOnly | QFile::Text)) //Если файл с заданными нами параметрами (только чтение и текстовый) не открылся успешно
    {
        QMessageBox::information(this, "Ошибка!", "Путь не верный!"); //Выводим ошибочное сообщение
        ui->statusBar->showMessage("Ошибка!");

        return;
    }

    ui->statusBar->showMessage("Чтение из файла: " + filePath);

    QTextStream stream(&mFile); //Создаем обьект типа текстовый поток и передаем ему указатель на обьект QFile

    QString buffer = stream.readAll(); //Создаем буфер QString и читаем в него весь поток (readAll)

    ui->textEdit->setText(buffer); //Выводим текстовый буфер в текстовое окно

    mFile.flush(); //Обязательно освобождаем память на диске

    mFile.close(); //Закрываем файл


}

void MainWindow::WriteToFile(const QString &filePath)
{
    QFile mFile(filePath); //Создали обьект QFile

    if(!mFile.open(QFile::WriteOnly | QFile::Text)) //Если файл с заданными нами параметрами (только запись и текстовый) не открылся успешно
    {
        QMessageBox::information(this, "Ошибка!", "Путь не верный!"); //Выводим ошибочное сообщение
        ui->statusBar->showMessage("Ошибка!");

        return;
    }

    ui->statusBar->showMessage("Запись в файл: " + filePath);

    QTextStream stream(&mFile); //Создаем обьект типа текстовый поток и передаем ему указатель на обьект QFile

    stream << ui->textEdit->toPlainText();

    mFile.close();

}

void MainWindow::PrintDir(const QString &filePath)
{

    /*QDir mDir(filePath); //Создали обьект-директорию
    QString buffer;

    for(QFileInfo fileInfo : mDir.entryInfoList()) {
        buffer += fileInfo.absoluteFilePath() + '\n';
    }

    ui->textEdit->setText(buffer);*/

    ui->textEdit->setText(PrintDir2(filePath,0));

    ui->statusBar->showMessage("Выведено содержимое папки: " + filePath);



}

QString MainWindow::PrintDir2(QString path, int level)
{
    int check = 1;
    QDir folder(path);

    QString space;
    QString buffer;

    for(int i=0; i < level; i++)
        space +="          ";

    for(QFileInfo temp: folder.entryInfoList()) {
        if(check > 2){
            buffer+= space + temp.absoluteFilePath() + '\n';
            if(temp.isDir()) buffer+= PrintDir2(temp.absoluteFilePath(), ++level);
        }
        check++;
    }
    return buffer;
}


void MainWindow::on_action_2_triggered()
{

    Dialog *dlg = new Dialog(this);
    dlg->show();
    connect(dlg, SIGNAL(FilePath(QString)), this, SLOT(WriteToFile(QString)));

}

void MainWindow::on_action_triggered()
{

    close();

}

void MainWindow::on_action_Dir_triggered()
{
    Dialog *dlg = new Dialog(this);
    dlg->show();
    connect(dlg, SIGNAL(FilePath(QString)), this, SLOT(PrintDir(QString)));

}

void MainWindow::on_pushButton_clicked()
{

   ui->statusBar->showMessage("Выбран месяц: " + ui->comboBox->currentText());
}
