#ifndef VALTERI_BOTTAS_H
#define VALTERI_BOTTAS_H

#include <QDialog>

namespace Ui {
class Valteri_Bottas;
}

class Valteri_Bottas : public QDialog
{
    Q_OBJECT

public:
    explicit Valteri_Bottas(QWidget *parent = nullptr);
    ~Valteri_Bottas();

private:
    Ui::Valteri_Bottas *ui;
};

#endif // VALTERI_BOTTAS_H
