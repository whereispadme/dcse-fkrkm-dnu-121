#ifndef PYRAMIDFORM_H
#define PYRAMIDFORM_H

#include <QWidget>
#include <QDoubleValidator>

namespace Ui {
class pyramidForm;
}

class pyramidForm : public QWidget
{
    Q_OBJECT

signals:
    void signalToMainWindow(float length, float height, float side);

public slots:
    void getSignal();

public:
    explicit pyramidForm(QWidget *parent = nullptr);
    ~pyramidForm();

    void setLineEditValidator();
    void checkLineEdit();

private slots:
    void on_applyPushButton_clicked();

    void on_heightLineEdit_textChanged(const QString &arg1);

    void on_lengthLineEdit_textChanged(const QString &arg1);

    void on_sideLineEdit_textChanged(const QString &arg1);

private:
    Ui::pyramidForm *ui;
};

#endif // PYRAMIDFORM_H
