#ifndef SEZON_2013_H
#define SEZON_2013_H

#include <QDialog>

namespace Ui {
class Sezon_2013;
}

class Sezon_2013 : public QDialog
{
    Q_OBJECT

public:
    explicit Sezon_2013(QWidget *parent = nullptr);
    ~Sezon_2013();

private:
    Ui::Sezon_2013 *ui;
};

#endif // SEZON_2013_H
