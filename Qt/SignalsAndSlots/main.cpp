#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton *qPb = new QPushButton("close"); //Конструируем объект-указатель на кнопку

    qPb->show(); //Вызов метода по указателю ->

    QObject::connect(qPb, SIGNAL(clicked()),&a, SLOT(quit()));


    return a.exec();
}
