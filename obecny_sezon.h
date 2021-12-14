#ifndef OBECNY_SEZON_H
#define OBECNY_SEZON_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class Obecny_sezon;
}

class Obecny_sezon : public QDialog
{
    Q_OBJECT

    QStandardItemModel*tableViewModel;

    void resizeEvent(QResizeEvent *event) override;

public:
    explicit Obecny_sezon(QWidget *parent = nullptr);
    ~Obecny_sezon();

private:
    Ui::Obecny_sezon *ui;
};

#endif // OBECNY_SEZON_H
