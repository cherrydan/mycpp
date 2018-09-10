#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fact_dialog.h"
#include "fib_dialog.h"
#include "nc_dialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_4_triggered()
{
    close();
}

void MainWindow::on_action_triggered()
{
    FactDialog fact(this);
    fact.show();
    fact.exec();
}

void MainWindow::on_action_2_triggered()
{
    FibDialog fib(this);
    fib.show();
    fib.exec();
}

void MainWindow::on_action_7_triggered()
{
    QMessageBox msg;
    msg.setIcon(QMessageBox::Information);
    msg.setWindowTitle("Об авторе");
    msg.setText("Программа разработана гуманитарием Д. Черепухиным, 2017.");
    msg.exec();
}

void MainWindow::on_action_3_triggered()
{
    QMessageBox msg;
    msg.setIcon(QMessageBox::Information);
    msg.setWindowTitle("Знаете ли Вы что...");
    msg.setText("Факториал натурального числа n определяется как произведение всех натуральных чисел\n от 1 до n включительно.");
    msg.exec();
}

void MainWindow::on_action_5_triggered()
{
    QMessageBox msg;
    msg.setIcon(QMessageBox::Information);
    msg.setWindowTitle("Знаете ли Вы что...");
    msg.setText("Числа Фибоначчи - последовательность чисел, в которой первые два числа равны либо 1 и 1, либо 0 и 1, \nа каждое последующее число равно сумме двух предыдущих чисел.");
    msg.exec();
}

void MainWindow::on_action_6_triggered()
{
    NCDialog nc(this);
    nc.show();
    nc.exec();
}

void MainWindow::on_action_10_triggered()
{

    QMessageBox msg;
    msg.setIcon(QMessageBox::Information);
    msg.setWindowTitle("Знаете ли Вы что...");
    QString text = "Система счисления — символический метод записи чисел, представление чисел с помощью письменных знаков.\n\n";
    text+="Основанием системы счисления называется количество цифр и символов, применяющихся для изображения числа. Например р=10.\n";
    text+="Определить основание очень легко, нужно только пересчитать количество значащих цифр в системе. Если проще, то это число, с которого начинается второй разряд у числа.\n";
    text+="Мы, например, используем цифры 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.\n Их ровно 10, поэтому основание нашей системы счисления тоже 10, и система счисления называется \“десятичная\”.\n";
    msg.setText(text);
    msg.exec();

}
