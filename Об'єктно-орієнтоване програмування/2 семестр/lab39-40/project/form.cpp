#include "form.h"
#include "ui_form.h"

form::form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::form)
{
    ui->setupUi(this);
    setWindowTitle("Данные");
    setDefaultValues();
    setLineEditValidator();
}

form::~form()
{
    delete ui;
}

void form::getSignalFromMain(bool status)
{
    this->status = status;
    show();
}

void form::setLineEditValidator()
{

    QRegularExpression regexForOnlySym("^[а-яА-яа-яА-яІіЇї]{20}");
    regexForOnlySym.setPatternOptions(QRegularExpression::UseUnicodePropertiesOption);
    QValidator *validatorForOnlySym = new QRegularExpressionValidator(regexForOnlySym, this);
    validatorForOnlySym->setLocale(QLocale::AnyLanguage);

    ui->lineEdit->setValidator(validatorForOnlySym);

}

void form::setDefaultValues()
{

    ui->lineEdit->clear();

    ui->pushButton->setEnabled(false);

}

void form::checkLineEdit()
{

    if(ui->lineEdit->text().isEmpty())
    {
        ui->pushButton->setEnabled(false);
    }
    else
    {
       ui->pushButton->setEnabled(true);
    }

}

void form::on_lineEdit_textChanged(const QString &arg1)
{
    checkLineEdit();
}


void form::on_pushButton_clicked()
{
    emit signalToMain(status, ui->lineEdit->text());
    setDefaultValues();
}
