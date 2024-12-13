#ifndef F_NOVO_H
#define F_NOVO_H

#include <QDialog>

namespace Ui {
class F_novo;
}

class F_novo : public QDialog//minha nova classe herda atributos da classe QDialog
{
    Q_OBJECT

public:
    explicit F_novo(QWidget *parent = nullptr);
    ~F_novo();

private:
    Ui::F_novo *ui;
};

#endif // F_NOVO_H
