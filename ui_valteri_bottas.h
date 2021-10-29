/********************************************************************************
** Form generated from reading UI file 'valteri_bottas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALTERI_BOTTAS_H
#define UI_VALTERI_BOTTAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Valteri_Bottas
{
public:

    void setupUi(QDialog *Valteri_Bottas)
    {
        if (Valteri_Bottas->objectName().isEmpty())
            Valteri_Bottas->setObjectName(QString::fromUtf8("Valteri_Bottas"));
        Valteri_Bottas->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Mercedes.png"), QSize(), QIcon::Normal, QIcon::Off);
        Valteri_Bottas->setWindowIcon(icon);

        retranslateUi(Valteri_Bottas);

        QMetaObject::connectSlotsByName(Valteri_Bottas);
    } // setupUi

    void retranslateUi(QDialog *Valteri_Bottas)
    {
        Valteri_Bottas->setWindowTitle(QCoreApplication::translate("Valteri_Bottas", "Mercedes: Valteri Bottas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valteri_Bottas: public Ui_Valteri_Bottas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALTERI_BOTTAS_H
