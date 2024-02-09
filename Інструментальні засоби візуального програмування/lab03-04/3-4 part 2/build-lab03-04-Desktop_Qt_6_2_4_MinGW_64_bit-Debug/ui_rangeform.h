/********************************************************************************
** Form generated from reading UI file 'rangeform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANGEFORM_H
#define UI_RANGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rangeform
{
public:
    QGroupBox *groupBox;
    QLineEdit *lastLineEdit;
    QLabel *firstLabel;
    QLabel *lastLabel;
    QLineEdit *firstLineEdit;
    QPushButton *applyPushButton;

    void setupUi(QWidget *rangeform)
    {
        if (rangeform->objectName().isEmpty())
            rangeform->setObjectName(QString::fromUtf8("rangeform"));
        rangeform->resize(319, 181);
        groupBox = new QGroupBox(rangeform);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 131));
        lastLineEdit = new QLineEdit(groupBox);
        lastLineEdit->setObjectName(QString::fromUtf8("lastLineEdit"));
        lastLineEdit->setGeometry(QRect(170, 80, 113, 22));
        firstLabel = new QLabel(groupBox);
        firstLabel->setObjectName(QString::fromUtf8("firstLabel"));
        firstLabel->setGeometry(QRect(20, 40, 151, 21));
        lastLabel = new QLabel(groupBox);
        lastLabel->setObjectName(QString::fromUtf8("lastLabel"));
        lastLabel->setGeometry(QRect(20, 80, 151, 21));
        firstLineEdit = new QLineEdit(groupBox);
        firstLineEdit->setObjectName(QString::fromUtf8("firstLineEdit"));
        firstLineEdit->setGeometry(QRect(170, 40, 113, 22));
        applyPushButton = new QPushButton(rangeform);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(10, 150, 301, 24));

        retranslateUi(rangeform);

        QMetaObject::connectSlotsByName(rangeform);
    } // setupUi

    void retranslateUi(QWidget *rangeform)
    {
        rangeform->setWindowTitle(QCoreApplication::translate("rangeform", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("rangeform", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        firstLabel->setText(QCoreApplication::translate("rangeform", "\320\235\320\270\320\266\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260   -->", nullptr));
        lastLabel->setText(QCoreApplication::translate("rangeform", "\320\222\320\265\321\200\321\205\320\275\321\217\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260   -->", nullptr));
        applyPushButton->setText(QCoreApplication::translate("rangeform", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rangeform: public Ui_rangeform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANGEFORM_H
