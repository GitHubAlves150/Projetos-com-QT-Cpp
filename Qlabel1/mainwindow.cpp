#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    QGridLayout *layout;
    QPushButton *btn_Envia;
    QLabel      *txt_mostra_valor;
    QWidget     *widget;
    QLineEdit   *txt_Resina;
*/
    //iintancio os campos
    btn_Envia        = new QPushButton("Envia", this);
    txt_mostra_valor = new QLabel("Titulo", this);
    centralwidget    = new QWidget(this);
    txt_Resina       = new QLineEdit(this);
    //Cria o layout de grade
    layout           = new QGridLayout();

    btn_Envia->setFixedSize(100, 50);
    // Adiciona widgets às células da grade
    layout->addWidget(btn_Envia, 0, 0);
    layout->addWidget(txt_mostra_valor, 0, 1);






// Configura o layout no centralWidget
    centralwidget->setLayout(layout);
    setCentralWidget(centralwidget);


}

MainWindow::~MainWindow()
{
    delete ui;
}
