#ifndef NATEPNY_WYSCIG_H
#define NATEPNY_WYSCIG_H

#include <QDialog>

namespace Ui {
class Natepny_wyscig;
}

class Natepny_wyscig : public QDialog
{
    Q_OBJECT

public:
    explicit Natepny_wyscig(QWidget *parent = nullptr);
    ~Natepny_wyscig();

private:
    Ui::Natepny_wyscig *ui;
};

#endif // NATEPNY_WYSCIG_H
