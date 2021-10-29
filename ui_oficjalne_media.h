/********************************************************************************
** Form generated from reading UI file 'oficjalne_media.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFICJALNE_MEDIA_H
#define UI_OFICJALNE_MEDIA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Oficjalne_media
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Oficjalne_media)
    {
        if (Oficjalne_media->objectName().isEmpty())
            Oficjalne_media->setObjectName(QString::fromUtf8("Oficjalne_media"));
        Oficjalne_media->resize(366, 92);
        pushButton = new QPushButton(Oficjalne_media);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 81, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/f164.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(64, 64));
        pushButton_2 = new QPushButton(Oficjalne_media);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 10, 81, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/jpg/Zdjecia/124010.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(64, 64));
        pushButton_3 = new QPushButton(Oficjalne_media);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 10, 81, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/jpg/Zdjecia/twitter-logo-vector-png-clipart-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(64, 64));
        pushButton_4 = new QPushButton(Oficjalne_media);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 10, 81, 71));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/jpg/Zdjecia/1590430652red-youtube-logo-png-xl.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(64, 64));

        retranslateUi(Oficjalne_media);

        QMetaObject::connectSlotsByName(Oficjalne_media);
    } // setupUi

    void retranslateUi(QDialog *Oficjalne_media)
    {
        Oficjalne_media->setWindowTitle(QCoreApplication::translate("Oficjalne_media", "Oficjalne media", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Oficjalne_media: public Ui_Oficjalne_media {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFICJALNE_MEDIA_H
