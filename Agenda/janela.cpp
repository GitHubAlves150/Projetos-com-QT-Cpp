#include "janela.h"
#include "ui_janela.h"

Janela::Janela(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Janela)
{
    ui->setupUi(this);
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Lucas Alves/Documents/GitHub_Conta_Gmail/Projetos com QT Cpp/Agenda/bancoDados/BancoAgenda.db");

    if(!db.open())
    {
        ui->banc_conectado->setText("Banco nao conectado...");

    }
    else
    {
        ui->banc_conectado->setText("Banco conectado...");
        if(!db.isOpen())
        {
            ui->banc_aberto->setText("not open");

        }
        else
        {
            ui->banc_aberto->setText("is open");
        }
    }

}

Janela::~Janela()
{
    delete ui;
}

void Janela::on_login_clicked()
{
    if(ui->username->text()=="" || ui->senha->text()=="")
    {
        QMessageBox::warning(this, "Falha", "Campo vazio..");
            return;
    }

    QSqlQuery query;
    QString sql= "INSERT INTO funcionarios (nome, setor, username, senha, acesso) VALUES ('20', 'NOME', ' " +ui->username->text() + "', '" + ui->senha->text() + "', 'A')";
    query.prepare(sql);
    if(query.exec())
    {
        QMessageBox::information(this, "Sucesso", "Dados inserido com sucesso..");
        ui->username->clear();
        ui->senha->clear();
        ui->username->setFocus();
    }
    else
    {
        QMessageBox::critical(this, "Error", "Error ao inserir os dados no banco..");

    }



}


void Janela::on_pushButton_clicked()
{
    if(ui->user->text()=="" || ui->password->text()=="")
    {
        QMessageBox::warning(this, "Falha", "Campo vazio..");
        return;
    }

    QSqlQuery query;
   // QString sql= "SELECT * FROM funcionarios WHERE username='"+ui->user->text()+"' AND senha='"+ui->password->text()+"' ";
   // query.prepare(sql);
    if(query.exec("SELECT * FROM funcionarios WHERE username='"+ui->user->text()+"' AND senha='"+ui->password->text()+"' "))
    {

        int count=0;
        while(query.next())
       {
            count++;
       }
        if(count>0)
       {
           this->close();
           fm_principal f_principal;
           f_principal.setModal(true);
           Janela win;
           win.close();
           f_principal.exec();
       }
        if(count==0)
       {
           QMessageBox::information(this, "Nao combina", "Dados inserido nao combinam..");

       }

    }
    else
    {
        QMessageBox::critical(this, "Error", "Error ao inserir os dados no banco..");

    }

}

