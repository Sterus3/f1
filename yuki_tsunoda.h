#ifndef YUKI_TSUNODA_H
#define YUKI_TSUNODA_H

#include <QDialog>

namespace Ui {
class Yuki_tsunoda;
}

class Yuki_tsunoda : public QDialog
{
    Q_OBJECT

public:
    explicit Yuki_tsunoda(QWidget *parent = nullptr);
    ~Yuki_tsunoda();

private:
    Ui::Yuki_tsunoda *ui;
};

#endif // YUKI_TSUNODA_H
