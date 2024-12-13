#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // ui->comboBox->addItem("C++");
   // ui->comboBox->addItem("PHP curso em video");
   // ui->comboBox->addItem("JavaScript");
    QString cursos[5]={
                       "C++",
                       "PHP curso em video",
                       "JavaScript",
                       "Delphi"
                       };
    QString icones[5]={":/icones/icones/3D_software_24132.ico",
                       ":/icones/icones/bnb_crypto_icon_264371.ico",
                       ":/icones/icones/Folder_Download_24065.ico",
                       ":/icones/icones/iChat_top_delire_24185.ico"
                      };
    for(int i=0; i<5; i++)
    {
        ui->comboBox->addItem(QIcon(icones[i]), cursos[i]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "Cursos", ui->comboBox->currentText());

}

