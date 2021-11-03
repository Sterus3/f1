#ifndef MEDIA_H
#define MEDIA_H

#include <QDialog>

namespace Ui {
class Media;
}

class Media : public QDialog
{
    Q_OBJECT

public:
    explicit Media(QWidget *parent = nullptr);
    ~Media();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Media *ui;
};

#endif // MEDIA_H
