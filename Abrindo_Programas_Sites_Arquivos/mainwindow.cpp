#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString Site="https://www.youtube.com/";
    //QString Site="file://C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Notepad++.lnk" ;
    QDesktopServices::openUrl(QUrl(Site));




}


void MainWindow::on_pushButton_2_clicked()
{
    QString Site="file:///C:/Program Files/CodeBlocks/codeblocks.exe" ;
    QDesktopServices::openUrl(QUrl(Site));
}

