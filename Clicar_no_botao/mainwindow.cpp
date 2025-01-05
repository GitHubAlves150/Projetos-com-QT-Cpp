#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _botao1 = new QPushButton("Clik", this);
    connect(_botao1, &QPushButton::clicked, this, &MainWindow::botao1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::botao1()
{

    QMessageBox::information(this, "info", "info");
}
