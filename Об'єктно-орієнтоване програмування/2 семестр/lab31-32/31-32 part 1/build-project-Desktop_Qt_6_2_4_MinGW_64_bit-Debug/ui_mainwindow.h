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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *clearPushButton;
    QGroupBox *groupBox;
    QPushButton *applyPushButton;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QGroupBox *groupBox_3;
    QLineEdit *widthLineEdit;
    QLineEdit *lengthLineEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *countLineEdit;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QListWidget *listWidget_2;
    QGroupBox *groupBox_6;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1062, 485);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        clearPushButton = new QPushButton(centralwidget);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));
        clearPushButton->setGeometry(QRect(10, 400, 1021, 24));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 411, 391));
        applyPushButton = new QPushButton(groupBox);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setGeometry(QRect(20, 330, 351, 24));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 40, 351, 91));
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 40, 311, 24));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 140, 351, 171));
        widthLineEdit = new QLineEdit(groupBox_3);
        widthLineEdit->setObjectName(QString::fromUtf8("widthLineEdit"));
        widthLineEdit->setGeometry(QRect(160, 80, 171, 24));
        lengthLineEdit = new QLineEdit(groupBox_3);
        lengthLineEdit->setObjectName(QString::fromUtf8("lengthLineEdit"));
        lengthLineEdit->setGeometry(QRect(160, 40, 171, 24));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 40, 141, 21));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 80, 141, 21));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 120, 141, 21));
        countLineEdit = new QLineEdit(groupBox_3);
        countLineEdit->setObjectName(QString::fromUtf8("countLineEdit"));
        countLineEdit->setGeometry(QRect(160, 120, 171, 24));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(430, 0, 601, 391));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(360, 30, 231, 351));
        listWidget_2 = new QListWidget(groupBox_5);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 30, 211, 311));
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 30, 341, 351));
        listWidget = new QListWidget(groupBox_6);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 321, 311));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1062, 21));
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
        clearPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\201\321\221", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        applyPushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\203\321\207\320\260\321\201\321\202\320\272\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "I -   250 \320\263\321\200\320\275. \320\267\320\260 \320\263\320\265\320\272\321\202\320\260\321\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "II -  367 \320\263\321\200\320\275. \320\267\320\260 \320\263\320\265\320\272\321\202\320\260\321\200", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "I -   595 \320\263\321\200\320\275. \320\267\320\260 \320\263\320\265\320\272\321\202\320\260\321\200", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260(\320\274.)                    -->", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260(\320\274.)                 -->", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276                 -->              ", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \320\275\320\260\320\273\320\276\320\263 \320\277\320\276 \320\272\320\260\320\266\320\264\320\276\320\274\321\203 \321\203\321\207\320\260\321\201\321\202\320\272\321\203", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
