#ifndef NIKITA_MAZEPIN_H
#define NIKITA_MAZEPIN_H

#include <QDialog>

namespace Ui {
class Nikita_mazepin;
}

class Nikita_mazepin : public QDialog
{
    Q_OBJECT

public:
    explicit Nikita_mazepin(QWidget *parent = nullptr);
    ~Nikita_mazepin();

private:
    Ui::Nikita_mazepin *ui;
};

#endif // NIKITA_MAZEPIN_H
