#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
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

void MainWindow::on_MOSTRAR_clicked()
{
    QString nome     = ui->TXT_NOME->text(),    //capturar o nome
            telefone = ui->TXT_TELEFONE->text(),//capturar o telefonoe
            email    = ui->TXT_EMAIL->text();   //capturar o email

    QMessageBox::information(this, "Dados digitados", "Nome:" +nome+ "\nFone:" +telefone+ "\nemail:"+email);

}


void MainWindow::on_LIMPAR_clicked()
{
    ui->TXT_NOME->clear();
    ui->TXT_EMAIL->clear();
    ui->TXT_TELEFONE->clear();

    ui->TXT_NOME->setFocus();
}

