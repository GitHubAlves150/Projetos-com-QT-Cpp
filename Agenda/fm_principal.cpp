#include "fm_principal.h"
#include "ui_fm_principal.h"
#include "janela.h"

fm_principal::fm_principal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_principal)
{
    ui->setupUi(this);

}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_btn_SearchContact_clicked()
{
    Fm_pesquisaContatos f_searchContact;
    f_searchContact.exec();
}


void fm_principal::on_btn_AddContact_clicked()
{
    Cadastrar_no_banco cadastro;
    cadastro.exec();
}

