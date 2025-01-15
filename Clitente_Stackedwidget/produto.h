#ifndef PRODUTO_H
#define PRODUTO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class Produto: public QWidget
{
    Q_OBJECT
public:
    Produto();
    explicit Produto(QWidget *parent = nullptr);
};

#endif // PRODUTO_H
