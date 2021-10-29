#ifndef SEZON_2017_H
#define SEZON_2017_H

#include <QDialog>

namespace Ui {
class Sezon_2017;
}

class Sezon_2017 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2017(QWidget *parent = nullptr);
    ~Sezon_2017();

private:
    Ui::Sezon_2017 *ui;
};

#endif // SEZON_2017_H
