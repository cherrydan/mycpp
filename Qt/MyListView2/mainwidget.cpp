#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "qlistmodel.h"
#include "qsliderdeligate.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    QListModel *model = new QListModel(this); //Создаем указатель на модель
    ui->listView->setModel(model); //Метод setModel подключает модель к элементу интерфейса


    QSliderDeligate *deligate = new QSliderDeligate(this); //Создаем указатель на делегата

    ui->listView->setItemDelegate(deligate); //Метод setItemDeligate подключает делегата к элементу интерфейса

    //Создав в форме виджет таблицы, и подключив к нему уже созданную модель
    ui->tableView->setModel(model); //мы получаем автоматически всю функциональность на новом элементе интерфейса

}

MainWidget::~MainWidget()
{
    delete ui;
}
