#include "cadastrar_no_banco.h"
#include "ui_cadastrar_no_banco.h"


Cadastrar_no_banco::Cadastrar_no_banco(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Cadastrar_no_banco)
{
    ui->setupUi(this);

}

Cadastrar_no_banco::~Cadastrar_no_banco()
{
    delete ui;
}



void Cadastrar_no_banco::on_inserir_clicked()
{

    ui->banc_conectado_->setText(" conectado");

    if(ui->senha_->text()=="" || ui->username_->text()=="")
    {
        QMessageBox::warning(this, "Falha", "Campo vazio..");

        return;
    }

    QSqlQuery query;
    QString sql= "INSERT INTO funcionarios (nome, setor, username, senha, acesso) VALUES ('Nome','Setor', ' " +ui->username_->text() + "', '" + ui->senha_->text() + "', 'A')";
    query.prepare(sql);
    if(query.exec())
    {
        QMessageBox::information(this, "Sucesso", "Dados inserido com sucesso..");
        ui->username_->clear();
        ui->senha_->clear();
        ui->username_->setFocus();
    }
    else
    {
        QMessageBox::critical(this, "Error", "Error ao inserir os dados no banco..");

    }

}


