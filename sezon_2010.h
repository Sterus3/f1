#ifndef SEZON_2010_H
#define SEZON_2010_H

#include <QDialog>

namespace Ui {
class Sezon_2010;
}

class Sezon_2010 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2010(QWidget *parent = nullptr);
    ~Sezon_2010();

private:
    Ui::Sezon_2010 *ui;
};

#endif // SEZON_2010_H
