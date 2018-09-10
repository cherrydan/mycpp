#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_action_3_triggered();
    void ReadToFile(const QString &filePath);
    void WriteToFile(const QString &filePath);
    void PrintDir(const QString &filePath);
    QString PrintDir2(QString path, int level);

    void on_action_2_triggered();

    void on_action_triggered();

    void on_action_Dir_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QStringList months;
};

#endif // MAINWINDOW_H
