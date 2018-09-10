#include <dialog.h>
#include <ui_dialog.h>
#include <QPushButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()), SLOT(OkClicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()), SLOT(close()));
}




Dialog::~Dialog()
{
    delete ui;
}

void Dialog::OkClicked()
{
    emit FilePath(ui->lineEdit->text());
    close();

}
