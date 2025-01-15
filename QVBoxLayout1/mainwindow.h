#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    QPushButton *btn_Envia;
    QLineEdit   *txt_CampoResina;
    QLineEdit   *txt_TempoImpressao;
    QVBoxLayout *layoutVertical;
    QLabel      *Tempo;

    QWidget *centralWindow;
};
#endif // MAINWINDOW_H
