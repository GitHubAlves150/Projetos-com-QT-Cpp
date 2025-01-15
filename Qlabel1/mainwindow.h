#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QLineEdit>


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
    QGridLayout *layout;
    QPushButton *btn_Envia;
    QLabel      *txt_mostra_valor;
    QWidget     *centralwidget;
    QLineEdit   *txt_Resina;

};
#endif // MAINWINDOW_H
