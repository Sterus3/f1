/********************************************************************************
** Form generated from reading UI file 'pierre_gasly.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIERRE_GASLY_H
#define UI_PIERRE_GASLY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Pierre_gasly
{
public:

    void setupUi(QDialog *Pierre_gasly)
    {
        if (Pierre_gasly->objectName().isEmpty())
            Pierre_gasly->setObjectName(QString::fromUtf8("Pierre_gasly"));
        Pierre_gasly->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Scuderia_Alpha-Tauri.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Pierre_gasly->setWindowIcon(icon);

        retranslateUi(Pierre_gasly);

        QMetaObject::connectSlotsByName(Pierre_gasly);
    } // setupUi

    void retranslateUi(QDialog *Pierre_gasly)
    {
        Pierre_gasly->setWindowTitle(QCoreApplication::translate("Pierre_gasly", "Alpha Tauri: Pierre Gasly", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pierre_gasly: public Ui_Pierre_gasly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIERRE_GASLY_H
