#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    layoutHorizontal= new QHBoxLayout();
    button1= new QPushButton("Botao 1");
    button2= new QPushButton("Botao 2");
    button3= new QPushButton("Botao 3");

    layoutHorizontal->addWidget(button1);
    layoutHorizontal->addWidget(button2);
    layoutHorizontal->addWidget(button3);


    central= new QWidget(this);
    central->setLayout(layoutHorizontal);

    setCentralWidget(central);
}

MainWindow::~MainWindow()
{
    delete ui;
}
