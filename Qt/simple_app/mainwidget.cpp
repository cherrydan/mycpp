#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(showText())); //QObject::connect(кто посылает сигнал, сигнал, кто принимает сигнал, слот)
    QObject::connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->lcdNumber, SLOT(display(int)));
}

MainWidget::~MainWidget()
{
    delete ui;
}

//Самонаписанный слот для кнопки, реакции на ее нажатие в виде вывода текста в ярлык
void MainWidget::showText()
{
    ui->label->setText("<h3><font color = red>Hello, Qt!!!</font><h3>");
}
