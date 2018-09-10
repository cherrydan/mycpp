#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include "mainwindow.h"
#include <QMenuBar>


MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);


//    QObject::connect(newFile, SIGNAL(triggered()), this, SLOT(onNewFileAction())); //коннектим сигнал от меню (triggered) и слот


}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}
//слот к кнопке закрыть
void MyMainWindow::on_action_closeWindow_triggered()
{
    close();
}

//слот к кнопке Проверка
void MyMainWindow::on_action_newWindow_triggered()
{
    /*
    //создаем динамический экземпляр класса MainWindow обязательно передав в конструкторе родителя

    MainWindow *wnd = new MainWindow(this);

    //показываем окно
    wnd->show();
    */

    //Вызовем окно статически
    MainWindow wind(this);
    wind.show();
    wind.exec(); //Если не запустим цикл обработки сообщений, то окно сразу закроется
}
