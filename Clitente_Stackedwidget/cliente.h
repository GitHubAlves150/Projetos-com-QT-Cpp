#ifndef CLIENTE_H
#define CLIENTE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class Cliente: public QWidget
{
    Q_OBJECT
public:
    Cliente();
    explicit Cliente(QWidget *parent = nullptr);
private:
    QPushButton *btnNome;
    QPushButton *btnIdade;
    QPushButton *btnCidade;
    QPushButton *btnCEP;

};

#endif // CLIENTE_H
