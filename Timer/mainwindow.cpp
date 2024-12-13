#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
  int var=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tempo=new QTimer(this);//declarado o objeto tempo do tipo QTimer
    connect(tempo, SIGNAL( timeout() ), this, SLOT( minhaFuncao() ) );
    tempo->start(1000);

}


void MainWindow::minhaFuncao()
{
    qDebug() << "Curso de Qt com C++: Timer";


    qDebug() << ">>" << var;

    var++;

}

MainWindow::~MainWindow()
{
    delete ui;
}
