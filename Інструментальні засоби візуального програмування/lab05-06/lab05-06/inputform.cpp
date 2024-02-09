#include "inputform.h"
#include "ui_inputform.h"

InputForm::InputForm(QWidget *parent) : QWidget(parent), ui(new Ui::InputForm)
{

    ui->setupUi(this);

    setWindowTitle("Заполнение списка");

    ui->listWidget->clear();
    ui->lineEdit->clear();
    ui->pushButton->setEnabled(false);

    setValidator();

}

InputForm::~InputForm()
{
    delete ui;
}

void InputForm::closeEvent(QCloseEvent *event)
{

    ui->listWidget->clear();
    ui->lineEdit->clear();

    emit sendSignalToListForm(vectorString);

    vectorString.clear();

}

void InputForm::setValidator()
{

    QRegularExpression regexForOnlySym("^[а-яА-яа-яА-яІіЇї]{20}");
    regexForOnlySym.setPatternOptions(QRegularExpression::UseUnicodePropertiesOption);
    QValidator *validatorForOnlySym = new QRegularExpressionValidator(regexForOnlySym, this);
    validatorForOnlySym->setLocale(QLocale::AnyLanguage);

    ui->lineEdit->setValidator(validatorForOnlySym);

}

void InputForm::on_lineEdit_textChanged(const QString &arg1)
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

void InputForm::on_pushButton_clicked()
{

    vectorString.push_back(ui->lineEdit->text().toStdString());
    ui->listWidget->insertItem(ui->listWidget->count(), ui->lineEdit->text());

    ui->lineEdit->clear();

}

