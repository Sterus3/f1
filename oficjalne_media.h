#ifndef OFICJALNE_MEDIA_H
#define OFICJALNE_MEDIA_H

#include <QDialog>

namespace Ui {
class Oficjalne_media;
}

class Oficjalne_media : public QDialog
{
    Q_OBJECT

public:
    explicit Oficjalne_media(QWidget *parent = nullptr);
    ~Oficjalne_media();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Oficjalne_media *ui;
};

#endif // OFICJALNE_MEDIA_H
