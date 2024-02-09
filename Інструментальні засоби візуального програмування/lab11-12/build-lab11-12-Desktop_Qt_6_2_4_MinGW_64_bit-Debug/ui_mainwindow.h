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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QPushButton *resetPushButton;
    QTableView *studentTableView;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *addGroupPushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *groupNameLineEdit;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lastnameLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *bookNumberLineEdit;
    QComboBox *groupComboBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPushButton;
    QPushButton *editPushButton;
    QPushButton *deletePushButton;
    QGroupBox *groupBox_3;
    QComboBox *groupFilterComboBox;
    QPushButton *filterPushButton;
    QFrame *frame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1002, 851);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        resetPushButton = new QPushButton(centralwidget);
        resetPushButton->setObjectName(QString::fromUtf8("resetPushButton"));
        resetPushButton->setGeometry(QRect(10, 413, 981, 24));
        studentTableView = new QTableView(centralwidget);
        studentTableView->setObjectName(QString::fromUtf8("studentTableView"));
        studentTableView->setGeometry(QRect(10, 10, 981, 401));
        studentTableView->setStyleSheet(QString::fromUtf8("/*!*************************************\n"
"  VS15 Dark\n"
"****************************************\n"
"  Author: chintsu_kun\n"
"  Version: 2.0.2\n"
"  Licence: GNU General Public License v3.0 (https://www.gnu.org/licenses/gpl-3.0.en.html)\n"
"  Url: https://github.com/nikolay-borzov/modorganizer-themes\n"
"****************************************\n"
"*/\n"
"/* For some reason applying background-color or border fixes paddings properties */\n"
"QListWidget::item {\n"
"  border-width: 0; }\n"
"\n"
"/* Don't override install label on download widget.\n"
"   MO2 assigns color depending on download state */\n"
"#installLabel {\n"
"  color: none; }\n"
"\n"
"/* Make `background-color` work for :hover, :focus and :pressed states */\n"
"QToolButton {\n"
"  border: none; }\n"
"\n"
"/* Main Window */\n"
"QWidget {\n"
"  background-color: #2D2D30;\n"
"  color: #F1F1F1; }\n"
"  QWidget::disabled {\n"
"    color: #656565; }\n"
"\n"
"/* Common */\n"
"/* remove outline */\n"
"* {\n"
"  outline: 0; }\n"
"\n"
"*:disabled,\n"
""
                        "QListView::item:disabled,\n"
"*::item:selected:disabled {\n"
"  color: #656565; }\n"
"\n"
"/* line heights */\n"
"/* QTreeView#fileTree::item - currently have problem with size column vertical\n"
"   text align  */\n"
"#bsaList::item,\n"
"#dataTree::item,\n"
"QTreeView#modList::item,\n"
"QTreeWidget#categoriesTree::item,\n"
"#savegameList::item,\n"
"#tabConflicts QTreeWidget::item {\n"
"  padding: 0.3em 0; }\n"
"\n"
"QListView::item,\n"
"QTreeView#espList::item {\n"
"  padding-top: 0.3em;\n"
"  padding-bottom: 0.3em;\n"
"}\n"
"\n"
"/* to enable border color */\n"
"QTreeView,\n"
"QListView,\n"
"QTextEdit,\n"
"QWebView,\n"
"QTableView {\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"QAbstractItemView {\n"
"  color: #DCDCDC;\n"
"  background-color: #1E1E1E;\n"
"  alternate-background-color: #262626;\n"
"  border-color: #3F3F46; }\n"
"  QAbstractItemView::item:selected, QAbstractItemView::item:selected:hover {\n"
"    background-color: #3399FF;\n"
"    color: #F1F1F1; }\n"
"\n"
"QAbstractItemView[f"
                        "iltered=true] {\n"
"	border: 2px solid #f00 !important;\n"
"}\n"
"\n"
"QAbstractItemView,\n"
"QListView,\n"
"QTreeView {\n"
"  show-decoration-selected: 1; }\n"
"\n"
"QAbstractItemView::item:hover,\n"
"QListView::item:hover,\n"
"QTreeView::branch:hover,\n"
"QTreeWidget::item:hover {\n"
"  background-color: rgba(51, 153, 255, 0.3); }\n"
"\n"
"QAbstractItemView::item:selected:disabled,\n"
"QListView::item:selected:disabled,\n"
"QTreeView::branch:selected:disabled,\n"
"QTreeWidget::item:selected:disabled {\n"
"  background-color: rgba(51, 153, 255, 0.3); }\n"
"\n"
"QTreeView::branch:selected {\n"
"  background-color: #3399FF; }\n"
"\n"
"QLabel {\n"
"  background-color: transparent; }\n"
"\n"
"LinkLabel {\n"
"  qproperty-linkColor: #3399FF; }\n"
"\n"
"/* Left Pane & File Trees #QTreeView, #QListView*/\n"
"QTreeView::branch:closed:has-children {\n"
"  image: url(./vs15/branch-closed.png); }\n"
"\n"
"QTreeView::branch:open:has-children {\n"
"  image: url(./vs15/branch-open.png); }\n"
"\n"
"/*QListView::item:hover { "
                        "}\n"
"QListView::item:selected { }*/\n"
"QListView::item {\n"
"  color: #F1F1F1; }\n"
"\n"
"/* Text areas and text fields #QTextEdit, #QLineEdit, #QWebView */\n"
"QTextEdit,\n"
"QWebView,\n"
"QLineEdit,\n"
"QAbstractSpinBox,\n"
"QAbstractSpinBox::up-button,\n"
"QAbstractSpinBox::down-button,\n"
"QComboBox {\n"
"  background-color: #333337;\n"
"  border-color: #3F3F46; }\n"
"\n"
"QLineEdit:hover,\n"
"QAbstractSpinBox:hover,\n"
"QTextEdit:hover,\n"
"QComboBox:hover,\n"
"QComboBox:editable:hover {\n"
"  border-color: #007ACC; }\n"
"\n"
"QLineEdit:focus,\n"
"QAbstractSpinBox::focus,\n"
"QTextEdit:focus,\n"
"QComboBox:focus,\n"
"QComboBox:editable:focus,\n"
"QComboBox:on {\n"
"  background-color: #3F3F46;\n"
"  border-color: #3399FF; }\n"
"\n"
"QComboBox:on {\n"
"  border-bottom-color: #3F3F46; }\n"
"\n"
"QLineEdit,\n"
"QAbstractSpinBox {\n"
"  min-height: 15px;\n"
"  padding: 2px;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"QLineEdit {\n"
"  margin-top: 0; }\n"
"\n"
"/* clear button */\n"
"QLine"
                        "Edit QToolButton,\n"
"QLineEdit QToolButton:hover {\n"
"  background: none;\n"
"  margin-top: 1px; }\n"
"\n"
"QLineEdit#espFilterEdit QToolButton {\n"
"  margin-top: -2px;\n"
"  margin-bottom: 1px; }\n"
"\n"
"/* Drop-downs #QComboBox*/\n"
"QComboBox {\n"
"  min-height: 20px;\n"
"  padding-left: 5px;\n"
"  margin: 3px 0 1px 0;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"  QComboBox:editable {\n"
"    padding-left: 3px;\n"
"    /* to enable hover styles */\n"
"    background-color: transparent; }\n"
"  QComboBox::drop-down {\n"
"    width: 20px;\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    border: none;\n"
"    /* If you need to set style for drop-down button\n"
"    &:on,\n"
"    &:editable:hover {\n"
"      background-color: red;\n"
"    } */ }\n"
"  QComboBox::down-arrow {\n"
"    image: url(./vs15/combobox-down.png); }\n"
"  QComboBox QAbstractItemView {\n"
"    background-color: #1B1B1C;\n"
"    selection-background-color: #3F3F46;\n"
"    border-color: #"
                        "3399FF;\n"
"    border-style: solid;\n"
"    border-width: 0 1px 1px 1px; }\n"
"\n"
"/* doesn't work http://stackoverflow.com/questions/13308341/qcombobox-abstractitemviewitem*/\n"
"/*QComboBox QAbstractItemView:item {\n"
"  padding: 10px;\n"
"  margin: 10px;\n"
"}*/\n"
"/* Toolbar */\n"
"QToolBar {\n"
"  border: none; }\n"
"\n"
"QToolBar::separator {\n"
"  border-left-color: #222222;\n"
"  border-right-color: #46464A;\n"
"  border-width: 0 1px 0 1px;\n"
"  border-style: solid;\n"
"  width: 0; }\n"
"\n"
"QToolButton {\n"
"  padding: 4px; }\n"
"  QToolButton:hover, QToolButton:focus {\n"
"    background-color: #3E3E40; }\n"
"  QToolButton:pressed {\n"
"    background-color: #3399FF; }\n"
"\n"
"QToolButton::menu-indicator {\n"
"  image: url(./vs15/combobox-down.png);\n"
"  subcontrol-origin: padding;\n"
"  subcontrol-position: center right;\n"
"  padding-top: 10%;\n"
"  padding-right: 5%; }\n"
"\n"
"/* Group Boxes #QGroupBox */\n"
"QGroupBox {\n"
"  border-color: #3F3F46;\n"
"  border-style: solid;\n"
"  border-"
                        "width: 1px;\n"
"  padding: 1em .3em .3em .3em;\n"
"  margin-top: .65em; }\n"
"\n"
"QGroupBox::title {\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top left;\n"
"  padding: 2px;\n"
"  left: 10px; }\n"
"\n"
"/* LCD Count */\n"
"QLCDNumber {\n"
"  border-color: #3F3F46;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"/* Buttons #QPushButton */\n"
"QPushButton {\n"
"  background-color: #333337;\n"
"  border-color: #3F3F46;\n"
"  min-height: 18px;\n"
"  padding: 2px 5px;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"QPushButton:hover,\n"
"QPushButton:checked,\n"
"QPushButton:focus,\n"
"QAbstractSpinBox::up-button:hover,\n"
"QAbstractSpinBox::down-button:hover {\n"
"  background-color: #007ACC; }\n"
"\n"
"QPushButton:pressed,\n"
"QPushButton:checked:hover,\n"
"QAbstractSpinBox::up-button:pressed,\n"
"QAbstractSpinBox::down-button:pressed {\n"
"  background-color: #1C97EA; }\n"
"\n"
"QPushButton:disabled,\n"
"QAbstractSpinBox::up-button:disabled,\n"
"QAbstractSpinBox::do"
                        "wn-button:disabled {\n"
"  background-color: #333337;\n"
"  border-color: #3F3F46; }\n"
"\n"
"QPushButton::menu-indicator {\n"
"  image: url(./vs15/combobox-down.png);\n"
"  subcontrol-origin: padding;\n"
"  subcontrol-position: center right;\n"
"  padding-right: 5%; }\n"
"\n"
"/* Dialog buttons */\n"
"QDialog QPushButton,\n"
"QSlider::handle:horizontal,\n"
"QSlider::handle:vertical {\n"
"  color: #000000;\n"
"  background-color: #DDDDDD;\n"
"  border-color: #707070;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"QDialog QPushButton:hover,\n"
"QSlider::handle:horizontal:hover,\n"
"QSlider::handle:vertical:hover,\n"
"QSlider::handle:horizontal:pressed,\n"
"QSlider::handle:vertical:pressed {\n"
"  background-color: #BEE6FD;\n"
"  border-color: #3C7FB1; }\n"
"\n"
"QSlider::handle:horizontal:focus:!pressed,\n"
"QSlider::handle:vertical:focus:!pressed,\n"
"QDialog QPushButton:focus,\n"
"QDialog QPushButton:checked {\n"
"  background-color: #DDDDDD;\n"
"  border-color: #3399FF; }\n"
"\n"
"QDialog QPu"
                        "shButton:disabled,\n"
"QSlider::handle:horizontal:disabled,\n"
"QSlider::handle:vertical:disabled {\n"
"  background-color: #333337;\n"
"  border-color: #3F3F46; }\n"
"\n"
"QDialog QPushButton {\n"
"  min-width: 1.5em;\n"
"  padding-left: .5em;\n"
"  padding-right: .5em; }\n"
"\n"
"/* Check boxes and Radio buttons common #QCheckBox, #QRadioButton */\n"
"QGroupBox::indicator,\n"
"QTreeView::indicator,\n"
"QCheckBox::indicator,\n"
"QRadioButton::indicator {\n"
"  background-color: #2D2D30;\n"
"  border-color: #3F3F46;\n"
"  width: 13px;\n"
"  height: 13px;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"  QGroupBox::indicator:hover,\n"
"  QTreeView::indicator:hover,\n"
"  QCheckBox::indicator:hover,\n"
"  QRadioButton::indicator:hover {\n"
"    background-color: #3F3F46;\n"
"    border-color: #007ACC; }\n"
"\n"
"QGroupBox::indicator:checked,\n"
"QTreeView::indicator:checked,\n"
"QCheckBox::indicator:checked {\n"
"  image: url(./vs15/checkbox-check.png); }\n"
"\n"
"QGroupBox::indicator:disabled,\n"
"QTr"
                        "eeView::indicator:checked:disabled,\n"
"QCheckBox::indicator:checked:disabled {\n"
"  image: url(./vs15/checkbox-check-disabled.png); }\n"
"\n"
"/* Check boxes special */\n"
"QTreeView#modList::indicator {\n"
"  width: 15px;\n"
"  height: 15px; }\n"
"\n"
"/* Radio buttons #QRadioButton */\n"
"QRadioButton::indicator {\n"
"  border-radius: 7px; }\n"
"  QRadioButton::indicator::checked {\n"
"    background-color: #B9B9BA;\n"
"    border-width: 2px;\n"
"    width: 11px;\n"
"    height: 11px; }\n"
"    QRadioButton::indicator::checked:hover {\n"
"      border-color: #3F3F46; }\n"
"\n"
"/* Spinners #QSpinBox, #QDoubleSpinBox */\n"
"QAbstractSpinBox {\n"
"  margin: 1px; }\n"
"\n"
"QAbstractSpinBox::up-button,\n"
"QAbstractSpinBox::down-button {\n"
"  border-style: solid;\n"
"  border-width: 1px;\n"
"  subcontrol-origin: padding; }\n"
"\n"
"QAbstractSpinBox::up-button {\n"
"  subcontrol-position: top right; }\n"
"\n"
"QAbstractSpinBox::up-arrow {\n"
"  image: url(./vs15/spinner-up.png); }\n"
"\n"
"QAbstractSpinBox::d"
                        "own-button {\n"
"  subcontrol-position: bottom right; }\n"
"\n"
"QAbstractSpinBox::down-arrow {\n"
"  image: url(./vs15/spinner-down.png); }\n"
"\n"
"/* Sliders #QSlider */\n"
"QSlider::groove:horizontal {\n"
"  background-color: #3F3F46;\n"
"  border: none;\n"
"  height: 8px;\n"
"  margin: 2px 0; }\n"
"\n"
"QSlider::handle:horizontal {\n"
"  width: .5em;\n"
"  height: 2em;\n"
"  margin: -7px 0;\n"
"  subcontrol-origin: margin; }\n"
"\n"
"/* Scroll Bars #QAbstractScrollArea, #QScrollBar*/\n"
"/* assigning background still leaves not filled area*/\n"
"QAbstractScrollArea::corner {\n"
"  background-color: transparent; }\n"
"\n"
"/* Horizontal */\n"
"QScrollBar:horizontal {\n"
"  height: 18px;\n"
"  border: none;\n"
"  margin: 0 23px 0 23px; }\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"  min-width: 32px;\n"
"  margin: 4px 2px; }\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"  width: 23px;\n"
"  subcontrol-position: right;\n"
"  subcontrol-origin: margin; }\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"  width"
                        ": 23px;\n"
"  subcontrol-position: left;\n"
"  subcontrol-origin: margin; }\n"
"\n"
"/* Vertical */\n"
"QScrollBar:vertical {\n"
"  width: 20px;\n"
"  border: none;\n"
"  margin: 23px 0 23px 0; }\n"
"\n"
"QScrollBar::handle:vertical {\n"
"  min-height: 32px;\n"
"  margin: 2px 4px; }\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"  height: 23px;\n"
"  subcontrol-position: bottom;\n"
"  subcontrol-origin: margin; }\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"  height: 23px;\n"
"  subcontrol-position: top;\n"
"  subcontrol-origin: margin; }\n"
"\n"
"/* Combined */\n"
"QScrollBar {\n"
"  background-color: #3E3E42;\n"
"  border: none; }\n"
"\n"
"QScrollBar::handle {\n"
"  background-color: #686868; }\n"
"\n"
"QScrollBar::add-line,\n"
"QScrollBar::sub-line {\n"
"  background-color: #3E3E42;\n"
"  border: none; }\n"
"\n"
"/*QScrollBar::add-line:horizontal:hover,\n"
"QScrollBar::sub-line:horizontal:hover,\n"
"QScrollBar::add-line:vertical:hover,\n"
"QScrollBar::sub-line:vertical:hover,\n"
"QScrollBar::add-line:horizont"
                        "al:pressed,\n"
"QScrollBar::sub-line:horizontal:pressed,\n"
"QScrollBar::add-line:vertical:pressed,\n"
"QScrollBar::sub-line:vertical:pressed { }*/\n"
"QScrollBar::handle:hover {\n"
"  background: #9E9E9E; }\n"
"\n"
"QScrollBar::handle:pressed {\n"
"  background: #EFEBEF; }\n"
"\n"
"QScrollBar::handle:disabled {\n"
"  background: #555558; }\n"
"\n"
"QScrollBar::add-page,\n"
"QScrollBar::sub-page {\n"
"  background: transparent; }\n"
"\n"
"QScrollBar::up-arrow:vertical {\n"
"  image: url(./vs15/scrollbar-up.png); }\n"
"\n"
"QScrollBar::up-arrow:vertical:hover {\n"
"  image: url(./vs15/scrollbar-up-hover.png); }\n"
"\n"
"QScrollBar::up-arrow:vertical:disabled {\n"
"  image: url(./vs15/scrollbar-up-disabled.png); }\n"
"\n"
"QScrollBar::right-arrow:horizontal {\n"
"  image: url(./vs15/scrollbar-right.png); }\n"
"\n"
"QScrollBar::right-arrow:horizontal:hover {\n"
"  image: url(./vs15/scrollbar-right-hover.png); }\n"
"\n"
"QScrollBar::right-arrow:horizontal:disabled {\n"
"  image: url(./vs15/scrollbar-right-disabled"
                        ".png); }\n"
"\n"
"QScrollBar::down-arrow:vertical {\n"
"  image: url(./vs15/scrollbar-down.png); }\n"
"\n"
"QScrollBar::down-arrow:vertical:hover {\n"
"  image: url(./vs15/scrollbar-down-hover.png); }\n"
"\n"
"QScrollBar::down-arrow:vertical:disabled {\n"
"  image: url(./vs15/scrollbar-down-disabled.png); }\n"
"\n"
"QScrollBar::left-arrow:horizontal {\n"
"  image: url(./vs15/scrollbar-left.png); }\n"
"\n"
"QScrollBar::left-arrow:horizontal:hover {\n"
"  image: url(./vs15/scrollbar-left-hover.png); }\n"
"\n"
"QScrollBar::left-arrow:horizontal:disabled {\n"
"  image: url(./vs15/scrollbar-left-disabled.png); }\n"
"\n"
"/* Header Rows and Tables (Configure Mod Categories) #QTableView, #QHeaderView */\n"
"QTableView {\n"
"  gridline-color: #3F3F46;\n"
"  selection-background-color: #3399FF;\n"
"  selection-color: #F1F1F1; }\n"
"\n"
"QTableView QTableCornerButton::section {\n"
"  background: #252526;\n"
"  border-color: #3F3F46;\n"
"  border-style: solid;\n"
"  border-width: 0 1px 1px 0; }\n"
"\n"
"QHeaderView {\n"
""
                        "  border: none; }\n"
"\n"
"QHeaderView::section {\n"
"  background: #252526;\n"
"  border-color: #3F3F46;\n"
"  padding: 3px 5px;\n"
"  border-style: solid;\n"
"  border-width: 0 1px 1px 0; }\n"
"\n"
"QHeaderView::section:hover {\n"
"  background: #3E3E40;\n"
"  color: #F6F6F6; }\n"
"\n"
"/*QHeaderView::section:first { }*/\n"
"QHeaderView::section:last {\n"
"  border-right: 0; }\n"
"\n"
"QHeaderView::up-arrow {\n"
"  image: url(./vs15/sort-asc.png);\n"
"  margin-bottom: -37px; }\n"
"\n"
"DownloadListView QHeaderView::up-arrow {\n"
"  margin-bottom: -47px; }\n"
"\n"
"QHeaderView::down-arrow {\n"
"  image: url(./vs15/sort-desc.png);\n"
"  margin-bottom: 0; }\n"
"\n"
"/* Context menus, toolbar drop-downs #QMenu  */\n"
"QMenu {\n"
"  background-color: #1A1A1C;\n"
"  border-color: #333337;\n"
"  border-style: solid;\n"
"  border-width: 1px;\n"
"  padding: 2px; }\n"
"\n"
"QMenu::item {\n"
"  background: transparent;\n"
"  padding: 4px 20px; }\n"
"\n"
"QMenu::item:selected, QMenuBar::item:selected {\n"
"  background-"
                        "color: #333334; }\n"
"\n"
"QMenu::item:disabled {\n"
"  background-color: transparent; }\n"
"\n"
"QMenu::separator {\n"
"  background-color: #333337;\n"
"  height: 1px;\n"
"  margin: 1px 0; }\n"
"\n"
"QMenu::icon {\n"
"  margin: 1px; }\n"
"\n"
"QMenu::right-arrow {\n"
"  image: url(./vs15/sub-menu-arrow.png);\n"
"  subcontrol-origin: padding;\n"
"  subcontrol-position: center right;\n"
"  padding-right: .5em; }\n"
"\n"
"QMenu QPushButton {\n"
"  background-color: transparent;\n"
"  border-color: #3F3F46;\n"
"  margin: 1px 0 1px 0; }\n"
"\n"
"QMenu QCheckBox,\n"
"QMenu QRadioButton {\n"
"  background-color: transparent;\n"
"  padding: 5px 2px; }\n"
"\n"
"/* Tool tips #QToolTip, #SaveGameInfoWidget */\n"
"QToolTip,\n"
"SaveGameInfoWidget {\n"
"  background-color: #424245;\n"
"  border-color: #4D4D50;\n"
"  color: #F1F1F1;\n"
"  border-style: solid;\n"
"  border-width: 1px;\n"
"  padding: 2px; }\n"
"\n"
"QStatusBar::item {border: None;}\n"
"\n"
"/* Progress Bars (Downloads) #QProgressBar */\n"
"QProgressBar {\n"
""
                        "  background-color: #E6E6E6;\n"
"  color: #000;\n"
"  border-color: #BCBCBC;\n"
"  text-align: center;\n"
"  border-style: solid;\n"
"  border-width: 1px;\n"
"  margin: 0 0px; }\n"
"\n"
"QProgressBar::chunk {\n"
"  background: #06B025; }\n"
"\n"
"DownloadListView[downloadView=standard]::item {\n"
"	padding: 16px;\n"
"}\n"
"\n"
"DownloadListView[downloadView=compact]::item {\n"
"	padding: 4px;\n"
"}\n"
"\n"
"/* Right Pane and Tab Bars #QTabWidget, #QTabBar */\n"
"QTabWidget::pane {\n"
"  border-color: #3F3F46;\n"
"  border-top-color: #007ACC;\n"
"  top: 0;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"QTabWidget::pane:disabled {\n"
"  border-top-color: #3F3F46; }\n"
"\n"
"/*QTabWidget::tab-bar { }*/\n"
"QTabBar::tab {\n"
"  background-color: transparent;\n"
"  padding: 4px 1em;\n"
"  border: none; }\n"
"\n"
"QTabBar::tab:hover {\n"
"  background-color: #1C97EA; }\n"
"\n"
"QTabBar::tab:selected,\n"
"QTabBar::tab:selected:hover {\n"
"  background-color: #007ACC; }\n"
"\n"
"QTabBar::tab:disabled {"
                        "\n"
"  background-color: transparent;\n"
"  color: #656565; }\n"
"\n"
"QTabBar::tab:selected:disabled {\n"
"  background-color: #3F3F46; }\n"
"\n"
"/* Scrollers */\n"
"QTabBar QToolButton {\n"
"  background-color: #333337;\n"
"  border-color: #3F3F46;\n"
"  padding: 1px;\n"
"  margin: 0;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"QTabBar QToolButton:hover {\n"
"  border-color: #007ACC;\n"
"  border-width: 1px;\n"
"  border-style: solid; }\n"
"\n"
"QTabBar QToolButton:disabled,\n"
"QTabBar QToolButton:pressed:hover {\n"
"  background-color: #333337; }\n"
"\n"
"/*QTabBar::tear { }*/\n"
"QTabBar::scroller {\n"
"  width: 23px;\n"
"  background-color: red; }\n"
"\n"
"QTabBar QToolButton::right-arrow {\n"
"  image: url(./vs15/scrollbar-right.png); }\n"
"\n"
"QTabBar QToolButton::right-arrow:hover {\n"
"  image: url(./vs15/scrollbar-right-hover.png); }\n"
"\n"
"QTabBar QToolButton::left-arrow {\n"
"  image: url(./vs15/scrollbar-left.png); }\n"
"\n"
"QTabBar QToolButton::left-arrow:hover {\n"
"  im"
                        "age: url(./vs15/scrollbar-left-hover.png); }\n"
"\n"
"/* Special styles */\n"
"QWidget#tabImages QPushButton {\n"
"  background-color: transparent;\n"
"  margin: 0 .3em;\n"
"  padding: 0; }\n"
"\n"
"/* like dialog QPushButton*/\n"
"QWidget#tabESPs QToolButton {\n"
"  color: #000000;\n"
"  background-color: #DDDDDD;\n"
"  border-color: #707070;\n"
"  border-style: solid;\n"
"  border-width: 1px; }\n"
"\n"
"QWidget#tabESPs QToolButton:hover {\n"
"  background-color: #BEE6FD;\n"
"  border-color: #3C7FB1; }\n"
"\n"
"QWidget#tabESPs QToolButton:focus {\n"
"  background-color: #DDDDDD;\n"
"  border-color: #3399FF; }\n"
"\n"
"QWidget#tabESPs QToolButton:disabled {\n"
"  background-color: #333337;\n"
"  border-color: #3F3F46; }\n"
"\n"
"QTreeWidget#categoriesList {\n"
"  /*min-width: 225px;*/ }\n"
"\n"
"QTreeWidget#categoriesList::item {\n"
"  background-position: center left;\n"
"  background-repeat: no-repeat;\n"
"  padding: .35em 10px; }\n"
"\n"
"QTreeWidget#categoriesList::item:has-children {\n"
"  background-imag"
                        "e: url(./vs15/branch-closed.png); }\n"
"\n"
"QTreeWidget#categoriesList::item:has-children:open {\n"
"  background-image: url(./vs15/branch-open.png); }\n"
"\n"
"QDialog#QueryOverwriteDialog QPushButton {\n"
"  margin-left: .5em; }\n"
"\n"
"QDialog#PyCfgDialog QPushButton:hover {\n"
"  background-color: #BEE6FD; }\n"
"\n"
"QLineEdit#modFilterEdit {\n"
"  margin-top: 2px; }\n"
"\n"
"/* highlight unchecked BSAs */\n"
"QWidget#bsaTab QTreeWidget::indicator:unchecked {\n"
"  background-color: #3399FF; }\n"
"\n"
"/* increase version text field */\n"
"QLineEdit#versionEdit {\n"
"  max-width: 100px; }\n"
"\n"
"/* Dialogs width changes */\n"
"/* increase width to prevent buttons cutting */\n"
"QDialog#QueryOverwriteDialog {\n"
"  min-width: 565px; }\n"
"\n"
"QDialog#ModInfoDialog {\n"
"  min-width: 850px; }\n"
"\n"
"QLineEdit[valid-filter=false] {\n"
"	background-color: #661111 !important;\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 440, 701, 371));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 681, 91));
        addGroupPushButton = new QPushButton(groupBox_2);
        addGroupPushButton->setObjectName(QString::fromUtf8("addGroupPushButton"));
        addGroupPushButton->setGeometry(QRect(10, 60, 661, 24));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 661, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        groupNameLineEdit = new QLineEdit(layoutWidget);
        groupNameLineEdit->setObjectName(QString::fromUtf8("groupNameLineEdit"));

        horizontalLayout_3->addWidget(groupNameLineEdit);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(9, 130, 681, 231));
        layoutWidget_3 = new QWidget(groupBox_4);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 661, 161));
        gridLayout = new QGridLayout(layoutWidget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lastnameLineEdit = new QLineEdit(layoutWidget_3);
        lastnameLineEdit->setObjectName(QString::fromUtf8("lastnameLineEdit"));

        gridLayout->addWidget(lastnameLineEdit, 1, 1, 1, 1);

        label = new QLabel(layoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        bookNumberLineEdit = new QLineEdit(layoutWidget_3);
        bookNumberLineEdit->setObjectName(QString::fromUtf8("bookNumberLineEdit"));

        gridLayout->addWidget(bookNumberLineEdit, 0, 1, 1, 1);

        groupComboBox = new QComboBox(layoutWidget_3);
        groupComboBox->setObjectName(QString::fromUtf8("groupComboBox"));

        gridLayout->addWidget(groupComboBox, 2, 1, 1, 1);

        widget = new QWidget(groupBox_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 188, 661, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addPushButton = new QPushButton(widget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));

        horizontalLayout->addWidget(addPushButton);

        editPushButton = new QPushButton(widget);
        editPushButton->setObjectName(QString::fromUtf8("editPushButton"));

        horizontalLayout->addWidget(editPushButton);

        deletePushButton = new QPushButton(widget);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));

        horizontalLayout->addWidget(deletePushButton);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(720, 440, 271, 91));
        groupFilterComboBox = new QComboBox(groupBox_3);
        groupFilterComboBox->setObjectName(QString::fromUtf8("groupFilterComboBox"));
        groupFilterComboBox->setGeometry(QRect(10, 30, 251, 22));
        filterPushButton = new QPushButton(groupBox_3);
        filterPushButton->setObjectName(QString::fromUtf8("filterPushButton"));
        filterPushButton->setGeometry(QRect(10, 60, 251, 24));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(720, 539, 271, 271));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1002, 22));
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
        resetPushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\262\320\262\320\276\320\264\321\203 \320\264\320\260\320\275\320\270\321\205", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\265\320\275\320\275\321\217 \320\275\320\276\320\262\320\276\321\227 \320\263\321\200\321\203\320\277\320\270", nullptr));
        addGroupPushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260 \320\263\321\200\321\203\320\277\320\270", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\320\262\320\260\320\275\320\275\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260 \320\264\320\276 \320\263\321\200\321\203\320\277\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\273\321\226\320\272\320\276\320\262\320\276\321\227 \320\272\320\275\320\270\320\266\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        addPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\320\270", nullptr));
        editPushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
        deletePushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\244\321\226\320\273\321\214\321\202\321\200 \320\267\320\260 \320\263\321\200\321\203\320\277\320\276\321\216", nullptr));
        filterPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\272\320\276\320\275\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
