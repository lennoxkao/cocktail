/********************************************************************************
** Form generated from reading UI file 'confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_H
#define UI_CONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_confirm
{
public:
    QPushButton *check;
    QPushButton *cancel;

    void setupUi(QDialog *confirm)
    {
        if (confirm->objectName().isEmpty())
            confirm->setObjectName(QStringLiteral("confirm"));
        confirm->resize(348, 217);
        check = new QPushButton(confirm);
        check->setObjectName(QStringLiteral("check"));
        check->setGeometry(QRect(70, 100, 75, 23));
        cancel = new QPushButton(confirm);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(220, 100, 75, 23));

        retranslateUi(confirm);

        QMetaObject::connectSlotsByName(confirm);
    } // setupUi

    void retranslateUi(QDialog *confirm)
    {
        confirm->setWindowTitle(QApplication::translate("confirm", "Dialog", 0));
        check->setText(QApplication::translate("confirm", "check", 0));
        cancel->setText(QApplication::translate("confirm", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class confirm: public Ui_confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_H
