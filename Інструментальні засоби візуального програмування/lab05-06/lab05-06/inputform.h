#ifndef INPUTFORM_H
#define INPUTFORM_H

#include <string>
#include <vector>

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

    void setValidator();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

signals:
    void sendSignalToListForm(std::vector<std::string>);

private:
    Ui::InputForm *ui;

    std::vector<std::string> vectorString;

};

#endif // INPUTFORM_H
