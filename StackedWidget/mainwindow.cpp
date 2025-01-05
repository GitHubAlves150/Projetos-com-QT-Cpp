#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Canabidiol");
    //Cria as paginas
    QWidget *page1=CreatPage1();
    QWidget *page2=CreatPage2();

    //Adiciona as páginas ao QStackedwidget
    _stackedwidget->addWidget(page1);
    _stackedwidget->addWidget(page2);

    //Define o QStackedwidget como widgetcentral
    setCentralWidget(_stackedwidget);

    //configura as janelas principais
    setWindowTitle("Exemplo de QStackedWidget");
    resize(400, 300);
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




MainWindow::~MainWindow()
{
    delete ui;
}



























