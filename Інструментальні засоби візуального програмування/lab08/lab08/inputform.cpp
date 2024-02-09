#include "inputform.h"
#include "ui_inputform.h"

InputForm::InputForm(QWidget *parent) : QWidget(parent), ui(new Ui::InputForm)
{

    ui->setupUi(this);
    setWindowTitle("КущевскийАндрей, ПЗ-19-1 | lab08");

    ui->destinationLineEdit->activateWindow();
    ui->calendarWidget->showToday();
    ui->applyPushButton->setEnabled(false);
    setLineEditValidator();

}

InputForm::~InputForm()
{
    delete ui;
}

void InputForm::closeEvent(QCloseEvent *event)
{

    emit sendSignalToMainFormCloseEvent();

}

void InputForm::setLineEditValidator()
{

    QRegularExpression regexForOnlySym("^[а-яА-яа-яА-яІіЇї]{20}");
    regexForOnlySym.setPatternOptions(QRegularExpression::UseUnicodePropertiesOption);
    QValidator *validatorForOnlySym = new QRegularExpressionValidator(regexForOnlySym, this);
    validatorForOnlySym->setLocale(QLocale::AnyLanguage);

    ui->destinationLineEdit->setValidator(validatorForOnlySym);
    ui->flightNumberLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression("^([1-9][0-9]*|0)"), this));
    ui->priceLineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression("^([1-9][0-9]*|0)"), this));

}

void InputForm::checkLineEdit()
{

    if(ui->destinationLineEdit->text().isEmpty() || ui->flightNumberLineEdit->text().isEmpty() || ui->priceLineEdit->text().isEmpty())
    {
        ui->applyPushButton->setEnabled(false);
    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }

}

void InputForm::on_applyPushButton_clicked()
{

    Date localDate;

    localDate.date.append(ui->calendarWidget->selectedDate().toString().toStdString());
    localDate.time.append(ui->timeEdit->time().toString().toStdString());

    std::vector<std::string> field;
    field.push_back(ui->destinationLineEdit->text().toStdString());
    field.push_back(ui->flightNumberLineEdit->text().toStdString());
    field.push_back(ui->priceLineEdit->text().toStdString());

    emit sendSignalToMainForm(localDate, field);

    ui->calendarWidget->showToday();
    ui->timeEdit->clear();

    ui->destinationLineEdit->clear();
    ui->flightNumberLineEdit->clear();
    ui->priceLineEdit->clear();

    ui->applyPushButton->setEnabled(false);

}

void InputForm::on_destinationLineEdit_textEdited(const QString &arg1)
{
    checkLineEdit();
}

void InputForm::on_flightNumberLineEdit_textEdited(const QString &arg1)
{
    checkLineEdit();
}

void InputForm::on_priceLineEdit_textEdited(const QString &arg1)
{
    checkLineEdit();
}

