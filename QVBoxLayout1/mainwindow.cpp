#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    QPushButton *btn_Envia;
    QLineEdit   *txt_CampoResina;
    QLineEdit   *txt_TempoImpressao;
    QVBoxLayout *layoutVertical;
    QLabel      *Tempo;
    */

    btn_Envia          =new QPushButton("Enviar");
    txt_CampoResina    =new QLineEdit();
    txt_TempoImpressao =new QLineEdit();
    Tempo              = new QLabel();
    layoutVertical     =new QVBoxLayout();

    txt_CampoResina->setPlaceholderText("ML de resina");
    Tempo->setText("Tempo");

    layoutVertical->addWidget(txt_CampoResina);
    layoutVertical->addWidget(Tempo);
    layoutVertical->addWidget(btn_Envia);
    layoutVertical->addWidget(txt_TempoImpressao);


    centralWindow = new QWidget(this);
    centralWindow->setLayout(layoutVertical);
    this->setCentralWidget(centralWindow);

}

MainWindow::~MainWindow()
{
    delete ui;
}
