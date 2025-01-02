#include "qteste.h"
#include "ui_qteste.h"

Qteste::Qteste(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Qteste)
{
    ui->setupUi(this);

    // Inicializa o QStackedWidget
    _stackedWidget = new QStackedWidget(this);

    // Cria páginas
    QWidget *page1 = new QWidget();
    QWidget *page2 = new QWidget();

    // Configurações para página 1
    QLabel *label1 = new QLabel("Esta é a Página 1", page1);
    QPushButton *buttonToPage2 = new QPushButton("Ir para Página 2", page1);

    // Layout da página 1
    QVBoxLayout *layout1 = new QVBoxLayout(page1);
    layout1->addWidget(label1);
    layout1->addWidget(buttonToPage2);

    // Configurações para página 2
    QLabel *label2 = new QLabel("Esta é a Página 2", page2);
    QPushButton *buttonToPage1 = new QPushButton("Voltar para Página 1", page2);

    // Layout da página 2
    QVBoxLayout *layout2 = new QVBoxLayout(page2);
    layout2->addWidget(label2);
    layout2->addWidget(buttonToPage1);

    // Adiciona as páginas ao QStackedWidget
    _stackedWidget->addWidget(page1);
    _stackedWidget->addWidget(page2);

    // Define o layout principal da janela
    setCentralWidget(_stackedWidget);

    // Conecta os botões aos slots
    connect(buttonToPage2, &QPushButton::clicked, this, &Qteste::on_buttonPage2_clicked);
    connect(buttonToPage1, &QPushButton::clicked, this, &Qteste::on_buttonPage1_clicked);

}

Qteste::~Qteste()
{
    delete ui;
}

void Qteste::on_stackedWidget_currentChanged(int arg1)
{

}
void Qteste::on_buttonPage1_clicked() {
    _stackedWidget->setCurrentIndex(0); // Exibe a Página 1
}

void Qteste::on_buttonPage2_clicked() {
    _stackedWidget->setCurrentIndex(1); // Exibe a Página 2
}

