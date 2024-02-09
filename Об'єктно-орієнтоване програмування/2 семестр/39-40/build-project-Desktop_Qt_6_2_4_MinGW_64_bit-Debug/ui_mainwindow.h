/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *titleLineEdit;
    QLineEdit *authorLineEdit;
    QLineEdit *yearLineEdit;
    QPushButton *addBookPushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QPushButton *deletePushButton;
    QTableView *tableView;
    QPushButton *sortingPushButton;
    QPushButton *findPushButton;
    QPushButton *uploadPushButton;
    QPushButton *resetPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1036, 489);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 351, 391));
        titleLineEdit = new QLineEdit(groupBox);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));
        titleLineEdit->setGeometry(QRect(160, 50, 161, 24));
        authorLineEdit = new QLineEdit(groupBox);
        authorLineEdit->setObjectName(QString::fromUtf8("authorLineEdit"));
        authorLineEdit->setGeometry(QRect(160, 90, 161, 24));
        yearLineEdit = new QLineEdit(groupBox);
        yearLineEdit->setObjectName(QString::fromUtf8("yearLineEdit"));
        yearLineEdit->setGeometry(QRect(160, 130, 161, 24));
        addBookPushButton = new QPushButton(groupBox);
        addBookPushButton->setObjectName(QString::fromUtf8("addBookPushButton"));
        addBookPushButton->setGeometry(QRect(20, 180, 301, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 141, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 141, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 141, 21));
        titleLineEdit->raise();
        authorLineEdit->raise();
        yearLineEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        addBookPushButton->raise();
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(370, 10, 651, 391));
        deletePushButton = new QPushButton(groupBox_2);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setGeometry(QRect(460, 130, 181, 24));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 441, 351));
        sortingPushButton = new QPushButton(groupBox_2);
        sortingPushButton->setObjectName(QString::fromUtf8("sortingPushButton"));
        sortingPushButton->setGeometry(QRect(460, 70, 181, 24));
        findPushButton = new QPushButton(groupBox_2);
        findPushButton->setObjectName(QString::fromUtf8("findPushButton"));
        findPushButton->setGeometry(QRect(460, 100, 181, 24));
        uploadPushButton = new QPushButton(groupBox_2);
        uploadPushButton->setObjectName(QString::fromUtf8("uploadPushButton"));
        uploadPushButton->setGeometry(QRect(460, 40, 181, 24));
        resetPushButton = new QPushButton(centralwidget);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(10, 410, 1011, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1036, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203 \320\262 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", nullptr));
        addBookPushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\275\320\270\320\263\320\270           -->", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200 \320\272\320\275\320\270\320\263\320\270                 -->", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260 \320\272\320\275\320\270\320\263\320\270     -->", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        deletePushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203 \320\270\320\267 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\260", nullptr));
        sortingPushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\260\320\262\321\202\320\276\321\200\321\203", nullptr));
        findPushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\272\320\275\320\270\320\263\320\270 \320\262 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\265", nullptr));
        uploadPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        resetPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
