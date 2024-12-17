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

void fm_gestaoEstoque::on_btn_Novo_clicked()
{
    ui->txt_codproduto->clear();
    ui->txt_decricaoproduto->clear();
    ui->txt_Fornecedor->clear();
    ui->txt_qtdEstoque>clear();
    ui->txt_ValorCompra->clear();
    ui->txt_Valorvenda->clear();
    ui->txt_codproduto->setFocus();
}


void fm_gestaoEstoque::on_btn_gravar_clicked()
{

}

