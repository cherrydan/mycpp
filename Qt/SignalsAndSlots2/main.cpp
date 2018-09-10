
#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout> //горизонтальный слой форматирования


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSpinBox *qSb = new QSpinBox(); //Поле с цифровым счетчиком и возможностью прокрутки вниз-вверх

    //qSb->show();

    QSlider *qSl = new QSlider(Qt::Horizontal);

    //qSl->show();

    qSb->setMaximum(100);
    qSl->setMaximum(100);

    QWidget *window = new QWidget;

    QHBoxLayout *layout = new QHBoxLayout;

    layout->addWidget(qSb);
    layout->addWidget(qSl);

    window->setLayout(layout);

    window->show();

    QObject::connect(qSb, SIGNAL(valueChanged(int)), qSl, SLOT(setValue(int))); //коннектим сигнал от спинбокса с изменением положения слайдера
    QObject::connect(qSl, SIGNAL(valueChanged(int)), qSb, SLOT(setValue(int))); //сигнал от слайдера и установка цифр в спинбоксе


    return a.exec();

}
