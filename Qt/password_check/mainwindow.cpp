#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QDialog(parent)

{
    password = "meksik1985";

    lbl1 = new QLabel("&Username: ");
    line_username = new QLineEdit;
    lbl2 = new QLabel("&Password: ");
    line_password = new QLineEdit;

    line_password->setEchoMode(QLineEdit::Password); //Вместо символов при вводе пароля нужно отображать звездочки или точки

    lbl1->setBuddy(line_username); //Связываем ярлыки и поля ввода
    lbl2->setBuddy(line_password);
    lbl1->setAlignment(Qt::AlignLeft);
    btn_ok = new QPushButton("LogIn");
    btn_ok->setDefault(true);
    btn_ok->setEnabled(false);

    btn_cancel = new QPushButton("&Cancel");

    QHBoxLayout *layout1 = new QHBoxLayout;
    layout1->addWidget(lbl1);
    layout1->addWidget(line_username);

    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->addWidget(lbl2);
    layout2->addWidget(line_password);

    QVBoxLayout *right = new QVBoxLayout;
    right->addLayout(layout1);
    right->addLayout(layout2);

    QVBoxLayout *left = new QVBoxLayout;
    left->addWidget(btn_ok);
    left->addWidget(btn_cancel);

    QHBoxLayout *main = new QHBoxLayout;
    main->addLayout(right);
    main->addLayout(left);
    setLayout(main);
    setWindowTitle("Check Password App");

    connect(btn_cancel, SIGNAL(clicked()), this, SLOT(close()));
    connect(line_password, SIGNAL(textChanged(QString)), this, SLOT(text_Changed(QString)));
    connect(btn_ok, SIGNAL(clicked()), this, SLOT(btn_ok_clicked()));
}

void MainWindow::btn_ok_clicked()
{
    QString username = line_username->text();

    if(line_password->text() != password) {

        QMessageBox msg;
        msg.setText(username + " , you entered a wrong password!");
        msg.exec();
    }
    else{
        QMessageBox msg;
        msg.setText(username + " , CONGRATS! Access allowed for you!!!");
        msg.exec();
    }

}

void MainWindow::text_Changed(QString str)
{
    if(!str.isEmpty()) btn_ok->setEnabled(true);
}
