#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow(QWidget *parent = 0);
    ~MyMainWindow();

private:
    Ui::MyMainWindow *ui;

    //слот для нажатия на меню
private slots:
    void onNewFileAction() {
        QMessageBox msg;
        msg.setText("New File triggered!");
        msg.exec();
    }
    void on_action_closeWindow_triggered();
    void on_action_newWindow_triggered();
};

#endif // MYMAINWINDOW_H
