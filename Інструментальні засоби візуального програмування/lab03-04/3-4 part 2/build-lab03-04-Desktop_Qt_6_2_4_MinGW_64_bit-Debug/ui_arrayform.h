/********************************************************************************
** Form generated from reading UI file 'arrayform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARRAYFORM_H
#define UI_ARRAYFORM_H

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

class Ui_arrayform
{
public:
    QGroupBox *groupBox;
    QLabel *sizeLabel;
    QLineEdit *sizeOfArrayLineEdit;
    QPushButton *addNewValuePushButton;
    QLineEdit *indexLineEdit;
    QLabel *indexLabel;
    QPushButton *sizeOfArrayPushButton;
    QPushButton *resetPushButton;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QListWidget *baseArrayListWidget;
    QComboBox *comboBox;
    QPushButton *comboBoxPushButton;
    QGroupBox *groupBox_4;
    QListWidget *resultArrayListWidget;

    void setupUi(QWidget *arrayform)
    {
        if (arrayform->objectName().isEmpty())
            arrayform->setObjectName(QString::fromUtf8("arrayform"));
        arrayform->resize(901, 452);
        groupBox = new QGroupBox(arrayform);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 281, 401));
        sizeLabel = new QLabel(groupBox);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        sizeLabel->setGeometry(QRect(10, 30, 151, 21));
        sizeOfArrayLineEdit = new QLineEdit(groupBox);
        sizeOfArrayLineEdit->setObjectName(QString::fromUtf8("sizeOfArrayLineEdit"));
        sizeOfArrayLineEdit->setGeometry(QRect(160, 30, 113, 22));
        addNewValuePushButton = new QPushButton(groupBox);
        addNewValuePushButton->setObjectName(QString::fromUtf8("addNewValuePushButton"));
        addNewValuePushButton->setGeometry(QRect(10, 170, 261, 22));
        indexLineEdit = new QLineEdit(groupBox);
        indexLineEdit->setObjectName(QString::fromUtf8("indexLineEdit"));
        indexLineEdit->setGeometry(QRect(160, 130, 113, 22));
        indexLabel = new QLabel(groupBox);
        indexLabel->setObjectName(QString::fromUtf8("indexLabel"));
        indexLabel->setGeometry(QRect(10, 130, 151, 21));
        sizeOfArrayPushButton = new QPushButton(groupBox);
        sizeOfArrayPushButton->setObjectName(QString::fromUtf8("sizeOfArrayPushButton"));
        sizeOfArrayPushButton->setGeometry(QRect(10, 60, 261, 21));
        resetPushButton = new QPushButton(arrayform);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(10, 420, 881, 24));
        groupBox_2 = new QGroupBox(arrayform);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 591, 401));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 281, 311));
        baseArrayListWidget = new QListWidget(groupBox_3);
        baseArrayListWidget->setObjectName(QString::fromUtf8("baseArrayListWidget"));
        baseArrayListWidget->setGeometry(QRect(10, 20, 256, 281));
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 340, 571, 22));
        comboBoxPushButton = new QPushButton(groupBox_2);
        comboBoxPushButton->setObjectName(QString::fromUtf8("comboBoxPushButton"));
        comboBoxPushButton->setGeometry(QRect(10, 370, 571, 24));
        groupBox_4 = new QGroupBox(arrayform);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(600, 30, 281, 311));
        resultArrayListWidget = new QListWidget(groupBox_4);
        resultArrayListWidget->setObjectName(QString::fromUtf8("resultArrayListWidget"));
        resultArrayListWidget->setGeometry(QRect(10, 20, 256, 281));

        retranslateUi(arrayform);

        QMetaObject::connectSlotsByName(arrayform);
    } // setupUi

    void retranslateUi(QWidget *arrayform)
    {
        arrayform->setWindowTitle(QCoreApplication::translate("arrayform", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("arrayform", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        sizeLabel->setText(QCoreApplication::translate("arrayform", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\274\320\260\321\201\321\201\320\270\320\262\320\260   -->", nullptr));
        addNewValuePushButton->setText(QCoreApplication::translate("arrayform", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        indexLabel->setText(QCoreApplication::translate("arrayform", "\320\235\320\276\320\274\320\265\321\200 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 [] -->", nullptr));
        sizeOfArrayPushButton->setText(QCoreApplication::translate("arrayform", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        resetPushButton->setText(QCoreApplication::translate("arrayform", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("arrayform", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("arrayform", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \320\274\320\260\321\201\321\201\320\270\320\262", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("arrayform", "\320\236\320\264\320\265\321\200\320\266\320\260\321\202\320\270 \320\275\320\276\320\262\320\270\320\271 \320\274\320\260\321\201\320\270\320\262, \320\267\320\260\320\274\321\226\320\275\320\270\320\262\321\210\320\270 \321\203 \320\262\320\270\321\205\321\226\320\264\320\275\320\276\320\274\321\203 \320\274\320\260\321\201\320\270\320\262\321\226 \320\265\320\273\320\265\320\274\320\265\320\275\321\202\320\270, \321\211\320\276 \321\201\321\202\320\276\321\217\321\202\321\214 \320\275\320\260 \320\277\320\260\321\200\320\275\320\270\321\205 \320\274\321\226\321\201\321\206\321\217\321\205, \321\227\321\205\320\275\321\226\320\274\320\270 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\260\320\274\320\270.", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("arrayform", "\320\236\320\264\320\265\321\200\320\266\320\260\321\202\320\270 \320\265\320\273\320\265\320\274\320\265\320\275\321\202\320\270 \320\274\320\260\321\201\320\270\320\262\321\203, \321\217\320\272\321\226 \320\273\320\265\320\266\320\260\321\202\321\214 \321\203 \320\267\320\260\320\264\320\260\320\275\320\276\320\274\321\203 \320\264\321\226\320\260\320\277\320\260\320\267\320\276\320\275\321\226 [n1, n2].", nullptr));

        comboBoxPushButton->setText(QCoreApplication::translate("arrayform", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("arrayform", "\320\234\320\260\321\201\321\201\320\270\320\262 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class arrayform: public Ui_arrayform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARRAYFORM_H
