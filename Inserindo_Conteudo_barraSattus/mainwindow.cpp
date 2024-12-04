#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Running");
    ui->statusbar->addPermanentWidget(ui->curso_Btn);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_ok_clicked()
{
    ui->statusbar->showMessage("Nome:"+ui->Txt_nome->text()+ "|Email:" +ui->Txt_Email->text());
}


void MainWindow::on_curso_Btn_clicked()
{
    QString msg= "www.youtube.com";
    ui->statusbar->showMessage(msg);
    QMessageBox::about(this, "Canal", msg);

}

