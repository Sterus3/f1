#ifndef LANDO_NORRIS_H
#define LANDO_NORRIS_H

#include <QDialog>

namespace Ui {
class Lando_norris;
}

class Lando_norris : public QDialog
{
    Q_OBJECT

public:
    explicit Lando_norris(QWidget *parent = nullptr);
    ~Lando_norris();

private:
    Ui::Lando_norris *ui;
};

#endif // LANDO_NORRIS_H
