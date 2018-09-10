#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *window = new MainWindow();

    window->show();

    Str *n = new Str; //Связываем класс Str с нашим главным окном и учим окно принимать сигналы  и слоты от класса String

    QObject::connect(window, SIGNAL(Simple(QString)), n, SLOT(Simple(QString)));
    QObject::connect(window, SIGNAL(UpperCase(QString)), n, SLOT(UpperCase(QString)));
    QObject::connect(window, SIGNAL(Inverse(QString)), n, SLOT(Inverse(QString)));
    QObject::connect(window, SIGNAL(UpperAndInverse(QString)), n, SLOT(UpperAndInverse(QString)));

    return a.exec();
}
