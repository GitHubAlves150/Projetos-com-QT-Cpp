#ifndef ADD_USER_H
#define ADD_USER_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>


namespace Ui {
class Add_user;
}

class Add_user : public QDialog
{
    Q_OBJECT

public:
    explicit Add_user(QWidget *parent = nullptr);
    ~Add_user();

private:
    Ui::Add_user *ui;
    QLabel *label;
    QVBoxLayout *layout;
};

#endif // ADD_USER_H
