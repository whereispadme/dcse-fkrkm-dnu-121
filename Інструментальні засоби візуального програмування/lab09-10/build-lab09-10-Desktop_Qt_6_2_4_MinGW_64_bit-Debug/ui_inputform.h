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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputForm
{
public:
    QGroupBox *groupBox;
    QLineEdit *priceLineEdit;
    QLineEdit *flightNumberLineEdit;
    QLineEdit *destinationLineEdit;
    QGroupBox *groupBox_2;
    QCalendarWidget *calendarWidget;
    QTimeEdit *timeEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *applyPushButton;

    void setupUi(QWidget *InputForm)
    {
        if (InputForm->objectName().isEmpty())
            InputForm->setObjectName(QString::fromUtf8("InputForm"));
        InputForm->resize(393, 409);
        groupBox = new QGroupBox(InputForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 371, 351));
        priceLineEdit = new QLineEdit(groupBox);
        priceLineEdit->setObjectName(QString::fromUtf8("priceLineEdit"));
        priceLineEdit->setGeometry(QRect(250, 320, 113, 24));
        flightNumberLineEdit = new QLineEdit(groupBox);
        flightNumberLineEdit->setObjectName(QString::fromUtf8("flightNumberLineEdit"));
        flightNumberLineEdit->setGeometry(QRect(130, 320, 113, 24));
        destinationLineEdit = new QLineEdit(groupBox);
        destinationLineEdit->setObjectName(QString::fromUtf8("destinationLineEdit"));
        destinationLineEdit->setGeometry(QRect(10, 320, 113, 24));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 351, 261));
        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 30, 331, 181));
        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(10, 220, 331, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 300, 111, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 300, 111, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 300, 111, 16));
        applyPushButton = new QPushButton(InputForm);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(10, 370, 371, 31));

        retranslateUi(InputForm);

        QMetaObject::connectSlotsByName(InputForm);
    } // setupUi

    void retranslateUi(QWidget *InputForm)
    {
        InputForm->setWindowTitle(QCoreApplication::translate("InputForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InputForm", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("InputForm", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("InputForm", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("InputForm", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("InputForm", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
        applyPushButton->setText(QCoreApplication::translate("InputForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputForm: public Ui_InputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORM_H
