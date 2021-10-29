#ifndef SEZON_2020_H
#define SEZON_2020_H

#include <QDialog>

namespace Ui {
class Sezon_2020;
}

class Sezon_2020 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2020(QWidget *parent = nullptr);
    ~Sezon_2020();

private:
    Ui::Sezon_2020 *ui;
};

#endif // SEZON_2020_H
