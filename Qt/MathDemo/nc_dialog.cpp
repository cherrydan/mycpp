#include "nc_dialog.h"
#include "ui_nc_dialog.h"
#include "nc.h"


using namespace std;

NCDialog::NCDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NCDialog)
{
    ui->setupUi(this);
}

NCDialog::~NCDialog()
{
    delete ui;
}



void NCDialog::on_btnClose_clicked()
{
    close();
}

void NCDialog::on_btnCount_clicked()
{
   unsigned long long int result;

   result = NC(ui->spinSource->value(), ui->spinNC->value());
   ui->lineEdit->setText(QString::number(result));
}
