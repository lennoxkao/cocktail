#include "confirm.h"
#include "ui_confirm.h"
int check_alcohol;
confirm::confirm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirm)
{
    ui->setupUi(this);
}

confirm::~confirm()
{
    delete ui;
}

void confirm::on_check_clicked()
{
     check_alcohol=1;
     this->hide();

     emit this->sentMsg(check_alcohol);
}

void confirm::on_cancel_clicked()
{
     check_alcohol=0;
     this->hide();

     emit this->sentMsg(check_alcohol);
}
