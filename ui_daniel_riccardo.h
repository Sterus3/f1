/********************************************************************************
** Form generated from reading UI file 'daniel_riccardo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANIEL_RICCARDO_H
#define UI_DANIEL_RICCARDO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Daniel_Riccardo
{
public:

    void setupUi(QDialog *Daniel_Riccardo)
    {
        if (Daniel_Riccardo->objectName().isEmpty())
            Daniel_Riccardo->setObjectName(QString::fromUtf8("Daniel_Riccardo"));
        Daniel_Riccardo->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/mclaren-f1-team-logo-1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Daniel_Riccardo->setWindowIcon(icon);

        retranslateUi(Daniel_Riccardo);

        QMetaObject::connectSlotsByName(Daniel_Riccardo);
    } // setupUi

    void retranslateUi(QDialog *Daniel_Riccardo)
    {
        Daniel_Riccardo->setWindowTitle(QCoreApplication::translate("Daniel_Riccardo", "McLaren: Daniel Riccardo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Daniel_Riccardo: public Ui_Daniel_Riccardo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANIEL_RICCARDO_H
