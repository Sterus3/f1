#ifndef LANCE_STROLL_H
#define LANCE_STROLL_H

#include <QDialog>

namespace Ui {
class Lance_stroll;
}

class Lance_stroll : public QDialog
{
    Q_OBJECT

public:
    explicit Lance_stroll(QWidget *parent = nullptr);
    ~Lance_stroll();

private:
    Ui::Lance_stroll *ui;
};

#endif // LANCE_STROLL_H
