#ifndef SEZON_2018_H
#define SEZON_2018_H

#include <QDialog>

namespace Ui {
class Sezon_2018;
}

class Sezon_2018 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2018(QWidget *parent = nullptr);
    ~Sezon_2018();

private:
    Ui::Sezon_2018 *ui;
};

#endif // SEZON_2018_H
