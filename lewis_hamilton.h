#ifndef LEWIS_HAMILTON_H
#define LEWIS_HAMILTON_H

#include <QDialog>

namespace Ui {
class Lewis_hamilton;
}

class Lewis_hamilton : public QDialog
{
    Q_OBJECT

public:
    explicit Lewis_hamilton(QWidget *parent = nullptr);
    ~Lewis_hamilton();

private:
    Ui::Lewis_hamilton *ui;
};

#endif // LEWIS_HAMILTON_H
