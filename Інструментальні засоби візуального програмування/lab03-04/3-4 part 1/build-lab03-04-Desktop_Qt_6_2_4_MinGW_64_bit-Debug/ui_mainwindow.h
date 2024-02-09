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
    QGroupBox *groupBox;
    QLabel *temperatureLabel;
    QLabel *farengeitLabel;
    QLineEdit *tempLineEdit;
    QListWidget *resultTempListWidget;
    QListWidget *resultCentiListWidget;
    QLabel *centiLabel;
    QLineEdit *inchesLineEdit;
    QLabel *inchesLabel;
    QGroupBox *groupBox_2;
    QPushButton *calculatePushButton;
    QLabel *woltLabel;
    QLineEdit *woltLineEdit;
    QLabel *suspensionLabel;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *suspensionLineEdit;
    QListWidget *strumListWidget;
    QPushButton *exitPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(363, 567);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 221));
        temperatureLabel = new QLabel(groupBox);
        temperatureLabel->setObjectName(QString::fromUtf8("temperatureLabel"));
        temperatureLabel->setGeometry(QRect(30, 50, 111, 21));
        farengeitLabel = new QLabel(groupBox);
        farengeitLabel->setObjectName(QString::fromUtf8("farengeitLabel"));
        farengeitLabel->setGeometry(QRect(30, 90, 111, 21));
        tempLineEdit = new QLineEdit(groupBox);
        tempLineEdit->setObjectName(QString::fromUtf8("tempLineEdit"));
        tempLineEdit->setGeometry(QRect(150, 50, 171, 24));
        resultTempListWidget = new QListWidget(groupBox);
        resultTempListWidget->setObjectName(QString::fromUtf8("resultTempListWidget"));
        resultTempListWidget->setGeometry(QRect(150, 90, 171, 21));
        resultCentiListWidget = new QListWidget(groupBox);
        resultCentiListWidget->setObjectName(QString::fromUtf8("resultCentiListWidget"));
        resultCentiListWidget->setGeometry(QRect(150, 180, 171, 21));
        centiLabel = new QLabel(groupBox);
        centiLabel->setObjectName(QString::fromUtf8("centiLabel"));
        centiLabel->setGeometry(QRect(30, 180, 111, 21));
        inchesLineEdit = new QLineEdit(groupBox);
        inchesLineEdit->setObjectName(QString::fromUtf8("inchesLineEdit"));
        inchesLineEdit->setGeometry(QRect(150, 140, 171, 24));
        inchesLabel = new QLabel(groupBox);
        inchesLabel->setObjectName(QString::fromUtf8("inchesLabel"));
        inchesLabel->setGeometry(QRect(30, 140, 111, 21));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 240, 341, 251));
        calculatePushButton = new QPushButton(groupBox_2);
        calculatePushButton->setObjectName(QString::fromUtf8("calculatePushButton"));
        calculatePushButton->setGeometry(QRect(10, 210, 321, 24));
        woltLabel = new QLabel(groupBox_2);
        woltLabel->setObjectName(QString::fromUtf8("woltLabel"));
        woltLabel->setGeometry(QRect(20, 90, 131, 21));
        woltLineEdit = new QLineEdit(groupBox_2);
        woltLineEdit->setObjectName(QString::fromUtf8("woltLineEdit"));
        woltLineEdit->setGeometry(QRect(160, 90, 171, 24));
        suspensionLabel = new QLabel(groupBox_2);
        suspensionLabel->setObjectName(QString::fromUtf8("suspensionLabel"));
        suspensionLabel->setGeometry(QRect(20, 130, 131, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 321, 51));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 170, 131, 21));
        suspensionLineEdit = new QLineEdit(groupBox_2);
        suspensionLineEdit->setObjectName(QString::fromUtf8("suspensionLineEdit"));
        suspensionLineEdit->setGeometry(QRect(160, 130, 171, 24));
        strumListWidget = new QListWidget(groupBox_2);
        strumListWidget->setObjectName(QString::fromUtf8("strumListWidget"));
        strumListWidget->setGeometry(QRect(160, 170, 171, 21));
        exitPushButton = new QPushButton(centralwidget);
        exitPushButton->setObjectName(QString::fromUtf8("exitPushButton"));
        exitPushButton->setGeometry(QRect(10, 500, 341, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 363, 22));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\262\320\275\320\260 \321\207\320\260\321\201\321\202\320\270\320\275\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\270", nullptr));
        temperatureLabel->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\260\321\200\320\260\321\202\321\203\321\200\320\260 \302\260C  ->", nullptr));
        farengeitLabel->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\264\321\203\321\201\320\270  \342\204\211            ->", nullptr));
        centiLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\260\320\275\321\202\320\270\320\274\320\265\321\202\321\200\320\270        ->", nullptr));
        inchesLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\321\216\320\271\320\274\320\270                 ->", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\321\200\320\260\321\205\321\203\320\275\320\276\320\272 \321\201\321\202\321\200\321\203\320\274\321\203", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        woltLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\203\320\263\320\260 (\320\222\320\276\320\273\321\214\321\202)         ->", nullptr));
        suspensionLabel->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\226\321\200   (\320\236\320\274)                  ->", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:1px; margin-bottom:1px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\275\320\260\320\277\321\200\321\203\320\263\321\203 \321\202\320\260 \320\262\320\265\320\273\320\270\321\207\320\270\320\275\321\203 \320\276\320\277\320\276\321\200\321\203, </p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\277\320\276\321\202\321\226\320\274 \320\275\320\260\321\202\320\270\321\201\320\275\321\226\321\202\321\214 \320\275\320\260 \320\272"
                        "\320\275\320\276\320\277\320\272\321\203 \320\236\320\261\321\207\320\270\321\201\320\273\320\270\321\202\320\270.</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\321\203\320\274  (\320\220)                   ->", nullptr));
        exitPushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
