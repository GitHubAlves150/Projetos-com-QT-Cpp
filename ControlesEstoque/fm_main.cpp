#include "fm_main.h"
#include "ui_fm_main.h"




int FM_Main::id_colab;
QString FM_Main::nome_colab;
QString FM_Main::acesso_colab;
QString FM_Main::username_colab;
bool FM_Main::logado;


FM_Main::FM_Main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FM_Main)
{

    ui->setupUi(this);
    //setWindowFlags(Qt::FramelessWindowHint);

    logado=false;
    padlock_off.addFile(":/img_/IMG/locked.png");
    padlock_on->addFile(":/img_/IMG/unlocked.png");

    ui->btn_blockANDunblock->setIcon(padlock_off);
    ui->statusbar->addWidget(ui->btn_blockANDunblock);
    ui->statusbar->addWidget(ui->txt_userlogado);


}


FM_Main::~FM_Main()
{
    delete ui;
}


void FM_Main::on_btn_blockANDunblock_clicked()
{
    if(!logado)
    {
        //chamar tela de desbloqueado
        fm_Login_user f_login;
        f_login.exec();

        if(logado)
        {
            ui->btn_blockANDunblock->setIcon(*padlock_on);
            ui->txt_userlogado->setText(nome_colab);
        }
    }
    else
    {
        logado=false;
        ui->btn_blockANDunblock->setIcon(padlock_off);
        ui->txt_userlogado->setText("last user:"+nome_colab);

    }
}
/*
void FM_Main::on_btn_nova_Venda_clicked()
{

    if(logado)
    {
        fm_nova_venda f_newSale;
        f_newSale.exec();
    }
    else
    {

    }
}
*/

void FM_Main::on_btn_nova_venda_clicked()
{
    if(logado)
    {
        fm_nova_venda f_newSale;
        f_newSale.exec();
    }
    else
    {
        QMessageBox::information(this, "info", "sem user logado");
    }
}


void FM_Main::on_actionEstoque_triggered()
{
    if(acesso_colab == 'M')
    {
        fm_gestaoEstoque f_gestaoEstoque;
        f_gestaoEstoque.exec();
    }
    else
    {
        QMessageBox::information(this, "INFo", "Apenas para Masters");
    }
}

void FM_Main::on_actionVendas_triggered()
{
    if(acesso_colab == 'M')
    {
        fm_Gestaovendas f_gestaoVendas;
        f_gestaoVendas.exec();
    }
    else
    {
        QMessageBox::information(this, "INFo", "Apenas para Masters");
    }
}


void FM_Main::on_actionColaboradores_triggered()
{
    if(acesso_colab == 'M')
    {
        fm_gestaoColaboradores f_gestaoColab;
        f_gestaoColab.exec();
    }
    else
    {
        QMessageBox::information(this, "INFo", "Apenas para Masters");
    }
}

