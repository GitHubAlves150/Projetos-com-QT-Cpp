#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //instancia os botoes de navegação
    botao1 = new QPushButton("Botao 1");
    botao2 = new QPushButton("Botao 2");
    botao3 = new QPushButton("Botao 3");

    //instancia um label
    label1= new QLabel("Pagina 1");
    label2= new QLabel("Pagina 2");
    label3= new QLabel("Pagina 3");

    //instancia as paginas para QStackedwidget
    page1 = new QWidget(this);
    //instancia o layout vertical onde ficara os botoes
    layoutVpage1 = new QVBoxLayout(page1);
    layoutVpage1->addWidget(label1);

    //pagina 2
    page2 = new QWidget(this);
    layoutVpage2 = new QVBoxLayout(page2);
    layoutVpage2->addWidget(label2);

    //pagina 3
    page3 = new QWidget(this);
    layoutVpage3= new QVBoxLayout(page3);
    layoutVpage3->addWidget(label3);

    //cria o empilhamento
    stackedWidget_= new QStackedWidget(this);
    stackedWidget_->addWidget(page1);
    stackedWidget_->addWidget(page2);
    stackedWidget_->addWidget(page3);

    connect(botao1, &QPushButton::clicked, [&](){stackedWidget_->setCurrentIndex(0);});
    connect(botao2, &QPushButton::clicked, [&](){stackedWidget_->setCurrentIndex(1);});
    connect(botao3, &QPushButton::clicked, [&](){stackedWidget_->setCurrentIndex(2);});



    //layout para os botoes de navegação(lado esquerdo)
    menuLayout = new QVBoxLayout(this);
    menuLayout->addWidget(botao1);
    menuLayout->addWidget(botao2);
    menuLayout->addWidget(botao3);
    menuLayout->addStretch();//adiciona espaço abaixo do botoes

    //layout para dividir menu e QStackedwidget
    mainLayout = new QHBoxLayout();
    mainLayout->addLayout(menuLayout);      //Adiciona o menu de navegação a esquerda
    mainLayout->addWidget(stackedWidget_, 1);//Adiciona o QStackedwidget a direita

    //define o layout principal em um widget central
    centralWidget= new QWidget(this);
    centralWidget->setLayout(mainLayout);

    //Define o widget central na janela principal
    setCentralWidget(centralWidget);

    //configuração inicial da janela
    setWindowTitle("Exemplo de QStackedWidget");

    resize(600, 400);

}

MainWindow::~MainWindow()
{
    delete ui;
}
