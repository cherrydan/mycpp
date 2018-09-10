#ifndef FIB_DIALOG_H
#define FIB_DIALOG_H

#include <QDialog>

namespace Ui {
class FibDialog;
}

class FibDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FibDialog(QWidget *parent = 0);
    ~FibDialog();

private slots:




    void on_btnClose_clicked();

    void on_btnCalc_clicked();

private:
    Ui::FibDialog *ui;
};


#endif // FIB_DIALOG_H

