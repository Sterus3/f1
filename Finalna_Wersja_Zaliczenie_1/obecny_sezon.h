#ifndef OBECNY_SEZON_H
#define OBECNY_SEZON_H

#include <QDialog>

namespace Ui {
class Obecny_sezon;
}

class Obecny_sezon : public QDialog
{
    Q_OBJECT

public:
    explicit Obecny_sezon(QWidget *parent = nullptr);
    ~Obecny_sezon();

private:
    Ui::Obecny_sezon *ui;
};

#endif // OBECNY_SEZON_H
