#include "fact_dialog.h"
#include "ui_fact_dialog.h"
#include "factorial.h"
#include <string>

using namespace std;

FactDialog::FactDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FactDialog)
{
    ui->setupUi(this);
}

FactDialog::~FactDialog()
{
    delete ui;
}


void FactDialog::on_btnClose_clicked()
{
    close();
}

void FactDialog::on_btnCalc_clicked()
{
    int x = ui->spinBox->value();
    long int res = factorial(x);
    ui->resultLE->setText(QString::number(res));

}
