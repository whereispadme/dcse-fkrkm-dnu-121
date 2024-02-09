/********************************************************************************
** Form generated from reading UI file 'hemisphereform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEMISPHEREFORM_H
#define UI_HEMISPHEREFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hemisphereForm
{
public:
    QGroupBox *groupBox;
    QPushButton *applyPushButton;
    QLabel *label;
    QLineEdit *radiusLineEdit;

    void setupUi(QWidget *hemisphereForm)
    {
        if (hemisphereForm->objectName().isEmpty())
            hemisphereForm->setObjectName(QString::fromUtf8("hemisphereForm"));
        hemisphereForm->resize(400, 182);
        groupBox = new QGroupBox(hemisphereForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 361, 151));
        applyPushButton = new QPushButton(groupBox);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(20, 100, 321, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 181, 21));
        radiusLineEdit = new QLineEdit(groupBox);
        radiusLineEdit->setObjectName(QString::fromUtf8("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(210, 50, 131, 24));

        retranslateUi(hemisphereForm);

        QMetaObject::connectSlotsByName(hemisphereForm);
    } // setupUi

    void retranslateUi(QWidget *hemisphereForm)
    {
        hemisphereForm->setWindowTitle(QCoreApplication::translate("hemisphereForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("hemisphereForm", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        applyPushButton->setText(QCoreApplication::translate("hemisphereForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("hemisphereForm", "\320\240\320\260\320\264\320\270\321\203\321\201      -->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hemisphereForm: public Ui_hemisphereForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEMISPHEREFORM_H
