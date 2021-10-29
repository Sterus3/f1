/********************************************************************************
** Form generated from reading UI file 'carlos_sainz.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARLOS_SAINZ_H
#define UI_CARLOS_SAINZ_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Carlos_sainz
{
public:

    void setupUi(QDialog *Carlos_sainz)
    {
        if (Carlos_sainz->objectName().isEmpty())
            Carlos_sainz->setObjectName(QString::fromUtf8("Carlos_sainz"));
        Carlos_sainz->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Ferrari.png"), QSize(), QIcon::Normal, QIcon::Off);
        Carlos_sainz->setWindowIcon(icon);

        retranslateUi(Carlos_sainz);

        QMetaObject::connectSlotsByName(Carlos_sainz);
    } // setupUi

    void retranslateUi(QDialog *Carlos_sainz)
    {
        Carlos_sainz->setWindowTitle(QCoreApplication::translate("Carlos_sainz", "Ferrari: Carlos Sainz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Carlos_sainz: public Ui_Carlos_sainz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARLOS_SAINZ_H
