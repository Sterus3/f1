#ifndef NICHOLAS_LATIFI_H
#define NICHOLAS_LATIFI_H

#include <QDialog>

namespace Ui {
class Nicholas_latifi;
}

class Nicholas_latifi : public QDialog
{
    Q_OBJECT

public:
    explicit Nicholas_latifi(QWidget *parent = nullptr);
    ~Nicholas_latifi();

private:
    Ui::Nicholas_latifi *ui;
};

#endif // NICHOLAS_LATIFI_H
