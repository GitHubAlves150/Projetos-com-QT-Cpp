#include "fm_main.h"
#include "ui_fm_main.h"

FM_Main::FM_Main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FM_Main)
{
    ui->setupUi(this);
    Block_program=false;
    padlock_off.addFile(":/imagens/IMG/CadeadoCinza.png");
    padlock_on->addFile(":/imagens/IMG/CadeadoZul.png");

    ui->btn_blockANDunblock->setIcon(*padlock_on);
    ui->statusbar->addWidget(ui->btn_blockANDunblock);

}







FM_Main::~FM_Main()
{
    delete ui;
}


