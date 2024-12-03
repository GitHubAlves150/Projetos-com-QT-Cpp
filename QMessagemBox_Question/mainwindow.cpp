#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //remvoe a barra de titulo padrao
    //setWindowFlags(Qt::FramelessWindowHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Arrastar a tela


void MainWindow::on_pushButton_clicked()
{
    showMaximized();
}


void MainWindow::on_pushButton_2_clicked()
{
    showMinimized();
}


void MainWindow::on_pushButton_3_clicked()
{
    close();
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton resposta= QMessageBox::question(this,
                                                                 "confirmacao",
                                                                 "Continuar?",
                                                                 QMessageBox::Yes | QMessageBox::No
                                                                 );

    if(resposta == QMessageBox::Yes)
    {
        //close();
        QApplication::quit();//encerra a aplicação
    }
    else
    {
        //QMessageBox::about(this, "Aviso", "programa não foi fechado");
        qDebug()<< "programa nao fechado no console";
    }

}






























