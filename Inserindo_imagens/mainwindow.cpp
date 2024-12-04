#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //cria um objeto
    QPixmap logo("C:/Users/Lucas Alves/Desktop/Designer.jpeg");//objeto logo
   ui->logoMap->setPixmap(logo.scaled(191, 141, Qt::KeepAspectRatio));
    //ui->logoMap->setPixmap(logo);
}

//youre code





MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap imge("C:/Users/Lucas Alves/Desktop/eng.png");//objeto logo
    ui->logoMap->setPixmap(imge.scaled(100, 100, Qt::KeepAspectRatio));

}

