#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //instancia um botao
    m_button = new QPushButton("Alerta", this);

    //Define a geometria do botao(Tamanho e posicao)
    m_button->setGeometry( QRect(QPoint(100, 100), QSize(200, 50)));

    //conectando o sinal do clic do botao ao slot
    connect(m_button, &QPushButton::clicked, this, &MainWindow::on_button_cli);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_cli()
{
    m_button->setText("Foi clicado!");
}

