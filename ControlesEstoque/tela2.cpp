#include "tela2.h"
#include "ui_tela2.h"

Tela2::Tela2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Tela2)
{
    ui->setupUi(this);
}

Tela2::~Tela2()
{
    delete ui;
}
