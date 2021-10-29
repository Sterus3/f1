#ifndef DANIEL_RICCARDO_H
#define DANIEL_RICCARDO_H

#include <QDialog>

namespace Ui {
class Daniel_Riccardo;
}

class Daniel_Riccardo : public QDialog
{
    Q_OBJECT

public:
    explicit Daniel_Riccardo(QWidget *parent = nullptr);
    ~Daniel_Riccardo();

private:
    Ui::Daniel_Riccardo *ui;
};

#endif // DANIEL_RICCARDO_H
