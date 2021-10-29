#ifndef SEBASTIAN_VETTEL_H
#define SEBASTIAN_VETTEL_H

#include <QDialog>

namespace Ui {
class Sebastian_vettel;
}

class Sebastian_vettel : public QDialog
{
    Q_OBJECT

public:
    explicit Sebastian_vettel(QWidget *parent = nullptr);
    ~Sebastian_vettel();

private:
    Ui::Sebastian_vettel *ui;
};

#endif // SEBASTIAN_VETTEL_H
