#include "fm_nova_venda.h"
#include "ui_fm_nova_venda.h"

fm_nova_venda::fm_nova_venda(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_nova_venda)
{
    ui->setupUi(this);
}

fm_nova_venda::~fm_nova_venda()
{
    delete ui;
}
