#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QWidget>

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
    QHBoxLayout  *layoutPrincipal;
    QVBoxLayout  *layoutDireito;
    QVBoxLayout  *layoutEsquerdo;
    QPushButton  *Calcular;
    QLineEdit    *txt_resina;
    QLineEdit    *txt_tempo;
    QLabel       *label_resina;
    QLabel       *label_tempo;
    QWidget      *centralPage;
};
#endif // MAINWINDOW_H
