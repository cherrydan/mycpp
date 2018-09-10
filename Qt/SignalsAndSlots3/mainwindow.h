#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog> //Базовый класс для нашего приложения
#include <QLabel> //Ярлык
#include <QPushButton> //Кнопка
#include <QCheckBox> //Чекбокс
#include <QLineEdit> //Строка редактирования
#include <QHBoxLayout> //Горизонтальное форматирование
#include <QVBoxLayout> //Вертикальное форматирование
#include <QMessageBox>
#include <string>
#include <algorithm>

using namespace std;

class MainWindow: public QDialog {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

private:
    QLabel *lbl;
    QLineEdit *line;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *btn_ok;
    QPushButton *btn_close;

private slots:
    void btn_ok_clicked();
    void text_Changed(QString str);
signals:
    void UpperCase(QString str);
    void Inverse(QString str);
    void Simple(QString str);
    void UpperAndInverse(QString str);


};

//Класс для отображения строки с результатом в диалоговом окне
class Str : public QObject {
    Q_OBJECT

public slots:
    void Simple(QString str) {
        QMessageBox msg;
        msg.setText(str);
        msg.exec();
    }

    void UpperCase(QString str) {
        QString result = str.toUpper();
        QMessageBox msg;
        msg.setText(result);
        msg.exec();

    }

    void  Inverse(QString str) {
        QString str2;
        str2 = str;
        reverse(str2.begin(), str2.end());
        QMessageBox msg;
        msg.setText(str2);
        msg.exec();
    }

    void UpperAndInverse(QString str) {
        QString upperString;
        QString reverseString;
        upperString = str.toUpper();
        reverseString = upperString;
        reverse(reverseString.begin(), reverseString.end());
        QMessageBox msg;
        msg.setText(reverseString);
        msg.exec();
    }
};

#endif // MAINWINDOW_H
