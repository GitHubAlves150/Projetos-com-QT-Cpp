#ifndef FM_GESTAOVENDAS_H
#define FM_GESTAOVENDAS_H

#include <QDialog>

namespace Ui {
class fm_Gestaovendas;
}

class fm_Gestaovendas : public QDialog
{
    Q_OBJECT

public:
    explicit fm_Gestaovendas(QWidget *parent = nullptr);
    ~fm_Gestaovendas();

private:
    Ui::fm_Gestaovendas *ui;
};

#endif // FM_GESTAOVENDAS_H
