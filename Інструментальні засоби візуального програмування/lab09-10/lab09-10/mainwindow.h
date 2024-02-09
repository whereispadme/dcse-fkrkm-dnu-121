#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "flight.h"

#include "inputform.h"
#include "infoform.h"

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>

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
    void on_callInputFormPushButton_clicked();

    void on_infoPushButton_clicked();

    void on_exitPushButton_clicked();

public slots:
    void getSignalFromInputForm(Date date, std::vector<std::string>);
    void getSignalFromInputFormCloseEvent();

    void getSignalFromInfoForm();

signals:
    void sendSignalToInfoForm(std::vector<Flight>);

private:
    Ui::MainWindow *ui;
    InputForm *inputForm;
    InfoForm *infoForm;

    Flight flight;
    std::vector<Flight> flightVector;

};
#endif // MAINWINDOW_H
