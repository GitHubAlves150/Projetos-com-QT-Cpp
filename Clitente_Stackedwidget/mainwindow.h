#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "cliente.h"
#include "produto.h"

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
public slots:
    void showCliente();

private:
    Ui::MainWindow *ui;
    QStackedWidget *stackedWidget;
    QPushButton    *buttonCliente;
};
#endif // MAINWINDOW_H
