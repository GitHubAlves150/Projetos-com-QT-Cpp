#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){

    ui->setupUi(this);
    //Criação do botao
    UP_Button = new QPushButton("Direita", this);
    DOW_Button = new QPushButton("Esquerda", this);

    //Definindo a geometria do botao(Posição e tamanho)
    UP_Button->setGeometry(QRect(QPoint(400, 100),QSize(200, 50)));
    DOW_Button->setGeometry(QRect(QPoint(100, 100),QSize(200, 50)));

    //configuração da porta serial
    seriaPort = new QSerialPort();

    seriaPort->setPortName("COM3");//Altera para a porta correta
    seriaPort->setBaudRate(QSerialPort::Baud115200);
    seriaPort->setParity(QSerialPort::NoParity);

    seriaPort->setStopBits(QSerialPort::OneStop);
    seriaPort->setFlowControl(QSerialPort::NoFlowControl);

    if(!seriaPort->open(QIODevice::WriteOnly))
    {
        qDebug() << "Erro ao abrir a porta serial" << seriaPort->errorString();
    }

    //Conectando o sinal so slot
    connect(UP_Button, &QPushButton::clicked, this, &MainWindow::sendForwardCommand);
    connect(DOW_Button, &QPushButton::clicked, this, &MainWindow::sendReverseCommand);


}



MainWindow::~MainWindow()
{
    delete ui;
    seriaPort->close();
}


void MainWindow::sendForwardCommand()
{
    QByteArray commando = "1";
    seriaPort->write(commando);
    qDebug() <<"Direita";

}
void MainWindow::sendReverseCommand()
{
    QByteArray commando = "2";
    seriaPort->write(commando);
    qDebug() <<"Esquerda";

}





