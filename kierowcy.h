#ifndef KIEROWCY_H
#define KIEROWCY_H

#include <QDialog>

namespace Ui {
class Kierowcy;
}

class Kierowcy : public QDialog
{
    Q_OBJECT

public:
    explicit Kierowcy(QWidget *parent = nullptr);
    ~Kierowcy();

private:
    Ui::Kierowcy *ui;
};

#endif // KIEROWCY_H
