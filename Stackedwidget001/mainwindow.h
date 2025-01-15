#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QStackedWidget>
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
    //botoes de navegação
    QPushButton *botao1;
    QPushButton *botao2;
    QPushButton *botao3;

    //cria paginas para qstakedwidget
    QWidget *page1;
    QWidget *page2;
    QWidget *page3;
    QVBoxLayout *layoutVpage1;
    QVBoxLayout *layoutVpage2;
    QVBoxLayout *layoutVpage3;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QStackedWidget *stackedWidget_;

    QVBoxLayout *menuLayout;
    QHBoxLayout *mainLayout;

    QWidget *centralWidget;

};
#endif // MAINWINDOW_H
