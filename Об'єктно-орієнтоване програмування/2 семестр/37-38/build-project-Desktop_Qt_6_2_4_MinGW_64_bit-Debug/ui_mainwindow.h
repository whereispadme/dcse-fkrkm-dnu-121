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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QPushButton *applyTypeFigurePushButton;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QRadioButton *polyhedronRadioButton;
    QRadioButton *roundRadioButton;
    QGroupBox *groupBox_4;
    QTableView *tableView;
    QPushButton *resetPushButon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(936, 428);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 361, 311));
        applyTypeFigurePushButton = new QPushButton(groupBox_3);
        applyTypeFigurePushButton->setObjectName(QString::fromUtf8("applyTypeFigurePushButton"));
        applyTypeFigurePushButton->setGeometry(QRect(30, 240, 301, 24));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 140, 301, 80));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 281, 24));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 301, 91));
        polyhedronRadioButton = new QRadioButton(groupBox);
        polyhedronRadioButton->setObjectName(QString::fromUtf8("polyhedronRadioButton"));
        polyhedronRadioButton->setGeometry(QRect(20, 40, 111, 31));
        roundRadioButton = new QRadioButton(groupBox);
        roundRadioButton->setObjectName(QString::fromUtf8("roundRadioButton"));
        roundRadioButton->setGeometry(QRect(180, 40, 111, 31));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(380, 20, 541, 311));
        tableView = new QTableView(groupBox_4);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 521, 271));
        resetPushButon = new QPushButton(centralwidget);
        resetPushButon->setObjectName(QString::fromUtf8("resetPushButon"));
        resetPushButon->setGeometry(QRect(10, 340, 911, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 936, 21));
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
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        applyTypeFigurePushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\263\321\203\321\200\320\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\204\320\270\320\263\321\203\321\200\321\213", nullptr));
        polyhedronRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\275\320\276\320\263\320\276\320\263\321\200\320\260\320\275\320\275\320\270\320\272", nullptr));
        roundRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263\320\273\320\276\320\265 \321\202\320\265\320\273\320\276", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        resetPushButon->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
