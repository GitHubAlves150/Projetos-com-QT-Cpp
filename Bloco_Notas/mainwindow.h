#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDir>
#include <QPrintDialog>
#include <QPrinter>


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
    void on_actionAbrir_triggered();

    void on_actionNovo_triggered();

    void on_actionSalvar_como_triggered();

    void on_actionSalvar_triggered();

    void on_actionFechar_triggered();

    void on_actionRecortar_triggered();

    void on_actionCopiar_triggered();

    void on_actionColar_triggered();

    void on_actionDesfazer_triggered();

    void on_actionRefazer_triggered();

    void on_pushButton_clicked();

    void on_actionImprimir_triggered();

private:
    Ui::MainWindow *ui;
    QString local_arquivo;
};
#endif // MAINWINDOW_H
