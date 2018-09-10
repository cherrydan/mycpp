#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.setWindowTitle("Check Password App, v. 2.0");
    w.show();

    return a.exec();
}
