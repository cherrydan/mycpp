#include "fib_dialog.h"
#include "ui_fib_dialog.h"
#include "fibonacci.h"


using namespace std;

FibDialog::FibDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FibDialog)
{
    ui->setupUi(this);
}

FibDialog::~FibDialog()
{
    delete ui;
}

void FibDialog::on_btnClose_clicked()
{
    close();
}

void FibDialog::on_btnCalc_clicked()
{
    long int x;
    x = ui->spinBox->value();
    QString str = QString::number(x) +"-е число Фибоначчи: ";
    ui->label_2->setText(str);
    ui->resultLE->setText(QString::number(fibonacci(x)));
}
