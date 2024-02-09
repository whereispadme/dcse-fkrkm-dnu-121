#ifndef LISTFORM_H
#define LISTFORM_H

#include "inputform.h"

#include <vector>
#include <string>
#include <fstream>

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class ListForm;
}

class ListForm : public QWidget
{
    Q_OBJECT

public:
    explicit ListForm(QWidget *parent = nullptr);
    ~ListForm();

    void closeEvent(QCloseEvent *event);

    void setDefaultConfig();

    void readDataFile();

    void saveDataFile(bool choice);

signals:
    void sendSignalToMainForm();

public slots:
    void getSignalFromInputForm(std::vector<std::string>);

private slots:
    void on_uploadApplyPushButton_clicked();

    void on_addToGenListPushButton_clicked();

    void on_delFromGenListPushButton_clicked();

    void on_comeToNewListPushButton_clicked();

    void on_resetPushButton_clicked();

    void on_saveGeneralListPushButton_clicked();

    void on_saveNewListPushButton_clicked();

private:
    Ui::ListForm *ui;
    InputForm *inputForm;

};

#endif // LISTFORM_H
