#include "inputform.h"
#include "ui_inputform.h"

InputForm::InputForm(QWidget *parent) : QWidget(parent), ui(new Ui::InputForm)
{

    ui->setupUi(this);

    setWindowTitle("Инициализация входных данных");
    ui->applyPushButton->setEnabled(false);

    ui->lineEdit->setValidator(new QRegularExpressionValidator(QRegularExpression("^([1-9][0-9]*|0)"), this));

}

InputForm::~InputForm()
{
    delete ui;
}

void InputForm::on_applyPushButton_clicked()
{

    emit sendSignalToMainForm(ui->lineEdit->text().toDouble());
    ui->lineEdit->clear();
    ui->applyPushButton->setEnabled(false);

}

void InputForm::on_lineEdit_textEdited(const QString &arg1)
{

    if(ui->lineEdit->text().isEmpty())
    {

        ui->applyPushButton->setEnabled(false);

    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }

}

