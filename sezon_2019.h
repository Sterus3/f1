#ifndef SEZON_2019_H
#define SEZON_2019_H

#include <QDialog>

namespace Ui {
class Sezon_2019;
}

class Sezon_2019 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2019(QWidget *parent = nullptr);
    ~Sezon_2019();

private:
    Ui::Sezon_2019 *ui;
};

#endif // SEZON_2019_H
