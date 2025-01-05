#include "add_user.h"
#include "ui_add_user.h"

Add_user::Add_user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Add_user)
{
    ui->setupUi(this);


}

Add_user::~Add_user()
{
    delete ui;
}

