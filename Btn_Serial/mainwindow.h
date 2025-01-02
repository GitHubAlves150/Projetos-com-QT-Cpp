#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QSerialPort>
#include <QPushButton>
#include <QMessageBox>
#include <QByteArray>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void sendForwardCommand();//Slot para lidar com o clik d botao
    void sendReverseCommand();
private:
    Ui::MainWindow *ui;
    QPushButton *UP_Button;//Ponteiro para um botão
    QPushButton *DOW_Button;//Ponteiro para um botão

    QSerialPort *seriaPort;
};
#endif // MAINWINDOW_H
