#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <string>

class MainWindow : public QDialog {
   Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);


    QString password;

private:
    QLabel *lbl1;
    QLabel *lbl2;
    QLineEdit *line_username;
    QLineEdit *line_password;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

private slots:
    void btn_ok_clicked();
    void text_Changed(QString str);
};



#endif // MAINWINDOW_H
