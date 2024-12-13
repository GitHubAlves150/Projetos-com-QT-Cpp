#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btn_add_itens_clicked()
{
    ui->listWidget->addItem(ui->txt_item->text());
    ui->txt_item->clear();
    ui->txt_item->setFocus();//mantem o cursor no inicio

}


void MainWindow::on_btn_addSeveral_clicked()
{
    QListWidgetItem *item1= new QListWidgetItem("Americano");
    QListWidgetItem *item2= new QListWidgetItem("Alemao");
    QListWidgetItem *item3= new QListWidgetItem("Portugues");
    QListWidgetItem *item4= new QListWidgetItem("Russo");

    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);

    ui->listWidget->addItem(item3);

    ui->listWidget->addItem(item4);


}


void MainWindow::on_bnt_marcar_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::green);
    ui->listWidget->currentItem()->setBackground(Qt::darkGreen);
}

