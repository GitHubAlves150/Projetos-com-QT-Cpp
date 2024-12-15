#include "fm_editarcontato.h"
#include "ui_fm_editarcontato.h"

fm_EditarContato::fm_EditarContato(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::fm_EditarContato)
{
    ui->setupUi(this);
    QByLucasEditarContato(this, id);
    QByLucasGetID(id);

}

fm_EditarContato::~fm_EditarContato()
{
    delete ui;
}

int fm_EditarContato::QByLucasGetID(int id_)
{
    identify=id_;
    return identify;
}

void fm_EditarContato::QByLucasEditarContato(QWidget *parent, int id)
{
    QSqlQuery query;
    //int ID= QString::number(id);
    //int ID= QString::number(id).toInt();
    query.prepare("SELECT *FROM funcionarios WHERE ID= "+QString::number(id) );
    if(!query.exec())
    {
        QMessageBox::information(this, "INFO", "Nao Editado");
    }
    else
    {
        query.first();
        ui->txt_Nome->setText(query.value(1).toString() );
        ui->txt_Setor->setText(query.value(2).toString() );
        ui->txt_User->setText(query.value(3).toString() );
        //QMessageBox::information(this, "INFO", "Editado");

    }


}

void fm_EditarContato::on_btn_Gravar_clicked()
{
    QString nome=ui->txt_Nome->text();
    QString Setor=ui->txt_Setor->text();
    QString user=ui->txt_User->text();
    //int ident= QString::number(identify).toInt();

    QSqlQuery query;
    query.prepare("update funcionarios  set nome = '"+nome+"', setor='"+Setor+"', username='"+user+"' where ID=' "+QString::number(identify)+"'");
    //sistema de segurança

    if(query.exec())
    {
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "Erro", "Nao foi possivel gravar dados..");
    }
}





