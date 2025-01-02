#ifndef QTESTE_H
#define QTESTE_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QLabel>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class Qteste;
}
QT_END_NAMESPACE

class Qteste : public QMainWindow
{
    Q_OBJECT

public:
    Qteste(QWidget *parent = nullptr);
    ~Qteste();


private slots:
    void on_stackedWidget_currentChanged(int arg1);


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void on_buttonPage2_clicked();
    void on_buttonPage1_clicked();

private:
    Ui::Qteste *ui;
    QStackedWidget *_stackedWidget;
};
#endif // QTESTE_H
