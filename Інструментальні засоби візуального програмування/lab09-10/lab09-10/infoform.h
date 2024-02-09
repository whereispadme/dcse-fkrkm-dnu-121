#ifndef INFOFORM_H
#define INFOFORM_H

#include "flight.h"

#include <QWidget>
#include <QStandardItemModel>
#include <QTableView>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QStandardItem>
#include <QFile>

namespace Ui {
class InfoForm;
}

class InfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit InfoForm(QWidget *parent = nullptr);
    ~InfoForm();

    void closeEvent(QCloseEvent *event);

    void setDefaultParam();

    void searchByDestination();
    void searchByTime();

    void setTableView();

    void saveTableViewRowInFile(bool flag);

signals:
    void sendSignalToMainForm();

private slots:
    void on_exitToMainPushButton_clicked();

    void on_destinationRadioButton_clicked();

    void on_timeRadioButton_clicked();

    void on_destinationLineEdit_textEdited(const QString &arg1);

    void on_firstTimeEdit_userTimeChanged(const QTime &time);

    void on_lastTimeEdit_userTimeChanged(const QTime &time);

    void on_showPushButton_clicked();

    void on_resetPushButton_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_destinationTableView_doubleClicked(const QModelIndex &index);

    void on_destinationTableView_customContextMenuRequested(const QPoint &pos);

    void on_timeTableView_doubleClicked(const QModelIndex &index);

public slots:
    void getSignalFromMainForm(std::vector<Flight>);

private:
    Ui::InfoForm *ui;

    QStandardItemModel *model1;
    QStandardItemModel *model2;

    QStandardItem *item;

    std::vector<Flight> localFlightVector;
    std::vector<Flight> searchFlightVector;

};

#endif // INFOFORM_H
