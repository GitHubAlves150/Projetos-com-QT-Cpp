#include "fm_gestaoestoque.h"
#include "ui_fm_gestaoestoque.h"

fm_gestaoEstoque::fm_gestaoEstoque(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_gestaoEstoque)
{
    ui->setupUi(this);
}

fm_gestaoEstoque::~fm_gestaoEstoque()
{
    delete ui;
}
