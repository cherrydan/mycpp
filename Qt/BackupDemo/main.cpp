#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.setWindowTitle("BackUp App");
    w.show();

    return a.exec();
}
