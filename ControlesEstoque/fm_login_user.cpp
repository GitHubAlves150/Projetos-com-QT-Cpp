#include "fm_login_user.h"
#include "ui_fm_login_user.h"
#include "fm_main.h"

fm_Login_user::fm_Login_user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_Login_user)
{
    ui->setupUi(this);
    logado= false;

}

fm_Login_user::~fm_Login_user()
{
    delete ui;
}

void fm_Login_user::on_btn_logar_clicked()
{
    if(!conec.open_db())
    {
        QMessageBox::warning(this, "Erro", "erroar aoo abrir banco de dados");

    }
    else
    {
        QString username, senha;
        username=ui->TXT_usename->text();
        senha= ui->TXT_usersenha->text();

        QSqlQuery query;
        query.prepare("select * from tb_colaboradores where username_colab = '"+username+"' and senha_colab = '"+senha+"' ");
        if( query.exec() )
        {
            //depois que comparar os valores no banco
            //depois que der um executar o query
            query.first();//pegar o primeiro da lista da tabela
            if(query.value(1).toString() != "")//se nome n for vazio
            {
                FM_Main::logado=true;
                FM_Main::nome_colab=query.value(1).toString();
                FM_Main::id_colab= query.value(0).toInt();
                FM_Main::acesso_colab= query.value(5).toString();
                conec.Close_db();
                close();
            }
            else
            {
                QMessageBox::information(this, "Aviso", "Campos vazio e/ou nao conferem");
            }

        }
        else
        {
            QMessageBox::information(this, "Aviso", "Falha no login");

        }

    }
    //login
    conec.Close_db();
}


void fm_Login_user::on_btn_sair_clicked()
{
    logado=false;
    close();
}





