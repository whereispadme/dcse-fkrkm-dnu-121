#ifndef INPUTFORM_H
#define INPUTFORM_H

#include "flight.h"

#include <QWidget>

namespace Ui {
class InputForm;
}

class InputForm : public QWidget
{
    Q_OBJECT

public:
    explicit InputForm(QWidget *parent = nullptr);
    ~InputForm();

    void closeEvent(QCloseEvent *event);

    void setLineEditValidator();
    void checkLineEdit();

signals:
    void sendSignalToMainForm(Date date, std::vector<std::string>);
    void sendSignalToMainFormCloseEvent();

private slots:
    void on_applyPushButton_clicked();

    void on_destinationLineEdit_textEdited(const QString &arg1);

    void on_flightNumberLineEdit_textEdited(const QString &arg1);

    void on_priceLineEdit_textEdited(const QString &arg1);

private:
    Ui::InputForm *ui;
};

#endif // INPUTFORM_H
