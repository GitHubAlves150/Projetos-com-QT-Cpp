#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QDialog>

namespace Ui {
class SerialPort;
}

class SerialPort : public QDialog
{
    Q_OBJECT

public:
    explicit SerialPort(QWidget *parent = nullptr);
    ~SerialPort();

private:
    Ui::SerialPort *ui;
};

#endif // SERIALPORT_H
