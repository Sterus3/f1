#include "media.h"
#include "ui_media.h"
#include <QUrl>
#include <QDesktopServices>

Media::Media(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Media)
{
    ui->setupUi(this);
}

Media::~Media()
{
    delete ui;
}

void Media::on_pushButton_clicked()
{
    QString link="http://www.f1.com";
    QDesktopServices::openUrl(QUrl(link));
}



void Media::on_pushButton_2_clicked()
{
    QString link="https://www.facebook.com/Formula1";
    QDesktopServices::openUrl(QUrl(link));
}


void Media::on_pushButton_3_clicked()
{
    QString link="https://www.youtube.com/user/Formula1";
    QDesktopServices::openUrl(QUrl(link));
}



void Media::on_pushButton_4_clicked()
{
    QString link="https://twitter.com/F1?ref_src=twsrc%5Egoogle%7Ctwcamp%5Eserp%7Ctwgr%5Eauthor";
    QDesktopServices::openUrl(QUrl(link));
}

