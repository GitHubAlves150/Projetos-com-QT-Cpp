#include "mainwindow.h"
#include "ui_mainwindow.h"


//Caminho do meu arquivo
QString localArquivo= "C:/Users/Lucas Alves/Documents/Campo_senha/Criando_Arquivos/";
QString nomeArquivo = "CursoQt.txt";


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

void MainWindow::on_bnt_gravar_clicked()
{
    QFile arquivo(localArquivo + nomeArquivo);
    //sistema de segurança de abertura de arquivo
    //somente escrita
    if(!arquivo.open(QFile::Append  | QFile::Text) )
    {
        QMessageBox::warning(this, "Aviso", "Não é possivel abrir o arquivo");

    }

    QTextStream saida(&arquivo);
    QString texto=ui->plainTextEdit->toPlainText();

    saida << texto;

    arquivo.flush();
    arquivo.close();

}



void MainWindow::on_bnt_ler_clicked()
{
    QFile arquivo(localArquivo + nomeArquivo);//path do arquivo
    //sistema de segurança de abertura para leitura do arqutivo
    //somente leitura.
    if(!arquivo.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::about(this, "aviso", "nada pra ler");
    }

    QTextStream entrada(&arquivo);
    QString texto= entrada.readAll();
    ui->plainTextEdit->setPlainText(texto);
    arquivo.close();

}
















