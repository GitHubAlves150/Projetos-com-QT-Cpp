#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //criação do layout de grade
    qgridLayout = new QGridLayout();
    //criação dos botoes
    botao1 = new QPushButton("botao 1", this );
    botao2 = new QPushButton("botao 2", this );
    botao3 = new QPushButton("botao 3", this );
/*
    qgridLayout->addWidget(botao1, 6, 0);
    qgridLayout->addWidget(botao2, 1, 1);
    qgridLayout->addWidget(botao3, 2, 1);
*/
   /*
    botao1->setGeometry(50,50,100,30);
    botao2->setGeometry(200,100,100,30);
    botao3->setGeometry(100,200,100,30);
*/

    QFormLayout *formlayout = new QFormLayout();
    formlayout->addRow("Esquerda", botao1);
    formlayout->addRow("Meio", botao2);
    formlayout->addRow("Direita", botao3);

    QWidget *centralWidget= new QWidget(this);
   // centralWidget->setLayout(qgridLayout);
    centralWidget->setLayout(formlayout);
    setCentralWidget(centralWidget);


}

MainWindow::~MainWindow()
{
    delete ui;
}

