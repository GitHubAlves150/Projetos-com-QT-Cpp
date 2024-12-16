#include "fm_nova_venda.h"
#include "ui_fm_nova_venda.h"

fm_nova_Venda::fm_nova_Venda(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_nova_Venda)
{
    ui->setupUi(this);
}

fm_nova_Venda::~fm_nova_Venda()
{
    delete ui;
}
