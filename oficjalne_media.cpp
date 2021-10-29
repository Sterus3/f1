#include "oficjalne_media.h"
#include "ui_oficjalne_media.h"
#include <QUrl>
#include <QDesktopServices>

Oficjalne_media::Oficjalne_media(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oficjalne_media)
{
    ui->setupUi(this);
}

Oficjalne_media::~Oficjalne_media()
{
    delete ui;
}

void Oficjalne_media::on_pushButton_clicked()
{
    QString link="http://www.f1.com";
    QDesktopServices::openUrl(QUrl(link));
}


void Oficjalne_media::on_pushButton_2_clicked()
{
    QString link="https://www.facebook.com/Formula1";
    QDesktopServices::openUrl(QUrl(link));
}


void Oficjalne_media::on_pushButton_3_clicked()
{
    QString link="https://twitter.com/F1?ref_src=twsrc%5Egoogle%7Ctwcamp%5Eserp%7Ctwgr%5Eauthor";
    QDesktopServices::openUrl(QUrl(link));
}



void Oficjalne_media::on_pushButton_4_clicked()
{
    QString link="https://www.youtube.com/user/Formula1";
    QDesktopServices::openUrl(QUrl(link));
}


