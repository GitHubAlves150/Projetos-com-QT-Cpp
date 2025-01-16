#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    set_Layout();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::set_Layout()
{

    centralwidget = new QWidget(this);

    btn1 = new QPushButton("btn1");
    line1 = new QLineEdit();
    layoutHBOX1 = new QHBoxLayout();
    layoutHBOX1->addWidget(btn1);
    layoutHBOX1->addWidget(line1);

    btn2 = new QPushButton("btn2");
    line2 = new QLineEdit();
    layoutHBOX2 = new QHBoxLayout();
    layoutHBOX2->addWidget(btn2);
    layoutHBOX2->addWidget(line2);

    label_R1 = new QLabel();
    layoutHBOX3  = new QHBoxLayout();
    layoutHBOX3->addWidget(label_R1);


    layout_H1_H2_H3 = new QVBoxLayout();
    layout_H1_H2_H3->addLayout(layoutHBOX1);
    layout_H1_H2_H3->addLayout(layoutHBOX2);
    layout_H1_H2_H3->addLayout(layoutHBOX3);

    btn3 = new QPushButton("btn3");
    btn3->setFixedSize(200, 150);
    line3= new QLineEdit();
    line3->setFixedSize(200, 30);
    layoutHBOX4 = new QHBoxLayout();
    layoutHBOX4->addWidget(btn3);
    layoutHBOX4->addWidget(line3);

    btn4 = new QPushButton("btn4");
    line4= new QLineEdit();
    label_R2 = new QLabel();
    layoutHBOX5 = new QHBoxLayout();
    layoutHBOX5->addWidget(btn4);
    layoutHBOX5->addWidget(line4);

    layoutHBOX6 = new QHBoxLayout();
    label_R2 = new QLabel();
    layoutHBOX6->addWidget(label_R2);

    layout_H4_H5_H6 = new QVBoxLayout();
    layout_H4_H5_H6->addLayout(layoutHBOX4);
    layout_H4_H5_H6->addLayout(layoutHBOX5);
    layout_H4_H5_H6->addLayout(layoutHBOX6);


    layoutV7 = new QHBoxLayout();
    layoutV7->addLayout(layout_H1_H2_H3);
    layoutV7->addLayout(layout_H4_H5_H6);

    mainlayout = new QVBoxLayout(centralwidget);
    mainlayout->addLayout(layoutV7);
    setCentralWidget(centralwidget);


}

