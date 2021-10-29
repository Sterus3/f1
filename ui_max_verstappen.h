/********************************************************************************
** Form generated from reading UI file 'max_verstappen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAX_VERSTAPPEN_H
#define UI_MAX_VERSTAPPEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Max_Verstappen
{
public:

    void setupUi(QDialog *Max_Verstappen)
    {
        if (Max_Verstappen->objectName().isEmpty())
            Max_Verstappen->setObjectName(QString::fromUtf8("Max_Verstappen"));
        Max_Verstappen->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Red Bull.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Max_Verstappen->setWindowIcon(icon);

        retranslateUi(Max_Verstappen);

        QMetaObject::connectSlotsByName(Max_Verstappen);
    } // setupUi

    void retranslateUi(QDialog *Max_Verstappen)
    {
        Max_Verstappen->setWindowTitle(QCoreApplication::translate("Max_Verstappen", "Red Bull: Max Verstappen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Max_Verstappen: public Ui_Max_Verstappen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAX_VERSTAPPEN_H
