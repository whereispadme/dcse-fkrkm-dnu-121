#ifndef INFOFORM_H
#define INFOFORM_H

#include "flight.h"

#include <QWidget>
#include <QStandardItemModel>
#include <QTableView>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QStandardItem>

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
