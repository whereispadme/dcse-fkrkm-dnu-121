/********************************************************************************
** Form generated from reading UI file 'pyramidform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PYRAMIDFORM_H
#define UI_PYRAMIDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pyramidForm
{
public:
    QGroupBox *groupBox;
    QPushButton *applyPushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *heightLineEdit;
    QLineEdit *lengthLineEdit;
    QLabel *label_3;
    QLineEdit *sideLineEdit;

    void setupUi(QWidget *pyramidForm)
    {
        if (pyramidForm->objectName().isEmpty())
            pyramidForm->setObjectName(QString::fromUtf8("pyramidForm"));
        pyramidForm->resize(401, 280);
        groupBox = new QGroupBox(pyramidForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 361, 231));
        applyPushButton = new QPushButton(groupBox);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(20, 180, 321, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 181, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 181, 21));
        heightLineEdit = new QLineEdit(groupBox);
        heightLineEdit->setObjectName(QString::fromUtf8("heightLineEdit"));
        heightLineEdit->setGeometry(QRect(210, 50, 131, 24));
        lengthLineEdit = new QLineEdit(groupBox);
        lengthLineEdit->setObjectName(QString::fromUtf8("lengthLineEdit"));
        lengthLineEdit->setGeometry(QRect(210, 90, 131, 24));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 181, 21));
        sideLineEdit = new QLineEdit(groupBox);
        sideLineEdit->setObjectName(QString::fromUtf8("sideLineEdit"));
        sideLineEdit->setGeometry(QRect(210, 130, 131, 24));

        retranslateUi(pyramidForm);

        QMetaObject::connectSlotsByName(pyramidForm);
    } // setupUi

    void retranslateUi(QWidget *pyramidForm)
    {
        pyramidForm->setWindowTitle(QCoreApplication::translate("pyramidForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("pyramidForm", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        applyPushButton->setText(QCoreApplication::translate("pyramidForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("pyramidForm", "\320\222\321\213\321\201\320\276\321\202\320\260                                       -->", nullptr));
        label_2->setText(QCoreApplication::translate("pyramidForm", "\320\224\320\273\320\270\320\275\320\260 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217   -->", nullptr));
        label_3->setText(QCoreApplication::translate("pyramidForm", "\320\221\320\276\320\272\320\276\320\262\320\276\320\265 \321\200\320\265\320\261\321\200\320\276                        -->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pyramidForm: public Ui_pyramidForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PYRAMIDFORM_H
