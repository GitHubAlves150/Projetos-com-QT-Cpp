#include "fm_main.h"
#include "ui_fm_main.h"

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
        logado=f_login.getLogado();
        nome_colab= f_login.getNome();
        acesso_colab= f_login.getAcesso();
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
    }
}



