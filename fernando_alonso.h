#ifndef FERNANDO_ALONSO_H
#define FERNANDO_ALONSO_H

#include <QDialog>

namespace Ui {
class Fernando_alonso;
}

class Fernando_alonso : public QDialog
{
    Q_OBJECT

public:
    explicit Fernando_alonso(QWidget *parent = nullptr);
    ~Fernando_alonso();

private:
    Ui::Fernando_alonso *ui;
};

#endif // FERNANDO_ALONSO_H
