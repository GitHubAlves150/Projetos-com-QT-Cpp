#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cliente.h"
#include "produto.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //cria o QStackedWidget
    stackedWidget = new QStackedWidget(this);

    //cria a pagina do cliente
    Cliente *clientePage = new Cliente(this);//this é o pai da instãncia
    //stackedWidget->addWidget(clientePage);

    //cria o botao de navagação
    buttonCliente= new QPushButton("Cliente", this);
    //connect(buttonCliente, &QPushButton::clicked, this, &MainWindow::showCliente);
    connect(buttonCliente, &QPushButton::clicked, this, &MainWindow::showCliente);

    //layout para os botoes de navegação(lado esqeurdo);
    QVBoxLayout *menuLayout = new QVBoxLayout();
    menuLayout->addWidget(buttonCliente);
    menuLayout->addStretch();//adiciona espaços flexiveis abaixo

    //layout principal para dividir o menu e o QStackedWidget
    QHBoxLayout *mainLayout = new QHBoxLayout();
    mainLayout->addLayout(menuLayout);//Adiciona o menu de navegação a esquerda
    mainLayout->addWidget(stackedWidget);//Adiciona o QStackedWidget a esquerda

    //Define o layout principal em um widget central
    QWidget *centralWidget= new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);

    setWindowTitle("Exemplo lodular com QStackedWidget");
    resize(600, 400);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showCliente()
{

    Cliente *clientePage = new Cliente(this);//this é o pai da instãncia
    stackedWidget->addWidget(clientePage);
    //stackedWidget->setCurrentIndex(1);

     //stackedWidget->setCurrentWidget(stackedWidget->widget((0) ));//mostra a pagina cliente
    //stackedWidget->setCurrentIndex(0);//mostra a pagina cliente

}









