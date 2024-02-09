/********************************************************************************
** Form generated from reading UI file 'infoform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOFORM_H
#define UI_INFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoForm
{
public:
    QGroupBox *groupBox_4;
    QPushButton *showPushButton;
    QPushButton *resetPushButton;
    QPushButton *exitToMainPushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLineEdit *destinationLineEdit;
    QLabel *label;
    QTableView *destinationTableView;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QTimeEdit *firstTimeEdit;
    QTimeEdit *lastTimeEdit;
    QLabel *label_3;
    QTableView *timeTableView;

    void setupUi(QWidget *InfoForm)
    {
        if (InfoForm->objectName().isEmpty())
            InfoForm->setObjectName(QString::fromUtf8("InfoForm"));
        InfoForm->resize(964, 380);
        groupBox_4 = new QGroupBox(InfoForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(720, 20, 231, 349));
        showPushButton = new QPushButton(groupBox_4);
        showPushButton->setObjectName(QString::fromUtf8("showPushButton"));
        showPushButton->setGeometry(QRect(10, 40, 211, 41));
        resetPushButton = new QPushButton(groupBox_4);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(10, 90, 211, 41));
        exitToMainPushButton = new QPushButton(groupBox_4);
        exitToMainPushButton->setObjectName(QString::fromUtf8("exitToMainPushButton"));
        exitToMainPushButton->setGeometry(QRect(10, 140, 211, 41));
        tabWidget = new QTabWidget(InfoForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 701, 361));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 681, 291));
        destinationLineEdit = new QLineEdit(groupBox_2);
        destinationLineEdit->setObjectName(QString::fromUtf8("destinationLineEdit"));
        destinationLineEdit->setGeometry(QRect(10, 60, 181, 24));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 181, 31));
        destinationTableView = new QTableView(groupBox_2);
        destinationTableView->setObjectName(QString::fromUtf8("destinationTableView"));
        destinationTableView->setGeometry(QRect(200, 30, 471, 251));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 681, 291));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 181, 31));
        firstTimeEdit = new QTimeEdit(groupBox_3);
        firstTimeEdit->setObjectName(QString::fromUtf8("firstTimeEdit"));
        firstTimeEdit->setGeometry(QRect(10, 60, 181, 31));
        lastTimeEdit = new QTimeEdit(groupBox_3);
        lastTimeEdit->setObjectName(QString::fromUtf8("lastTimeEdit"));
        lastTimeEdit->setGeometry(QRect(10, 130, 181, 31));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 181, 31));
        timeTableView = new QTableView(groupBox_3);
        timeTableView->setObjectName(QString::fromUtf8("timeTableView"));
        timeTableView->setGeometry(QRect(200, 30, 471, 251));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(InfoForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InfoForm);
    } // setupUi

    void retranslateUi(QWidget *InfoForm)
    {
        InfoForm->setWindowTitle(QCoreApplication::translate("InfoForm", "Form", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("InfoForm", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
        showPushButton->setText(QCoreApplication::translate("InfoForm", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        resetPushButton->setText(QCoreApplication::translate("InfoForm", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        exitToMainPushButton->setText(QCoreApplication::translate("InfoForm", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\262\320\272\320\273\320\260\320\264\320\272\321\203", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("InfoForm", "\320\237\320\276\320\270\321\201\320\272 \321\200\320\265\320\271\321\201\320\276\320\262 \320\277\320\276 \320\277\321\203\320\275\320\272\321\202\321\203 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("InfoForm", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("InfoForm", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("InfoForm", "\320\237\320\276\320\270\321\201\320\272 \321\200\320\265\320\271\321\201\320\276\320\262 \320\277\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("InfoForm", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("InfoForm", "\320\232\320\276\320\275\320\265\321\207\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("InfoForm", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoForm: public Ui_InfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOFORM_H
