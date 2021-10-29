#ifndef SEZON_2016_H
#define SEZON_2016_H

#include <QDialog>

namespace Ui {
class Sezon_2016;
}

class Sezon_2016 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2016(QWidget *parent = nullptr);
    ~Sezon_2016();

private:
    Ui::Sezon_2016 *ui;
};

#endif // SEZON_2016_H
