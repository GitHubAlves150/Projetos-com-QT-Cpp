#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_actionNew_project_triggered()//o que o menu vai fazer ao triggar ele
{
    F_novo f_novo; //estancia um objeto
    f_novo.exec();
}

void MainWindow::on_actionSalva_triggered()
{
    QMessageBox::information(this, "Salvar", "Jesus indisponivel");
}



MainWindow::~MainWindow()
{
    delete ui;
}






