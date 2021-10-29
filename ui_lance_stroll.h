/********************************************************************************
** Form generated from reading UI file 'lance_stroll.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANCE_STROLL_H
#define UI_LANCE_STROLL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Lance_stroll
{
public:

    void setupUi(QDialog *Lance_stroll)
    {
        if (Lance_stroll->objectName().isEmpty())
            Lance_stroll->setObjectName(QString::fromUtf8("Lance_stroll"));
        Lance_stroll->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/1610642928926.png"), QSize(), QIcon::Normal, QIcon::Off);
        Lance_stroll->setWindowIcon(icon);

        retranslateUi(Lance_stroll);

        QMetaObject::connectSlotsByName(Lance_stroll);
    } // setupUi

    void retranslateUi(QDialog *Lance_stroll)
    {
        Lance_stroll->setWindowTitle(QCoreApplication::translate("Lance_stroll", "Aston Martin: Lance Stroll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lance_stroll: public Ui_Lance_stroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANCE_STROLL_H
