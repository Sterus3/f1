#ifndef GEORGE_RUSSEL_H
#define GEORGE_RUSSEL_H

#include <QDialog>

namespace Ui {
class George_russel;
}

class George_russel : public QDialog
{
    Q_OBJECT

public:
    explicit George_russel(QWidget *parent = nullptr);
    ~George_russel();

private:
    Ui::George_russel *ui;
};

#endif // GEORGE_RUSSEL_H
