#ifndef SERGIO_PEREZ_H
#define SERGIO_PEREZ_H

#include <QDialog>

namespace Ui {
class Sergio_perez;
}

class Sergio_perez : public QDialog
{
    Q_OBJECT

public:
    explicit Sergio_perez(QWidget *parent = nullptr);
    ~Sergio_perez();

private:
    Ui::Sergio_perez *ui;
};

#endif // SERGIO_PEREZ_H
