#ifndef RANGEFORM_H
#define RANGEFORM_H

#include <QWidget>
#include <QIntValidator>

namespace Ui {
class rangeform;
}

class rangeform : public QWidget
{
    Q_OBJECT

public:
    explicit rangeform(QWidget *parent = nullptr);
    ~rangeform();

    void checkLineEdit();

    void setLineEditValidator();

public slots:

    void getSignalFromArrayForm();

signals:

    void sendSignalToArrayForm(int, int);

private slots:
    void on_applyPushButton_clicked();

    void on_firstLineEdit_textEdited(const QString &arg1);

    void on_lastLineEdit_textEdited(const QString &arg1);

private:
    Ui::rangeform *ui;
};

#endif // RANGEFORM_H
