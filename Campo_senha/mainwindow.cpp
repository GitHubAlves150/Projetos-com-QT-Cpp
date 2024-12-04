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
    QString userName,
            senha;
    Dialog jane;

    userName = ui->lineEdit->text();
    senha    = ui->lineEdit_2->text();

    if(senha == "4321" && userName == "Lucas")
    {
        //QMessageBox::information(this, "Login", "Login realizado");
        close();
        jane.exec();

    }
    else
    {
        QMessageBox::warning(this, "Login", "Not valid");
    }

}

