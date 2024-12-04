#include "mainwindow.h"
#include "ui_mainwindow.h"

QString msg="";

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
    bool cb1, cb2, cb3;

    cb1= ui->checkBox->isChecked();
    cb2= ui->checkBox_2->isChecked();
    cb3= ui->checkBox_3->isChecked();
    msg="";
    if(cb1)
    {
        msg +="cb1 marcado\n";

    }
     if(cb2)
    {
        msg += "cb2 marcado\n";
    }
     if(cb3)
    {
        msg += "cb3 marcado\n";
    }



}


void MainWindow::on_pushButton_2_clicked()
{
    bool cb[3];
    cb[0]=ui->checkBox->isChecked();
    cb[1]=ui->checkBox_2->isChecked();
    cb[2]=ui->checkBox_3->isChecked();
    msg="";
    for(int i=0; i<3; i++)
    {
        if(cb[i]==true)
        {
            msg += "cb"+QString::number(i+1)+" Marcado \n";//converte inteiro para string

        }
    }
QMessageBox::information(this, "cheked", msg);
}


