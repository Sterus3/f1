#ifndef KIMI_RAIKKONEN_H
#define KIMI_RAIKKONEN_H

#include <QDialog>

namespace Ui {
class Kimi_raikkonen;
}

class Kimi_raikkonen : public QDialog
{
    Q_OBJECT

public:
    explicit Kimi_raikkonen(QWidget *parent = nullptr);
    ~Kimi_raikkonen();

private:
    Ui::Kimi_raikkonen *ui;
};

#endif // KIMI_RAIKKONEN_H
