#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QString msg   = "",
            cor   = "",
            prog  = "",
            transp= "";
    int Int_transp=0;

     // Exemplo de que assim não acumula as varias opções selecionadas
    // por isso deve ser utilizada vector da stl
//----------retorno dos radionButton-----------
    //Linguagens de rpogramação
    if(ui->Cor_vermelho->isChecked())
    {
        cor = "Vermelho";
    }
    else if(ui->Cor_Azul->isChecked())
    {
        cor = "Azul";
    }




    //Aeronaves
    if(ui->Aviao->isChecked())
    {
        Int_transp = 1;
    }
    else if(ui->Helicop->isChecked())
    {
        Int_transp = 2;
    }
    else if(ui->Navio->isChecked())
    {
        Int_transp = 3;
    }

    switch(Int_transp)
    {
    case 1:
        transp ="Aviao";
        break;
    case 2:
        transp = "Helicoptero";
        break;
    case 3:
        transp = "Navio";
        break;
    default:
        transp = "nenhum";
        break;
    }

    //Linguagem de programação
    QVector<bool>program;
    program.push_back(ui->Cplusplus->isChecked());
    program.push_back(ui->CSharp->isChecked());
    program.push_back(ui->Java->isChecked());
    program.push_back(ui->BancoDados->isChecked());

    if(program[0])
        prog = "C++";
    if(program[1])
        prog = "csharp";
    if(program[2])
        prog = "java";
    if(program[3])
        prog = "Banco de dados";

    msg= cor+"\n"+transp+"\n"+prog;

       QMessageBox::information(this, "Info", msg);









}






