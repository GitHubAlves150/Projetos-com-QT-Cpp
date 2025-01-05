#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSplitter>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QWidget>
#include <QMessageBox>
#include "add_user.h"

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
    void showPage1();//troca para a pagina 1
    void showPage2();//troca para a pagina 2

private:
    Ui::MainWindow *ui;
    QStackedWidget *_stackedwidget;//Método para empilhar as telas;
    QWidget *CreatPage1();//Método para criar a pagina 1;
    QWidget *CreatPage2();//Método para criar a página 2;



};
#endif // MAINWINDOW_H
