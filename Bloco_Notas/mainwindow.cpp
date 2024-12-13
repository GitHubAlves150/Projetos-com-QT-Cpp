#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNovo_triggered()
{
    local_arquivo="";
    ui->textEdit->clear();
    ui->textEdit->setFocus();
}

void MainWindow::on_actionAbrir_triggered()
{
    QString filtro="Todos Arquivos man (*.*);; Arquivos blocos (*.txt)";
    QString nomeArquivo = QFileDialog::getOpenFileName(this, "Abrir", QDir::homePath(), filtro);//
    QFile Arquivo(nomeArquivo);

    local_arquivo = nomeArquivo;
    if(!Arquivo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "nao encontrado");
        return ;
    }
    QTextStream entrada(&Arquivo);
    QString texto= entrada.readAll();
    ui->textEdit->setText(texto);
    Arquivo.close();

}

void MainWindow::on_actionSalvar_como_triggered()
{
    QString filtro="Todos Arquivos man (*.*);; Arquivos blocos (*.txt)";

    QString nomeArquivo= QFileDialog::getSaveFileName(this, "Salvar como", QDir::homePath(), filtro);

    local_arquivo = nomeArquivo;
    QFile arquivo(nomeArquivo);
    if(!arquivo.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Erro", "nao abriu o arquivo");
    }

    QTextStream saida(&arquivo);

    QString texto= ui->textEdit->toPlainText();
    saida << texto;

    arquivo.flush();
    arquivo.close();

}


void MainWindow::on_actionSalvar_triggered()
{
    //QString filtro="Todos Arquivos man (*.*);; Arquivos blocos (*.txt)";

   // QString nomeArquivo= QFileDialog::getSaveFileName(this, "Salvar como", QDir::homePath(), filtro);


    QFile arquivo(local_arquivo);
    if(!arquivo.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Erro", "nao abriu o arquivo");
    }

    QTextStream saida(&arquivo);

    QString texto= ui->textEdit->toPlainText();
    saida << texto;

    arquivo.flush();
    arquivo.close();
}


void MainWindow::on_actionFechar_triggered()
{
    close();
}


void MainWindow::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionRecortar_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionColar_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionDesfazer_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRefazer_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "aviso", "erro ao clicar");
}


void MainWindow::on_actionImprimir_triggered()
{
    QPrinter impressao;
    impressao.setPrinterName("Impressora curso Qt");
    QPrintDialog cx_impressora(&impressao, this);
    if(cx_impressora.exec()==QDialog::Rejected)
    {
        return;
    }
    ui->textEdit->print(&impressao);
}










