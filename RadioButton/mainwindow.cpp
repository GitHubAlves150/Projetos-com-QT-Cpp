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
    QString msg, cor, transp, progr;
    QMessageBox::information(this, "op", "oo");
    msg= "";

    if(ui->Aviao->isChecked())
    {

        transp= "Aviao";
    }
    else if(ui->Helicop->isChecked())
    {
        transp= "Helicoptero";
    }
    else if(ui->Navio->isChecked())
    {
        transp= "Navio";
    }

    QMessageBox::information(this, "Aviso", transp);
}

