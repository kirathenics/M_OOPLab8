/********************************************************************************
** Form generated from reading UI file 'colorchanger.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORCHANGER_H
#define UI_COLORCHANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorChanger
{
public:

    void setupUi(QWidget *ColorChanger)
    {
        if (ColorChanger->objectName().isEmpty())
            ColorChanger->setObjectName(QString::fromUtf8("ColorChanger"));
        ColorChanger->resize(400, 300);

        retranslateUi(ColorChanger);

        QMetaObject::connectSlotsByName(ColorChanger);
    } // setupUi

    void retranslateUi(QWidget *ColorChanger)
    {
        ColorChanger->setWindowTitle(QCoreApplication::translate("ColorChanger", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorChanger: public Ui_ColorChanger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORCHANGER_H
