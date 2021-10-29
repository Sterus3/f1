#ifndef SEZON_2011_H
#define SEZON_2011_H

#include <QDialog>

namespace Ui {
class Sezon_2011;
}

class Sezon_2011 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2011(QWidget *parent = nullptr);
    ~Sezon_2011();

private:
    Ui::Sezon_2011 *ui;
};

#endif // SEZON_2011_H
