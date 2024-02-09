/********************************************************************************
** Form generated from reading UI file 'listform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTFORM_H
#define UI_LISTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListForm
{
public:
    QGroupBox *groupBox;
    QPushButton *uploadApplyPushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *fileRadioButton;
    QRadioButton *writeRadioButton;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QListWidget *generalListWidget;
    QPushButton *comeToNewListPushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *addToGenListPushButton;
    QPushButton *delFromGenListPushButton;
    QGroupBox *groupBox_5;
    QListWidget *newListWidget;
    QTextBrowser *textBrowser;
    QPushButton *resetPushButton;
    QGroupBox *groupBox_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *saveGeneralListPushButton;
    QPushButton *saveNewListPushButton;

    void setupUi(QWidget *ListForm)
    {
        if (ListForm->objectName().isEmpty())
            ListForm->setObjectName(QString::fromUtf8("ListForm"));
        ListForm->resize(561, 571);
        groupBox = new QGroupBox(ListForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 261, 141));
        uploadApplyPushButton = new QPushButton(groupBox);
        uploadApplyPushButton->setObjectName(QString::fromUtf8("uploadApplyPushButton"));
        uploadApplyPushButton->setGeometry(QRect(30, 100, 201, 24));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 201, 48));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fileRadioButton = new QRadioButton(widget);
        fileRadioButton->setObjectName(QString::fromUtf8("fileRadioButton"));

        verticalLayout->addWidget(fileRadioButton);

        writeRadioButton = new QRadioButton(widget);
        writeRadioButton->setObjectName(QString::fromUtf8("writeRadioButton"));

        verticalLayout->addWidget(writeRadioButton);

        groupBox_3 = new QGroupBox(ListForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 160, 541, 371));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 20, 251, 301));
        generalListWidget = new QListWidget(groupBox_4);
        generalListWidget->setObjectName(QString::fromUtf8("generalListWidget"));
        generalListWidget->setGeometry(QRect(10, 31, 231, 191));
        comeToNewListPushButton = new QPushButton(groupBox_4);
        comeToNewListPushButton->setObjectName(QString::fromUtf8("comeToNewListPushButton"));
        comeToNewListPushButton->setGeometry(QRect(10, 260, 231, 24));
        widget1 = new QWidget(groupBox_4);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 230, 231, 26));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addToGenListPushButton = new QPushButton(widget1);
        addToGenListPushButton->setObjectName(QString::fromUtf8("addToGenListPushButton"));

        horizontalLayout->addWidget(addToGenListPushButton);

        delFromGenListPushButton = new QPushButton(widget1);
        delFromGenListPushButton->setObjectName(QString::fromUtf8("delFromGenListPushButton"));

        horizontalLayout->addWidget(delFromGenListPushButton);

        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(280, 20, 251, 301));
        newListWidget = new QListWidget(groupBox_5);
        newListWidget->setObjectName(QString::fromUtf8("newListWidget"));
        newListWidget->setGeometry(QRect(10, 30, 231, 251));
        textBrowser = new QTextBrowser(groupBox_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 330, 521, 31));
        resetPushButton = new QPushButton(ListForm);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(10, 540, 541, 24));
        groupBox_2 = new QGroupBox(ListForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 251, 141));
        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 40, 211, 81));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        saveGeneralListPushButton = new QPushButton(widget2);
        saveGeneralListPushButton->setObjectName(QString::fromUtf8("saveGeneralListPushButton"));

        verticalLayout_2->addWidget(saveGeneralListPushButton);

        saveNewListPushButton = new QPushButton(widget2);
        saveNewListPushButton->setObjectName(QString::fromUtf8("saveNewListPushButton"));

        verticalLayout_2->addWidget(saveNewListPushButton);


        retranslateUi(ListForm);

        QMetaObject::connectSlotsByName(ListForm);
    } // setupUi

    void retranslateUi(QWidget *ListForm)
    {
        ListForm->setWindowTitle(QCoreApplication::translate("ListForm", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ListForm", "\320\241\320\277\320\276\321\201\320\276\320\261 \321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\276\320\261\321\211\320\265\320\263\320\276 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
        uploadApplyPushButton->setText(QCoreApplication::translate("ListForm", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        fileRadioButton->setText(QCoreApplication::translate("ListForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        writeRadioButton->setText(QCoreApplication::translate("ListForm", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\321\213", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ListForm", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201\320\276 \321\201\320\277\320\270\321\201\320\272\320\260\320\274\320\270", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ListForm", "\320\236\320\261\321\211\320\270\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        comeToNewListPushButton->setText(QCoreApplication::translate("ListForm", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270 \320\262 \320\275\320\276\320\262\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        addToGenListPushButton->setText(QCoreApplication::translate("ListForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        delFromGenListPushButton->setText(QCoreApplication::translate("ListForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ListForm", "\320\235\320\276\320\262\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        resetPushButton->setText(QCoreApplication::translate("ListForm", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ListForm", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        saveGeneralListPushButton->setText(QCoreApplication::translate("ListForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\276\320\261\321\211\320\270\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        saveNewListPushButton->setText(QCoreApplication::translate("ListForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListForm: public Ui_ListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTFORM_H
