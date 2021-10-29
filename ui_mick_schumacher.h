/********************************************************************************
** Form generated from reading UI file 'mick_schumacher.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MICK_SCHUMACHER_H
#define UI_MICK_SCHUMACHER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Mick_Schumacher
{
public:

    void setupUi(QDialog *Mick_Schumacher)
    {
        if (Mick_Schumacher->objectName().isEmpty())
            Mick_Schumacher->setObjectName(QString::fromUtf8("Mick_Schumacher"));
        Mick_Schumacher->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Uralkali_Haas_F1_Team_Logo.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Mick_Schumacher->setWindowIcon(icon);

        retranslateUi(Mick_Schumacher);

        QMetaObject::connectSlotsByName(Mick_Schumacher);
    } // setupUi

    void retranslateUi(QDialog *Mick_Schumacher)
    {
        Mick_Schumacher->setWindowTitle(QCoreApplication::translate("Mick_Schumacher", "Haas: Mick Schumacher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mick_Schumacher: public Ui_Mick_Schumacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MICK_SCHUMACHER_H
