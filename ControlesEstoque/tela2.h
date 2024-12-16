#ifndef TELA2_H
#define TELA2_H

#include <QDialog>

namespace Ui {
class Tela2;
}

class Tela2 : public QDialog
{
    Q_OBJECT

public:
    explicit Tela2(QWidget *parent = nullptr);
    ~Tela2();

private:
    Ui::Tela2 *ui;
};

#endif // TELA2_H
