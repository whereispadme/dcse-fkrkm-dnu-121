#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "function.h"

#include "inputform.h"

#include <QMainWindow>
#include <QStandardItem>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setTable();

public slots:
    void getSignalFromInputForm(double);

private slots:
    void on_callInitFormPushButton_clicked();

    void on_clearPushButton_clicked();

private:
    Ui::MainWindow *ui;
    InputForm *inputForm;

    Function *function;

    QStandardItem *item;
    QStandardItemModel *model;

    int row;

};
#endif // MAINWINDOW_H
