#ifndef CARLOS_SAINZ_H
#define CARLOS_SAINZ_H

#include <QDialog>

namespace Ui {
class Carlos_sainz;
}

class Carlos_sainz : public QDialog
{
    Q_OBJECT

public:
    explicit Carlos_sainz(QWidget *parent = nullptr);
    ~Carlos_sainz();

private:
    Ui::Carlos_sainz *ui;
};

#endif // CARLOS_SAINZ_H
