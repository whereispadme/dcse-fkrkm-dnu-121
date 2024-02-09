#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "arrayform.h"
#include "salaryform.h"

#include <QDebug>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_arrayPushBuuton_clicked();

    void on_salaryPushButton_clicked();

public slots:

    void getSignalFromArrayForm();

    void getSignalFromSalaryForm();

private:
    Ui::MainWindow *ui;

    arrayform *arrForm;
    salaryform *salForm;

};
#endif // MAINWINDOW_H
