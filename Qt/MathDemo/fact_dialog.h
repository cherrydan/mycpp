#ifndef FACT_DIALOG_H
#define FACT_DIALOG_H

#include <QDialog>

namespace Ui {
class FactDialog;
}

class FactDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FactDialog(QWidget *parent = 0);
    ~FactDialog();

private slots:
    void on_btnClose_clicked();

    void on_btnCalc_clicked();

private:
    Ui::FactDialog *ui;
};


#endif // FACT_DIALOG_H

