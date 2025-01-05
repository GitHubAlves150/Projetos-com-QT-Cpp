#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){

    ui->setupUi(this);

    SetSerialPort();//configura a porta COM
    SetGroupBoxEixo_A();//configa um grupo de botoes para eixo A


}



MainWindow::~MainWindow()
{
    delete ui;
    seriaPort->close();
}


void MainWindow::sendForwardCommandEixoA_Dir()
{
    QByteArray commando = "1";
    seriaPort->write(commando);
    qDebug() <<"Direita";

}
void MainWindow::sendForwardCommandEixoA_Esq()
{
    QByteArray commando = "2";
    seriaPort->write(commando);
    qDebug() <<"Esquerda";

}

void MainWindow::SetSerialPort()
{
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

}

void MainWindow::SetGroupBoxEixo_A()
{
    my_GroupBox = new QGroupBox("Eixo A", this);
    //Definindo o layout verticcal para o grupo
    SetButtons();

    my_GroupBox->setLayout(vBox);

    my_GroupBox->setGeometry(QRect( QPoint(5, 520), QSize(100, 100)));
}


void MainWindow::SetButtons()
{
    my_botton1 = new QPushButton("Eixo A Dir", this);
    my_botton2 = new QPushButton("Eixo A Esq", this);

    //criação vertical no GroupBox
    vBox = new QVBoxLayout;
    vBox->addWidget(my_botton1);//colcoa o botao dentro do group box
    vBox->addWidget(my_botton2);//colcoa o botao dentro do group box
}





































