/********************************************************************************
** Form generated from reading UI file 'fileviewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEVIEWER_H
#define UI_FILEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileViewer
{
public:

    void setupUi(QWidget *FileViewer)
    {
        if (FileViewer->objectName().isEmpty())
            FileViewer->setObjectName(QString::fromUtf8("FileViewer"));
        FileViewer->resize(400, 300);

        retranslateUi(FileViewer);

        QMetaObject::connectSlotsByName(FileViewer);
    } // setupUi

    void retranslateUi(QWidget *FileViewer)
    {
        FileViewer->setWindowTitle(QCoreApplication::translate("FileViewer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileViewer: public Ui_FileViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEVIEWER_H
