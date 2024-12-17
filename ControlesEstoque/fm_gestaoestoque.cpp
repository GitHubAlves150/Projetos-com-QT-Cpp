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
    ui->txt_qtdEstoque->clear();
    ui->txt_ValorCompra->clear();
    ui->txt_Valorvenda->clear();
    ui->txt_codproduto->setFocus();
}


void fm_gestaoEstoque::on_btn_gravar_clicked()
{
    if( !con.open_db() )
    {
        QMessageBox::information(this, "Info", "nao abriu o banco para grava'fm_gestaoestoque'");

    }
    else
    {
        QString codigo= ui->txt_codproduto->text();
        QString dec_produto=ui->txt_decricaoproduto->text();
        QString Fornecedor=ui->txt_Fornecedor->text();
        QString qtd_estoque=ui->txt_qtdEstoque->text();
        QString Valor_compra=ui->txt_ValorCompra->text();
        QString Valor_venda=ui->txt_Valorvenda->text();

        QSqlQuery query;
        query.prepare("insert into tb_produtos"
                     "(produto, id_fornecedor, quantidade_estoque, valor_compra, valor_venda)"
                      "values"
                      "('Feijao', '200', '20', '8', '80')");
    }
}

