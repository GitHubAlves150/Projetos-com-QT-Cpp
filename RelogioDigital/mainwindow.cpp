#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Tempo = new QTimer(this);
    connect(Tempo, SIGNAL( timeout() ), this, SLOT(AtualizaRelogio()));
    Tempo->start(1000);
}

void MainWindow::AtualizaRelogio()
{
    QTime tempoAtual=QTime::currentTime();//Pega o tempo atual do sistema do computador
    QString TempoTexto= tempoAtual.toString("hh:mm:ss");
    ui->Relogio->setText(TempoTexto);

}


MainWindow::~MainWindow()
{
    delete ui;
}
