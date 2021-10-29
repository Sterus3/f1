#ifndef MICK_SCHUMACHER_H
#define MICK_SCHUMACHER_H

#include <QDialog>

namespace Ui {
class Mick_Schumacher;
}

class Mick_Schumacher : public QDialog
{
    Q_OBJECT

public:
    explicit Mick_Schumacher(QWidget *parent = nullptr);
    ~Mick_Schumacher();

private:
    Ui::Mick_Schumacher *ui;
};

#endif // MICK_SCHUMACHER_H
