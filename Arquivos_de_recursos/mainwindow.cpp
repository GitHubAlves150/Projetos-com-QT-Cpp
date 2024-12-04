#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo_Engenagem(":/imgs/Designer.jpeg");
    ui->Logo_eng->setPixmap(logo_Engenagem);
}




MainWindow::~MainWindow()
{
    delete ui;
}
