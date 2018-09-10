#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QTimer>
#include <QTime> //интерфейс с системным временем
#include <QPixmap> //Интерфейс для отображения картинок

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    ui->label->setText("");

    QTimer *timer = new QTimer(this); //Создаем таймер

    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(onTimeOut())); //Сигнал таймаут подается каждые пол-секунды, обрабатывается слотом onTimeOut
    timer->start(500);//Запускаем таймер

}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::onTimeOut()
{
    //ui->label->setText(QString::number(rand()%100)); //rand() % 100 = сгенерирует случайные числа не больше 100
    ui->label->setText(QTime::currentTime().toString()); //Выводим в label текущее системное время

    //Создаем ярлыки динамически

    QLabel *lbl = new QLabel(this);
    lbl->setPixmap(QPixmap("./smiling.png").scaledToHeight(rand()%100)); //Ярлык может отображать картинки QPixmap (картинка должна лежать в папке с исполняемым файлом программы
    lbl->setGeometry(rand()%this->width(), rand()%this->height(),100,100);
    lbl->show();


}
