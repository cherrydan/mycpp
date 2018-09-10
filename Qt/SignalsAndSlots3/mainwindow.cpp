#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QDialog(parent) //Вызов конструктора родительского класса
{
    //Создаем ссылки на виджеты
    lbl = new QLabel("&Введите"); //& создает горячую клавишу на букве перед ним
    line = new QLineEdit;
    lbl->setBuddy(line); //Реакция на горячую клавишу - переход на строку редактирования
    cb1 = new QCheckBox("ВЕРХНИЙ &РЕГИСТР");
    cb2 = new QCheckBox("&Инверсия");
    btn_ok = new QPushButton("OK");
    btn_ok->setDefault(true); //Кнопка ОК будет нажиматься по Enter
    btn_ok->setEnabled(false); //Кнопка загорится только, когда будет введен текст в поле line


    btn_close = new QPushButton("&Закрыть");
    //Слои форматирования
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);

    //Вертикальный слой форматирования правый
    QVBoxLayout *right = new QVBoxLayout;
    //Добавляем горизонтальный слой форматирования в вертикальный
    right->addLayout(layout);
    right->addWidget(cb1);
    right->addWidget(cb2);

    //Вертикальный слой форматирования левый
    QVBoxLayout *left = new QVBoxLayout;
    left->addWidget(btn_ok);
    left->addWidget(btn_close);

    //Главный слой форматирования
    QHBoxLayout *main = new QHBoxLayout;
    main->addLayout(right);
    main->addLayout(left);


    //Коннектим сигналы и слоты
    connect(line, SIGNAL(textChanged(QString)), this, SLOT(text_Changed(QString)));
    connect(btn_ok, SIGNAL(clicked()), this, SLOT(btn_ok_clicked()));
    connect(btn_close, SIGNAL(clicked()), this, SLOT(close()));

    //Поскольку мы наследуемся от QDialog = SetLayout вызывается просто
    setLayout(main);
    setWindowTitle("Dialog Box");

}

void MainWindow::btn_ok_clicked()
{
    //Вызываем свои сигналы
    if(cb1->isChecked() && cb2->isChecked())
        emit UpperAndInverse(line->text());
    else
        if(!(cb1->isChecked()) && !(cb2->isChecked()))
            emit Simple(line->text());
        else
            if(cb1->isChecked())
                emit UpperCase(line->text());
                    else
                    if(cb2->isChecked())
                    emit Inverse(line->text());


}

void MainWindow::text_Changed(QString str)
{
    if(!str.isEmpty()) btn_ok->setEnabled(true); //Если на входе не пустая строка - зажигаем кнопку


}
