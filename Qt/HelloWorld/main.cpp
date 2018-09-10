#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel  lbl("<h1><font color=red>Hello,</font><font color = blue>world!</font><h1>"); //Вбитые прямо в строку html-теги, фишка Кьюта

    lbl.show(); //Метод show на любом виджете необходим для того чтобы этот виджет стал видимым(а у нас и все окно)

    return app.exec();
}
