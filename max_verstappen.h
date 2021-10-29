#ifndef MAX_VERSTAPPEN_H
#define MAX_VERSTAPPEN_H

#include <QDialog>

namespace Ui {
class Max_Verstappen;
}

class Max_Verstappen : public QDialog
{
    Q_OBJECT

public:
    explicit Max_Verstappen(QWidget *parent = nullptr);
    ~Max_Verstappen();

private:
    Ui::Max_Verstappen *ui;
};

#endif // MAX_VERSTAPPEN_H
