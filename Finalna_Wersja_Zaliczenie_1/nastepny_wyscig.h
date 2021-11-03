#ifndef NASTEPNY_WYSCIG_H
#define NASTEPNY_WYSCIG_H

#include <QDialog>

namespace Ui {
class Nastepny_wyscig;
}

class Nastepny_wyscig : public QDialog
{
    Q_OBJECT

public:
    explicit Nastepny_wyscig(QWidget *parent = nullptr);
    ~Nastepny_wyscig();

private:
    Ui::Nastepny_wyscig *ui;
};

#endif // NASTEPNY_WYSCIG_H
