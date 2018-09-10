#ifndef DIALOG_H
#define DIALOG_H


#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

signals:
    void FilePath(const QString &str);

public slots:
    void OkClicked();


};

#endif // DIALOG_H

