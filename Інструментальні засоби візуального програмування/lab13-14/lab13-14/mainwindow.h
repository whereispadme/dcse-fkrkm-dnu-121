#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "headers.h"

#include "flight.h"
#include "flighttableviewaction.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setMainWindowProperty();
    bool setDatabaseConnection();
    void setLineEditValidator(bool);

private slots:
    void on_resetPushButton_clicked();

    void on_numberLineEdit_textEdited(const QString &arg1);

    void on_ticketPriceLineEdit_textEdited(const QString &arg1);

    void on_addPushButton_clicked();

    void on_editPushButton_clicked();

    void on_datePushButton_clicked();

    void on_firstSpinBox_valueChanged(int arg1);

    void on_secondSpinBox_valueChanged(int arg1);

    void on_firstSpinBox_textChanged(const QString &arg1);

    void on_secondSpinBox_textChanged(const QString &arg1);

    void on_intervalPushButton_clicked();

    void on_flightTableView_entered(const QModelIndex &index);

private:
    Ui::MainWindow *ui;

    Flight *_flight;
    FlightTableViewAction *_flightTableViewAction;

    QSqlDatabase _database;
    QSqlTableModel *_tableModel;
    QSqlQueryModel *_queryModel;

};

#endif
