/********************************************************************************
** Form generated from reading UI file 'sebastian_vettel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEBASTIAN_VETTEL_H
#define UI_SEBASTIAN_VETTEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Sebastian_vettel
{
public:

    void setupUi(QDialog *Sebastian_vettel)
    {
        if (Sebastian_vettel->objectName().isEmpty())
            Sebastian_vettel->setObjectName(QString::fromUtf8("Sebastian_vettel"));
        Sebastian_vettel->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/1610642928926.png"), QSize(), QIcon::Normal, QIcon::Off);
        Sebastian_vettel->setWindowIcon(icon);

        retranslateUi(Sebastian_vettel);

        QMetaObject::connectSlotsByName(Sebastian_vettel);
    } // setupUi

    void retranslateUi(QDialog *Sebastian_vettel)
    {
        Sebastian_vettel->setWindowTitle(QCoreApplication::translate("Sebastian_vettel", "Aston Martin: Sebastian Vettel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sebastian_vettel: public Ui_Sebastian_vettel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEBASTIAN_VETTEL_H
