/********************************************************************************
** Form generated from reading UI file 'priceform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRICEFORM_H
#define UI_PRICEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PriceForm
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QListWidget *listWidget;
    QGroupBox *groupBox_3;
    QLineEdit *durationLineEdit;
    QComboBox *dayComboBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *applyPushButton;
    QPushButton *resetPushButton;
    QGroupBox *groupBox_4;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *PriceForm)
    {
        if (PriceForm->objectName().isEmpty())
            PriceForm->setObjectName(QString::fromUtf8("PriceForm"));
        PriceForm->resize(521, 472);
        groupBox = new QGroupBox(PriceForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 501, 361));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 281, 281));
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 261, 241));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(310, 38, 181, 273));
        durationLineEdit = new QLineEdit(groupBox_3);
        durationLineEdit->setObjectName(QString::fromUtf8("durationLineEdit"));
        durationLineEdit->setGeometry(QRect(10, 60, 161, 22));
        dayComboBox = new QComboBox(groupBox_3);
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->addItem(QString());
        dayComboBox->setObjectName(QString::fromUtf8("dayComboBox"));
        dayComboBox->setGeometry(QRect(10, 170, 161, 22));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 161, 41));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 140, 161, 31));
        applyPushButton = new QPushButton(groupBox);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(10, 320, 481, 24));
        resetPushButton = new QPushButton(PriceForm);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(10, 440, 501, 24));
        groupBox_4 = new QGroupBox(PriceForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 370, 501, 61));
        textBrowser = new QTextBrowser(groupBox_4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 481, 31));

        retranslateUi(PriceForm);

        QMetaObject::connectSlotsByName(PriceForm);
    } // setupUi

    void retranslateUi(QWidget *PriceForm)
    {
        PriceForm->setWindowTitle(QCoreApplication::translate("PriceForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PriceForm", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PriceForm", "\320\241\321\202\321\200\320\260\320\275\320\260 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\260", nullptr));
        groupBox_3->setTitle(QString());
        dayComboBox->setItemText(0, QCoreApplication::translate("PriceForm", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", nullptr));
        dayComboBox->setItemText(1, QCoreApplication::translate("PriceForm", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", nullptr));
        dayComboBox->setItemText(2, QCoreApplication::translate("PriceForm", "\320\241\321\200\320\265\320\264\320\260", nullptr));
        dayComboBox->setItemText(3, QCoreApplication::translate("PriceForm", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", nullptr));
        dayComboBox->setItemText(4, QCoreApplication::translate("PriceForm", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", nullptr));
        dayComboBox->setItemText(5, QCoreApplication::translate("PriceForm", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", nullptr));
        dayComboBox->setItemText(6, QCoreApplication::translate("PriceForm", "\320\222\320\276\321\201\320\272\321\200\320\265\321\201\320\265\320\275\321\214\320\265", nullptr));

        label->setText(QCoreApplication::translate("PriceForm", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\261\320\265\321\201\320\265\320\264\321\213\n"
" \320\262 \320\274\320\270\320\275\321\203\321\202\320\260\321\205:", nullptr));
        label_2->setText(QCoreApplication::translate("PriceForm", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270:", nullptr));
        applyPushButton->setText(QCoreApplication::translate("PriceForm", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \321\200\320\260\320\267\320\263\320\276\320\262\320\276\321\200\320\260", nullptr));
        resetPushButton->setText(QCoreApplication::translate("PriceForm", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PriceForm", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PriceForm: public Ui_PriceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRICEFORM_H
