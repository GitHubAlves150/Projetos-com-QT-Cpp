#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
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
    void set_Layout();


    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn_Calcula;
    QLineEdit *line1;
    QLineEdit *line2;
    QLineEdit *line3;
    QLineEdit *line4;
    QLabel *label_R1;
    QLabel *label_R2;
    QLabel *label_Geral;

    QHBoxLayout *layoutHBOX1;
    QHBoxLayout *layoutHBOX2;
    QHBoxLayout *layoutHBOX3;
    QVBoxLayout *layout_H1_H2_H3;

    QHBoxLayout *layoutHBOX4;
    QHBoxLayout *layoutHBOX5;
    QHBoxLayout *layoutHBOX6;
    QVBoxLayout *layout_H4_H5_H6;

    QHBoxLayout *layoutV7;

    QWidget *centralwidget;
    QVBoxLayout *mainlayout;




};
#endif // MAINWINDOW_H
