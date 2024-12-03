#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>
#include <windows.h> // header do WinApi

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close() ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
   // Beep(1000, 50);
   // QMessageBox::about(this, "Aviso", "Aprendendo");
    //QMessageBox::aboutQt(this, "sim");
   // QMessageBox::critical(this, "Enviado", "Erro");
   //QMessageBox::information(this, "inf", "informacao !!!!");
   //QMessageBox::question(this, "Ops", "Quer continuar?");
   QMessageBox::warning(this, "Ops", "Alerta");

}

