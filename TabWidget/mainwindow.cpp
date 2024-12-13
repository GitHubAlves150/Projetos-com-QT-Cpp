#include "mainwindow.h"
#include "ui_mainwindow.h"

int i=0;

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

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    /*
    if(index == 1)
    {
        ui->tabWidget->removeTab(1);

    }
    else if(index ==0)
    {
        ui->tabWidget->removeTab(0);
    }
*/

ui->tabWidget->removeTab(index);
}


void MainWindow::on_pushButton_clicked()
{

  ui->tabWidget->addTab( new QWidget, "nova aba: "+ QString::number(ui->tabWidget->count()+1));//cnversao de interio para string

}




