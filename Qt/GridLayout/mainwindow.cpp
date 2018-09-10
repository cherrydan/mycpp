#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGridLayout *grid = new QGridLayout();
    grid->addWidget(ui->pushButton, 0, 0);
    grid->addWidget(ui->pushButton_2, 1, 1);

    QWidget *widg = new QWidget();
    widg->setLayout(grid);

    setCentralWidget(widg);





}

MainWindow::~MainWindow()
{
    delete ui;
}
