#ifndef SEZON_2012_H
#define SEZON_2012_H

#include <QDialog>

namespace Ui {
class Sezon_2012;
}

class Sezon_2012 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2012(QWidget *parent = nullptr);
    ~Sezon_2012();

private:
    Ui::Sezon_2012 *ui;
};

#endif // SEZON_2012_H
