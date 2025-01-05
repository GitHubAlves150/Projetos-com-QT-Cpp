#include "serialport.h"
#include "ui_serialport.h"

SerialPort::SerialPort(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SerialPort)
{
    ui->setupUi(this);



}

SerialPort::~SerialPort()
{
    delete ui;
}
