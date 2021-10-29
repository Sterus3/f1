#ifndef DRUGIE_OKNO_H
#define DRUGIE_OKNO_H

#include <QDialog>

namespace Ui {
class Drugie_Okno;
}

class Drugie_Okno : public QDialog
{
    Q_OBJECT

public:
    explicit Drugie_Okno(QWidget *parent = nullptr);
    ~Drugie_Okno();

private:
    Ui::Drugie_Okno *ui;
};

#endif // DRUGIE_OKNO_H
