/********************************************************************************
** Form generated from reading UI file 'kierowcy.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIEROWCY_H
#define UI_KIEROWCY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Aktualnosci
{
public:

    void setupUi(QDialog *Aktualnosci)
    {
        if (Aktualnosci->objectName().isEmpty())
            Aktualnosci->setObjectName(QString::fromUtf8("Aktualnosci"));
        Aktualnosci->resize(448, 364);

        retranslateUi(Aktualnosci);

        QMetaObject::connectSlotsByName(Aktualnosci);
    } // setupUi

    void retranslateUi(QDialog *Aktualnosci)
    {
        Aktualnosci->setWindowTitle(QCoreApplication::translate("Aktualnosci", "Kierowcy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Aktualnosci: public Ui_Aktualnosci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIEROWCY_H
