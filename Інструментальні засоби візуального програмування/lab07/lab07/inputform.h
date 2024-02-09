#ifndef INPUTFORM_H
#define INPUTFORM_H

#include <QWidget>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

namespace Ui {
class InputForm;
}

class InputForm : public QWidget
{
    Q_OBJECT

public:
    explicit InputForm(QWidget *parent = nullptr);
    ~InputForm();

signals:
    void sendSignalToMainForm(double);

private slots:
    void on_applyPushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::InputForm *ui;
};

#endif // INPUTFORM_H
