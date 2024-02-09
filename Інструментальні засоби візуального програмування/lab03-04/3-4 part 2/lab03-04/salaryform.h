#ifndef SALARYFORM_H
#define SALARYFORM_H

#include <QWidget>

namespace Ui {
class salaryform;
}

class salaryform : public QWidget
{
    Q_OBJECT

public:
    explicit salaryform(QWidget *parent = nullptr);
    ~salaryform();

    void closeEvent(QCloseEvent *event);

    void setDefault();

    void checkComboBox();

    std::string isMounth(int index);

    float avarageSalary();

signals:
    void sendSignalToMainForm();

public slots:


private slots:
    void on_firstComboBox_currentIndexChanged(int index);

    void on_lastComboBox_currentIndexChanged(int index);

    void on_comboxApplyPushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_applyPushButton_clicked();

    void on_resetPushButton_clicked();

private:
    Ui::salaryform *ui;

    std::vector<int> vectorSalary;

    int currentIndexMounth;

};

#endif // SALARYFORM_H
