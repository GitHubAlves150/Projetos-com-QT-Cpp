#include "fm_pesquisacontatos.h"
#include "ui_fm_pesquisacontatos.h"



Fm_pesquisaContatos::Fm_pesquisaContatos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Fm_pesquisaContatos)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("SELECT * FROM funcionarios");
    if(!query.exec())
    {
        QMessageBox::warning(this, "Erro","Erro ao pesquisar na tabela de contatos");
        return;
    }
    int linha=0;
    ui->tw_contatos->setColumnCount(6);
    QStringList cabecalho={"Id", "Nome", "Setor", "Username", "senha", "Acesso"};
    ui->tw_contatos->setHorizontalHeaderLabels(cabecalho);
    ui->tw_contatos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_contatos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_contatos->verticalHeader()->setVisible(false);
    ui->tw_contatos->setStyleSheet("QTableView {selection-background-color:green}");
    while(query.next())
    {
        ui->tw_contatos->insertRow(linha);
        ui->tw_contatos->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString() ));
        ui->tw_contatos->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString() ));
        ui->tw_contatos->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString() ));
        ui->tw_contatos->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString() ));
        ui->tw_contatos->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString() ));
        ui->tw_contatos->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString() ));
        ui->tw_contatos->setRowHeight(linha, 10);
        linha++;
    }
    ui->tw_contatos->setColumnWidth(0, 20);
    ui->tw_contatos->setColumnWidth(1, 100);
    ui->tw_contatos->setColumnWidth(2, 100);
    ui->tw_contatos->setColumnWidth(3, 100);
    ui->tw_contatos->setColumnWidth(4, 80);
    ui->tw_contatos->setColumnWidth(5, 100);

}

Fm_pesquisaContatos::~Fm_pesquisaContatos()
{
    delete ui;
}



void Fm_pesquisaContatos::on_btn_deleteContact_clicked()
{
    //SELECIONAR A LINHA
    int linha=ui->tw_contatos->currentRow();
    int id=ui->tw_contatos->item(linha, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from funcionarios where id="+QString::number(id));

    //DELETAR A LINHA
    if( query.exec() )
    {
        QMessageBox::information(this, "TTTT", "REGISTRO EXCLUIDO");
        ui->tw_contatos->removeRow(linha);

    }
    else
    {
        QMessageBox::information(this, "OPS!", "ERRO AO EXLUIR REGISTRO");
    }
}

void Fm_pesquisaContatos::on_btn_Edit_clicked()
{
    int linha=ui->tw_contatos->currentRow();
    int id= ui->tw_contatos->item(linha, 0)->text().toInt();
    fm_EditarContato f_editarcontato(this, id);
    f_editarcontato.exec();

}

