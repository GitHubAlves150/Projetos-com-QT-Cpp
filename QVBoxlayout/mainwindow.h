#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QApplication>
#include <QMessageBox>

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

private:
    Ui::MainWindow *ui;
    QWidget     *window= new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;
    QPushButton * botao1= new QPushButton("Botao 1");
    QPushButton * botao2= new QPushButton("Botao 2");
    QPushButton * botao3= new QPushButton("Botao 3");

};
#endif // MAINWINDOW_H
