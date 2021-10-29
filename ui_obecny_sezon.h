/********************************************************************************
** Form generated from reading UI file 'obecny_sezon.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBECNY_SEZON_H
#define UI_OBECNY_SEZON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Obecny_sezon
{
public:

    void setupUi(QDialog *Obecny_sezon)
    {
        if (Obecny_sezon->objectName().isEmpty())
            Obecny_sezon->setObjectName(QString::fromUtf8("Obecny_sezon"));
        Obecny_sezon->resize(400, 300);

        retranslateUi(Obecny_sezon);

        QMetaObject::connectSlotsByName(Obecny_sezon);
    } // setupUi

    void retranslateUi(QDialog *Obecny_sezon)
    {
        Obecny_sezon->setWindowTitle(QCoreApplication::translate("Obecny_sezon", "Obecny Sezon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Obecny_sezon: public Ui_Obecny_sezon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBECNY_SEZON_H
