#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QFileSystemModel>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private slots:
    void on_lvSource_doubleClicked(const QModelIndex &index);

    void on_btnBackup_clicked();

private:
    Ui::MainWidget *ui;
    QFileSystemModel *model;

};

//Два самописанных метода для организации резервного копирования

//Ищет отсутствующие или неактуальные элементы в резервной директории
void contentDifference(QDir &sDir, QDir &dDir, QFileInfoList &diffList);

//Наполняет список всех вложенных директорий и файлов
void recursiveContentList(QDir &dir, QFileInfoList &contentList);

#endif // MAINWIDGET_H
