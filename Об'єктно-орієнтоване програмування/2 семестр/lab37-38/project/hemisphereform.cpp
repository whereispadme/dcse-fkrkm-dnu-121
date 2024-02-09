#include "hemisphereform.h"
#include "ui_hemisphereform.h"

void hemisphereForm::getSignal()
{
    show();
}

hemisphereForm::hemisphereForm(QWidget *parent) : QWidget(parent), ui(new Ui::hemisphereForm)
{
    ui->setupUi(this);
    setWindowTitle("Полушарие");
    setLineEditValidator();
}

hemisphereForm::~hemisphereForm()
{
    delete ui;
}

void hemisphereForm::setLineEditValidator()
{
    QValidator *doubleValidator = new QDoubleValidator(0, 999999., 3);
    ui->radiusLineEdit->setValidator(doubleValidator);
}

void hemisphereForm::checkLineEdit()
{

    if(ui->radiusLineEdit->text().isEmpty() || ui->radiusLineEdit->text().toFloat() == 0.)
    {
        ui->applyPushButton->setEnabled(false);
    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }

}

void hemisphereForm::on_radiusLineEdit_textChanged(const QString &arg1)
{
    checkLineEdit();
}

void hemisphereForm::on_applyPushButton_clicked()
{
    hide();
    emit signalToMainWindow(ui->radiusLineEdit->text().toFloat());
    ui->radiusLineEdit->clear();
}
