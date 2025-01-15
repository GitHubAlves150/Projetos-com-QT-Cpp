#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QWidget>
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
public slots:
    void menssagem();

private:
    Ui::MainWindow *ui;
    QPushButton *btn_Venda;
    QGridLayout *layout;
    QLabel *label_titulo;
    QLabel *label_Rodapé;
    QWidget *centralWidget;

};
#endif // MAINWINDOW_H
