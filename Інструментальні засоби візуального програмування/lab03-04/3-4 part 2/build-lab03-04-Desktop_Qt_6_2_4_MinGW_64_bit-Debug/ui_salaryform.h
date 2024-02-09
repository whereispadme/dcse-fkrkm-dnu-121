/********************************************************************************
** Form generated from reading UI file 'salaryform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALARYFORM_H
#define UI_SALARYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_salaryform
{
public:
    QGroupBox *groupBox;
    QComboBox *firstComboBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *lastComboBox;
    QPushButton *comboxApplyPushButton;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *applyPushButton;
    QGroupBox *groupBox_3;
    QListWidget *listWidget;
    QPushButton *resetPushButton;

    void setupUi(QWidget *salaryform)
    {
        if (salaryform->objectName().isEmpty())
            salaryform->setObjectName(QString::fromUtf8("salaryform"));
        salaryform->resize(378, 590);
        groupBox = new QGroupBox(salaryform);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 361, 151));
        firstComboBox = new QComboBox(groupBox);
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->addItem(QString());
        firstComboBox->setObjectName(QString::fromUtf8("firstComboBox"));
        firstComboBox->setGeometry(QRect(140, 30, 211, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 121, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 121, 21));
        lastComboBox = new QComboBox(groupBox);
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->addItem(QString());
        lastComboBox->setObjectName(QString::fromUtf8("lastComboBox"));
        lastComboBox->setGeometry(QRect(140, 70, 211, 22));
        comboxApplyPushButton = new QPushButton(groupBox);
        comboxApplyPushButton->setObjectName(QString::fromUtf8("comboxApplyPushButton"));
        comboxApplyPushButton->setGeometry(QRect(10, 110, 341, 24));
        groupBox_2 = new QGroupBox(salaryform);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 170, 361, 121));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 131, 21));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 40, 211, 22));
        applyPushButton = new QPushButton(groupBox_2);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(10, 80, 341, 24));
        groupBox_3 = new QGroupBox(salaryform);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 300, 361, 251));
        listWidget = new QListWidget(groupBox_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 341, 221));
        resetPushButton = new QPushButton(salaryform);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(10, 560, 361, 24));

        retranslateUi(salaryform);

        QMetaObject::connectSlotsByName(salaryform);
    } // setupUi

    void retranslateUi(QWidget *salaryform)
    {
        salaryform->setWindowTitle(QCoreApplication::translate("salaryform", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("salaryform", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\200\320\260\321\201\321\207\320\265\321\202\320\260", nullptr));
        firstComboBox->setItemText(0, QCoreApplication::translate("salaryform", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        firstComboBox->setItemText(1, QCoreApplication::translate("salaryform", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        firstComboBox->setItemText(2, QCoreApplication::translate("salaryform", "\320\234\320\260\321\200\321\202", nullptr));
        firstComboBox->setItemText(3, QCoreApplication::translate("salaryform", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        firstComboBox->setItemText(4, QCoreApplication::translate("salaryform", "\320\234\320\260\320\271", nullptr));
        firstComboBox->setItemText(5, QCoreApplication::translate("salaryform", "\320\230\321\216\320\275\321\214", nullptr));
        firstComboBox->setItemText(6, QCoreApplication::translate("salaryform", "\320\230\321\216\320\273\321\214", nullptr));
        firstComboBox->setItemText(7, QCoreApplication::translate("salaryform", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        firstComboBox->setItemText(8, QCoreApplication::translate("salaryform", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        firstComboBox->setItemText(9, QCoreApplication::translate("salaryform", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        firstComboBox->setItemText(10, QCoreApplication::translate("salaryform", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        firstComboBox->setItemText(11, QCoreApplication::translate("salaryform", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        label->setText(QCoreApplication::translate("salaryform", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \320\274\320\265\321\201\321\217\321\206", nullptr));
        label_2->setText(QCoreApplication::translate("salaryform", "\320\232\320\276\320\275\320\265\321\207\320\275\321\213\320\271 \320\274\320\265\321\201\321\217\321\206", nullptr));
        lastComboBox->setItemText(0, QCoreApplication::translate("salaryform", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        lastComboBox->setItemText(1, QCoreApplication::translate("salaryform", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        lastComboBox->setItemText(2, QCoreApplication::translate("salaryform", "\320\234\320\260\321\200\321\202", nullptr));
        lastComboBox->setItemText(3, QCoreApplication::translate("salaryform", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        lastComboBox->setItemText(4, QCoreApplication::translate("salaryform", "\320\234\320\260\320\271", nullptr));
        lastComboBox->setItemText(5, QCoreApplication::translate("salaryform", "\320\230\321\216\320\275\321\214", nullptr));
        lastComboBox->setItemText(6, QCoreApplication::translate("salaryform", "\320\230\321\216\320\273\321\214", nullptr));
        lastComboBox->setItemText(7, QCoreApplication::translate("salaryform", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        lastComboBox->setItemText(8, QCoreApplication::translate("salaryform", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        lastComboBox->setItemText(9, QCoreApplication::translate("salaryform", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        lastComboBox->setItemText(10, QCoreApplication::translate("salaryform", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        lastComboBox->setItemText(11, QCoreApplication::translate("salaryform", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        comboxApplyPushButton->setText(QCoreApplication::translate("salaryform", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("salaryform", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\277\320\276 \320\274\320\265\321\201\321\217\321\206\320\260\320\274", nullptr));
        label_3->setText(QCoreApplication::translate("salaryform", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        applyPushButton->setText(QCoreApplication::translate("salaryform", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("salaryform", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        resetPushButton->setText(QCoreApplication::translate("salaryform", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class salaryform: public Ui_salaryform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALARYFORM_H
