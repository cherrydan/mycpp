#ifndef NC_DIALOG_H
#define NC_DIALOG_H


#include <QDialog>

namespace Ui {
class NCDialog;
}

class NCDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NCDialog(QWidget *parent = 0);
    ~NCDialog();

private slots:



    void on_btnClose_clicked();

    void on_btnCount_clicked();

private:
    Ui::NCDialog *ui;
};





#endif // NC_DIALOG_H

