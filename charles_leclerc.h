#ifndef CHARLES_LECLERC_H
#define CHARLES_LECLERC_H

#include <QDialog>

namespace Ui {
class Charles_leclerc;
}

class Charles_leclerc : public QDialog
{
    Q_OBJECT

public:
    explicit Charles_leclerc(QWidget *parent = nullptr);
    ~Charles_leclerc();

private:
    Ui::Charles_leclerc *ui;
};

#endif // CHARLES_LECLERC_H
