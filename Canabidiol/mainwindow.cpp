#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Canabidiol");
    setUI();
}

//Metodo para criar a pagina 1
QWidget *MainWindow::CreatPage1()
{
    _stackedwidget = new QStackedWidget(this);
    QWidget *page = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(page);

    QPushButton *button = new QPushButton("Ir para a pagina 2", page);
    connect(button, &QPushButton::clicked, this, &MainWindow::showPage2);

    layout->addWidget(button);
    page->setLayout(layout);

    return page;//retorna a pagina cosntruida
}

//Metodo para criar a pagina 1
QWidget *MainWindow::CreatPage2()
{
    QWidget *page = new QWidget(this);
    QVBoxLayout *layout= new QVBoxLayout(page);

    QPushButton *button= new QPushButton("ir para a pagina 1", page);
    connect(button, &QPushButton::clicked, this, &MainWindow::showPage1);

    layout->addWidget(button);
    page->setLayout(layout);

    return page;//retorna a pagina construida

}
//slots para alternar as paginas
void MainWindow::showPage1()
{
    _stackedwidget->setCurrentIndex(0);//Define a pagina 1

}

void MainWindow::showPage2()
{

    _stackedwidget->setCurrentIndex(1);//Define a pagina 2
}


void MainWindow::setUI()
{
    //cria a pagina principal
    QWidget *centralWidget= new QWidget(this);

    //cria o layout principal(horizontal)
    QHBoxLayout *mainLayout = new QHBoxLayout(centralWidget);

    //cria o layout para botoes(vertical)
    QVBoxLayout *buttonLayout = new QVBoxLayout();

    //botoes
    QPushButton *btnPage1= new QPushButton("Pagina 1", centralWidget);
    QPushButton *btnPage2= new QPushButton("Pagina 2", centralWidget);

    //adiciona os botoes ao layout vertical
    buttonLayout->addWidget(btnPage1);
    buttonLayout->addWidget(btnPage2);
    buttonLayout->addStretch();//adiciona espaço flexivel no final

    //cria paginas
    QWidget *Page1 = CreatPage1();
    QWidget *Page2 = CreatPage2();

    //Adiciona as páginas ao QSTackedwidget
    _stackedwidget->addWidget(Page1);
    _stackedwidget->addWidget(Page2);

    //adiciona os layout ao layout principal(horizontal)
    mainLayout->addLayout(buttonLayout);//botoes a esquerda
    mainLayout->addWidget(_stackedwidget, 1);//QStackeda diretia (espancivel)

    //cnecta os botoes
    connect(btnPage1, &QPushButton::clicked, this, &MainWindow::showPage1);
    connect(btnPage2, &QPushButton::clicked, this, &MainWindow::showPage2);

    //Define o layout central da janela principal
    setCentralWidget(centralWidget);

    //configuração da janela
    resize(800, 600);
    setWindowTitle("janela Dividida");

}

MainWindow::~MainWindow()
{
    delete ui;
}



























