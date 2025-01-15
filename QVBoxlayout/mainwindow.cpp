#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window->setWindowTitle("Exemplode layout vertical");
    window->resize(300, 600);

    layout->addWidget(botao1);
    layout->addWidget(botao2);
    layout->addWidget(botao3);

    layout->addStretch();//adiciona espaços flexiveis no final

    //define layout no widget principal
    window->setLayout(layout);

    QObject::connect(botao1, &QPushButton::clicked, [&](){QMessageBox::information(this, "Botao 1", "botao 1"); });
    QObject::connect(botao2, &QPushButton::clicked, [&](){QMessageBox::information(this, "Botao 2", "botao 2"); });
    QObject::connect(botao3, &QPushButton::clicked, [&](){QMessageBox::information(this, "Botao 3", "botao 3"); });
    window->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
