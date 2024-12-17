#ifndef FM_GESTAOCOLABORADORES_H
#define FM_GESTAOCOLABORADORES_H

#include <QDialog>

namespace Ui {
class fm_gestaoColaboradores;
}

class fm_gestaoColaboradores : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaoColaboradores(QWidget *parent = nullptr);
    ~fm_gestaoColaboradores();

private:
    Ui::fm_gestaoColaboradores *ui;
};

#endif // FM_GESTAOCOLABORADORES_H
