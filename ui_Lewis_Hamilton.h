/********************************************************************************
** Form generated from reading UI file 'lewis_hamilton.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEWIS_HAMILTON_H
#define UI_LEWIS_HAMILTON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Lewis_hamilton
{
public:

    void setupUi(QDialog *Lewis_hamilton)
    {
        if (Lewis_hamilton->objectName().isEmpty())
            Lewis_hamilton->setObjectName(QString::fromUtf8("Lewis_hamilton"));
        Lewis_hamilton->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Mercedes.png"), QSize(), QIcon::Normal, QIcon::Off);
        Lewis_hamilton->setWindowIcon(icon);

        retranslateUi(Lewis_hamilton);

        QMetaObject::connectSlotsByName(Lewis_hamilton);
    } // setupUi

    void retranslateUi(QDialog *Lewis_hamilton)
    {
        Lewis_hamilton->setWindowTitle(QCoreApplication::translate("Lewis_hamilton", "Mercedes: Lewis Hamilton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lewis_hamilton: public Ui_Lewis_hamilton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEWIS_HAMILTON_H
