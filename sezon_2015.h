#ifndef SEZON_2015_H
#define SEZON_2015_H

#include <QDialog>

namespace Ui {
class Sezon_2015;
}

class Sezon_2015 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2015(QWidget *parent = nullptr);
    ~Sezon_2015();

private:
    Ui::Sezon_2015 *ui;
};

#endif // SEZON_2015_H
