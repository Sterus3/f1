/********************************************************************************
** Form generated from reading UI file 'sergio_perez.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERGIO_PEREZ_H
#define UI_SERGIO_PEREZ_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Sergio_perez
{
public:

    void setupUi(QDialog *Sergio_perez)
    {
        if (Sergio_perez->objectName().isEmpty())
            Sergio_perez->setObjectName(QString::fromUtf8("Sergio_perez"));
        Sergio_perez->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Red Bull.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Sergio_perez->setWindowIcon(icon);

        retranslateUi(Sergio_perez);

        QMetaObject::connectSlotsByName(Sergio_perez);
    } // setupUi

    void retranslateUi(QDialog *Sergio_perez)
    {
        Sergio_perez->setWindowTitle(QCoreApplication::translate("Sergio_perez", "Red Bull: Sergio Perez", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sergio_perez: public Ui_Sergio_perez {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERGIO_PEREZ_H
