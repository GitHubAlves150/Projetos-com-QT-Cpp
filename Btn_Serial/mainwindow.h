#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QSerialPort>
#include <QPushButton>
#include <QMessageBox>
#include <QByteArray>
#include <QGroupBox>
#include <QVBoxLayout>


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
    void SetSerialPort();
    void SetGroupBoxEixo_A();
    void SetButtons();
    ~MainWindow();

private slots:
    void sendForwardCommandEixoA_Dir();//Slot para lidar com o clik d botao
    void sendForwardCommandEixoA_Esq();

private:
    Ui::MainWindow *ui;  
    QSerialPort *seriaPort;
    QGroupBox *my_GroupBox;
    QPushButton *my_botton1;
    QPushButton *my_botton2;
    QVBoxLayout *vBox;

};
#endif // MAINWINDOW_H



