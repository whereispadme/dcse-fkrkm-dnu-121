#ifndef ARRAYFORM_H
#define ARRAYFORM_H

#include "rangeform.h"

#include "myarray.h"

#include <vector>

#include <QWidget>
#include <QIntValidator>

namespace Ui {
class arrayform;
}

class arrayform : public QWidget
{
    Q_OBJECT

public:
    explicit arrayform(QWidget *parent = nullptr);
    ~arrayform();

    void closeEvent(QCloseEvent *event);

    void setDefault();

    void setLineEditValidator();

    void setBaseListWidget();

    void setResultArrayListWidget(bool flag);

signals:
    void sendSignalToMainForm();
    void sendSignalToRangeForm();

public slots:
    void getSignalFromRangeForm(int, int);

private slots:
    void on_sizeOfArrayLineEdit_textEdited(const QString &arg1);

    void on_sizeOfArrayPushButton_clicked();

    void on_indexLineEdit_textEdited(const QString &arg1);

    void on_addNewValuePushButton_clicked();

    void on_comboBoxPushButton_clicked();

    void on_resetPushButton_clicked();

private:
    Ui::arrayform *ui;
    rangeform *rangeForm;

    MyArray *intArray;

    std::vector<int> intVector;
    int currentIndex;

    std::vector<int> rangeVector;

};

#endif // ARRAYFORM_H
