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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputForm
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *InputForm)
    {
        if (InputForm->objectName().isEmpty())
            InputForm->setObjectName(QString::fromUtf8("InputForm"));
        InputForm->resize(283, 352);
        groupBox = new QGroupBox(InputForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 261, 331));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 221, 24));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 120, 221, 192));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 60, 221, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 26, 221, 31));

        retranslateUi(InputForm);

        QMetaObject::connectSlotsByName(InputForm);
    } // setupUi

    void retranslateUi(QWidget *InputForm)
    {
        InputForm->setWindowTitle(QCoreApplication::translate("InputForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InputForm", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("InputForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        label->setText(QCoreApplication::translate("InputForm", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputForm: public Ui_InputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORM_H
