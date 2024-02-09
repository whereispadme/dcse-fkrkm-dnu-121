#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "priceform.h"
#include "listform.h"

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
    void on_pricePushButton_clicked();

    void on_listPushButton_clicked();

signals:

public slots:
    void getSignalFromPriceForm();
    void getSignalFromListForm();

private:
    Ui::MainWindow *ui;
    PriceForm *priceForm;
    ListForm *listForm;

};
#endif // MAINWINDOW_H
