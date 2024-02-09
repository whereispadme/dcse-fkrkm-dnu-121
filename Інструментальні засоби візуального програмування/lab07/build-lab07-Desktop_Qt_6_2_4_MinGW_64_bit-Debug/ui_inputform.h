/********************************************************************************
** Form generated from reading UI file 'inputform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFORM_H
#define UI_INPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputForm
{
public:
    QPushButton *applyPushButton;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *InputForm)
    {
        if (InputForm->objectName().isEmpty())
            InputForm->setObjectName(QString::fromUtf8("InputForm"));
        InputForm->resize(291, 192);
        applyPushButton = new QPushButton(InputForm);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(10, 160, 271, 24));
        groupBox = new QGroupBox(InputForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 271, 141));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 70, 113, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 141, 21));

        retranslateUi(InputForm);

        QMetaObject::connectSlotsByName(InputForm);
    } // setupUi

    void retranslateUi(QWidget *InputForm)
    {
        InputForm->setWindowTitle(QCoreApplication::translate("InputForm", "Form", nullptr));
        applyPushButton->setText(QCoreApplication::translate("InputForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InputForm", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QCoreApplication::translate("InputForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\321\200\320\263\321\203\320\274\320\265\320\275\321\202      -->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputForm: public Ui_InputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORM_H
