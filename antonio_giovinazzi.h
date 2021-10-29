#ifndef ANTONIO_GIOVINAZZI_H
#define ANTONIO_GIOVINAZZI_H

#include <QDialog>

namespace Ui {
class Antonio_giovinazzi;
}

class Antonio_giovinazzi : public QDialog
{
    Q_OBJECT

public:
    explicit Antonio_giovinazzi(QWidget *parent = nullptr);
    ~Antonio_giovinazzi();

private:
    Ui::Antonio_giovinazzi *ui;
};

#endif // ANTONIO_GIOVINAZZI_H
