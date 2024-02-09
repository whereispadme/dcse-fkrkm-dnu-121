#include "priceform.h"
#include "ui_priceform.h"

PriceForm::PriceForm(QWidget *parent) : QWidget(parent), ui(new Ui::PriceForm)
{

    ui->setupUi(this);
    setWindowTitle("Расчет стоимости телефонных разговоров");

    setDefault();
    ui->durationLineEdit->setValidator(new QIntValidator(1, 1000, this));

}

PriceForm::~PriceForm()
{
    delete ui;
}

void PriceForm::closeEvent(QCloseEvent *event)
{

    emit sendSignalToMainForm();

}

void PriceForm::setDefault()
{

    ui->listWidget->clear();
    ui->durationLineEdit->clear();
    ui->textBrowser->clear();

    ui->listWidget->insertItem(ui->listWidget->count(), QString("Украина"));
    ui->listWidget->insertItem(ui->listWidget->count(), QString("Франция"));
    ui->listWidget->insertItem(ui->listWidget->count(), QString("Англия"));
    ui->listWidget->insertItem(ui->listWidget->count(), QString("Германия"));

    ui->listWidget->setCurrentRow(0);

    ui->applyPushButton->setEnabled(false);
    ui->resetPushButton->setEnabled(false);

}

void PriceForm::calculatePrice(float tax, int minute, bool isDiscount)
{

    int discount = 20;

    if(!isDiscount)
    {
        ui->textBrowser->setText("Стоимость звонка будет составлять: " + QString::number(tax * minute) + " грн.");
    }
    else
    {
        ui->textBrowser->setText("Стоимость звонка будет составлять: " + QString::number((tax * minute) * (100 - discount) / 100)  + " грн.");
    }

}

void PriceForm::on_durationLineEdit_textChanged(const QString &arg1)
{

    if(ui->durationLineEdit->text().isEmpty() || ui->durationLineEdit->text().toInt() <= 0)
    {

        ui->applyPushButton->setEnabled(false);

    }
    else
    {

        ui->applyPushButton->setEnabled(true);

    }

}


void PriceForm::on_resetPushButton_clicked()
{

    setDefault();

}


void PriceForm::on_applyPushButton_clicked()
{

    bool isDiscount;
    ui->resetPushButton->setEnabled(true);

    switch(ui->listWidget->currentRow())
    {

    case 0:
    {

        if(ui->dayComboBox->currentIndex() <= 4) isDiscount = false; else isDiscount = true;
        calculatePrice(0.6, ui->durationLineEdit->text().toInt(), isDiscount);

        break;
    }

    case 1:
    {

        if(ui->dayComboBox->currentIndex() <= 4) isDiscount = false; else isDiscount = true;
        calculatePrice(1.2, ui->durationLineEdit->text().toInt(), isDiscount);

        break;
    }

    case 2:
    {

        if(ui->dayComboBox->currentIndex() <= 4) isDiscount = false; else isDiscount = true;
        calculatePrice(2.5, ui->durationLineEdit->text().toInt(), isDiscount);

        break;
    }

    case 3:
    {

        if(ui->dayComboBox->currentIndex() <= 4) isDiscount = false; else isDiscount = true;
        calculatePrice(2.8, ui->durationLineEdit->text().toInt(), isDiscount);

        break;
    }

    }

}












