#ifndef SEZON_2014_H
#define SEZON_2014_H

#include <QDialog>

namespace Ui {
class Sezon_2014;
}

class Sezon_2014 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2014(QWidget *parent = nullptr);
    ~Sezon_2014();

private:
    Ui::Sezon_2014 *ui;
};

#endif // SEZON_2014_H
