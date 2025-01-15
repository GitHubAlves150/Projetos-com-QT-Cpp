#include "cliente.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>

Cliente::Cliente(QWidget *parent):QWidget(parent)
{


    //cria os botoes
    btnNome = new QPushButton("Nome");
    btnIdade = new QPushButton("Idade");
    btnCidade = new QPushButton("Cidade");
    btnCEP= new QPushButton("CEP");

    //organiza os botoes em um layout vertical
    QVBoxLayout * layout= new QVBoxLayout(this);
    layout->addWidget(btnCEP);
    layout->addWidget(btnNome);
    layout->addWidget(btnIdade);
    layout->addWidget(btnCidade);

    //define o layout para a tela
    this->setLayout(layout);

}
