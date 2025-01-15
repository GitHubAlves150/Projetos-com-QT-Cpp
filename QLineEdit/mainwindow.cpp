#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wind= new QWidget(this);

    wind->setWindowTitle("Exemplo de QLineEdit");
    //Layout principal
    layout= new QVBoxLayout(wind);

    //Criação do Qlabel
    label= new QLabel("Digite seu nome", this);

    Campo_txt= new QLineEdit(wind);
    Campo_txt->setPlaceholderText("Exemplo: Joao");
    Campo_txt->setEchoMode(QLineEdit::Password);

    //Adiciona os wiidget ao layout
    layout->addWidget(Campo_txt);
    layout->addWidget(label);

    //Configura a janela e exibe
    wind->setLayout(layout);
    wind->resize(300, 100);
    wind->show();



}

MainWindow::~MainWindow()
{
    delete ui;
}
