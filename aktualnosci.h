#ifndef AKTUALNOSCI_H
#define AKTUALNOSCI_H

#include <QDialog>

namespace Ui {
class Aktualnosci;
}

class Aktualnosci : public QDialog
{
    Q_OBJECT

public:
    explicit Aktualnosci(QWidget *parent = nullptr);
    ~Aktualnosci();

private:
    Ui::Aktualnosci *ui;
};

#endif // AKTUALNOSCI_H
