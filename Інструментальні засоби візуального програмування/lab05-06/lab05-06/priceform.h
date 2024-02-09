#ifndef PRICEFORM_H
#define PRICEFORM_H

#include <QWidget>

namespace Ui {
class PriceForm;
}

class PriceForm : public QWidget
{
    Q_OBJECT

public:
    explicit PriceForm(QWidget *parent = nullptr);
    ~PriceForm();

    void closeEvent (QCloseEvent *event);

    void setDefault();

    void calculatePrice(float tax, int minute, bool isDiscount);

signals:
    void sendSignalToMainForm();

private slots:
    void on_durationLineEdit_textChanged(const QString &arg1);

    void on_resetPushButton_clicked();

    void on_applyPushButton_clicked();

private:
    Ui::PriceForm *ui;
};

#endif // PRICEFORM_H
