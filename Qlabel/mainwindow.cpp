#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    btn_Venda= new QPushButton("Venda", this);
    label_titulo= new QLabel("Titulo da tela", this);
    label_Rodapé= new QLabel("Rodapé", this);
    //Cria layout de grade
    layout = new QGridLayout();


    //adiciona widget as células da grade
    layout->addWidget(label_titulo, 0, 0, 20, 20);
    layout->addWidget(btn_Venda, 1, 0);
    layout->addWidget(label_Rodapé, 15, 15);

    //configura o layout no centralWidget
    //Uso do setLayout:
    //Como o QMainWindow não permite o uso direto de setLayout, você precisa usar um QWidget como contêiner para o layout e configurá-lo com setCentralWidget.
    centralWidget= new QWidget;
    //Definição do Layout:
    //O layout é atribuído ao centralWidget, que, por sua vez, é definido como o conteúdo central da janela.
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    connect(btn_Venda, &QPushButton::clicked, this, &MainWindow::menssagem);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::menssagem()
{
    QMessageBox::information(this, "info", "Ops");
}
