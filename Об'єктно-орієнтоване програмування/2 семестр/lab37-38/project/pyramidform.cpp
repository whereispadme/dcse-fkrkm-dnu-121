#include "pyramidform.h"
#include "ui_pyramidform.h"

void pyramidForm::getSignal()
{
    show();
}

pyramidForm::pyramidForm(QWidget *parent) : QWidget(parent), ui(new Ui::pyramidForm)
{
    ui->setupUi(this);

    setWindowTitle("Четырехугольная пирамида");
    setLineEditValidator();
    ui->applyPushButton->setEnabled(false);

}

pyramidForm::~pyramidForm()
{
    delete ui;
}

void pyramidForm::setLineEditValidator()
{
    QValidator *doubleValidator = new QDoubleValidator(0, 999999., 3);
    ui->lengthLineEdit->setValidator(doubleValidator);
    ui->heightLineEdit->setValidator(doubleValidator);
    ui->sideLineEdit->setValidator(doubleValidator);
}

void pyramidForm::on_applyPushButton_clicked()
{

    hide();
    emit signalToMainWindow(ui->lengthLineEdit->text().toFloat(), ui->heightLineEdit->text().toFloat(), ui->sideLineEdit->text().toFloat());
    ui->lengthLineEdit->clear();
    ui->heightLineEdit->clear();
    ui->sideLineEdit->clear();

}

void pyramidForm::checkLineEdit()
{
    if(ui->lengthLineEdit->text().isEmpty() || ui->heightLineEdit->text().isEmpty() || ui->sideLineEdit->text().isEmpty()
       || ui->lengthLineEdit->text().toFloat() == 0. || ui->heightLineEdit->text().toFloat() == 0. || ui->sideLineEdit->text().toFloat() == 0.)
    {
        ui->applyPushButton->setEnabled(false);
    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }
}

void pyramidForm::on_heightLineEdit_textChanged(const QString &arg1)
{

    checkLineEdit();

}

void pyramidForm::on_lengthLineEdit_textChanged(const QString &arg1)
{

    checkLineEdit();

}

void pyramidForm::on_sideLineEdit_textChanged(const QString &arg1)
{

    checkLineEdit();

}
