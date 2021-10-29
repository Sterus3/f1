#ifndef PIERRE_GASLY_H
#define PIERRE_GASLY_H

#include <QDialog>

namespace Ui {
class Pierre_gasly;
}

class Pierre_gasly : public QDialog
{
    Q_OBJECT

public:
    explicit Pierre_gasly(QWidget *parent = nullptr);
    ~Pierre_gasly();

private:
    Ui::Pierre_gasly *ui;
};

#endif // PIERRE_GASLY_H
