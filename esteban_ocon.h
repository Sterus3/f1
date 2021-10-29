#ifndef ESTEBAN_OCON_H
#define ESTEBAN_OCON_H

#include <QDialog>

namespace Ui {
class Esteban_ocon;
}

class Esteban_ocon : public QDialog
{
    Q_OBJECT

public:
    explicit Esteban_ocon(QWidget *parent = nullptr);
    ~Esteban_ocon();

private:
    Ui::Esteban_ocon *ui;
};

#endif // ESTEBAN_OCON_H
