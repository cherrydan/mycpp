#include "mainwidget.h"
#include "ui_mainwidget.h"

#include <QMessageBox>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    password = "meksik1985";

    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->pushButton->setDefault(true);
    ui->pushButton->setEnabled(false);
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(textChanged(QString)));
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(loginClicked()));
}



MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::textChanged(QString str)
{
    if(!str.isEmpty()) ui->pushButton->setEnabled(true);
}

void MainWidget::loginClicked()
{

    QString username = ui->lineEdit->text();

    if(ui->lineEdit_2->text() != password) {
        QMessageBox msg;
        msg.setWindowTitle("Check Password App!");
        msg.setText(username + " , you entered a wrong password!");
        msg.exec();
    }

    else {

        QMessageBox msg;
        msg.setWindowTitle("Check Password App!");
        msg.setText(username + " , CONGRATS! Access allowed for you!!!");
        msg.exec();
    }

}
