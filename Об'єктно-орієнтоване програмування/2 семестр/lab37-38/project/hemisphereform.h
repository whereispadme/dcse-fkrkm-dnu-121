#ifndef HEMISPHEREFORM_H
#define HEMISPHEREFORM_H

#include <QWidget>
#include <QDoubleValidator>

namespace Ui {
class hemisphereForm;
}

class hemisphereForm : public QWidget
{
    Q_OBJECT

signals:
    void signalToMainWindow(float radius);

public slots:
    void getSignal();

public:
    explicit hemisphereForm(QWidget *parent = nullptr);
    ~hemisphereForm();

    void setLineEditValidator();
    void checkLineEdit();

private slots:
    void on_radiusLineEdit_textChanged(const QString &arg1);

    void on_applyPushButton_clicked();

private:
    Ui::hemisphereForm *ui;
};

#endif // HEMISPHEREFORM_H
