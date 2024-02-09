#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QRegularExpression>
#include <QValidator>

namespace Ui {
class form;
}

class form : public QWidget
{
    Q_OBJECT

public:
    explicit form(QWidget *parent = nullptr);
    ~form();

    void setLineEditValidator();
    void setDefaultValues();
    void checkLineEdit();
signals:
    void signalToMain(bool status, QString);

public slots:
    void getSignalFromMain(bool status);

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::form *ui;
    bool status;

};

#endif // FORM_H
