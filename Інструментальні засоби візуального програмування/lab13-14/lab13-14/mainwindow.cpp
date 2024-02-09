#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMainWindowProperty();
    setLineEditValidator(false);
    setDatabaseConnection();

    _flight = new Flight();

    _tableModel = new QSqlTableModel();
    _queryModel = new QSqlQueryModel(this);

    _queryModel = new QSqlQueryModel(this);
    _tableModel = new QSqlTableModel(this, QSqlDatabase::database("MyDatabase"));
    _tableModel->setTable("flight");

    _flightTableViewAction = new FlightTableViewAction(ui->flightTableView, _tableModel, _queryModel);
    _flightTableViewAction->setTableView();
}

MainWindow::~MainWindow()
{
    delete ui;

    delete _flight;
    delete _flightTableViewAction;
    delete _tableModel;
    delete _queryModel;

    setLineEditValidator(true);
}

void MainWindow::setMainWindowProperty()
{
    this->show();
    this->setFixedSize(1003, 783);
    this->setWindowTitle("КущевськийАндрій, ПЗ-19-1 | lab13-14");
    this->setWindowFlags(Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
    this->setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));

    ui->dateEdit->setDate(QDate(QDateTime::currentDateTime().toString("yyyy").toInt(), QDateTime::currentDateTime().toString("MM").toInt(), QDateTime::currentDateTime().toString("dd").toInt()));
    ui->timeEdit->setTime(QTime(QDateTime::currentDateTime().time().hour(), QDateTime::currentDateTime().time().minute()));

    ui->numberLineEdit->clear();
    ui->ticketPriceLineEdit->clear();

    ui->addPushButton->setEnabled(false);
    ui->editPushButton->setEnabled(false);
    ui->intervalPushButton->setEnabled(false);
}

bool MainWindow::setDatabaseConnection()
{
    this->_database = QSqlDatabase::addDatabase("QODBC", "MyDatabase");

    QString connect = "DRIVER={MySQL ODBC 8.0 Unicode Driver};";

    connect.append("server = localhost, 3306;");
    connect.append("database = lab;");
    connect.append("user = root;");
    connect.append("password = 23kapkap;");
    connect.append("multi_host = 1;");
    _database.setDatabaseName(connect);

    if(!_database.open()) { qDebug() << "Failed to database connnect!"; return false; }

    return true;
}

void MainWindow::setLineEditValidator(bool type)
{
    QRegularExpression regexNumber("^[0-9]{3}$");
    QValidator *numberValidator = new QRegularExpressionValidator(regexNumber);
    ui->numberLineEdit->setValidator(numberValidator);

    QRegularExpression regexTicketPrice("^[0-9]{5}$");
    QValidator *ticketPriceValidator = new QRegularExpressionValidator(regexTicketPrice);
    ui->ticketPriceLineEdit->setValidator(ticketPriceValidator);

    if(type) { delete numberValidator; delete ticketPriceValidator; }
}

void MainWindow::on_resetPushButton_clicked()
{
    _flightTableViewAction->setTableView();
}

void MainWindow::on_numberLineEdit_textEdited(const QString &arg1)
{
    if(ui->numberLineEdit->text().isEmpty() || ui->ticketPriceLineEdit->text().isEmpty())
    {
        ui->addPushButton->setEnabled(false);
        ui->editPushButton->setEnabled(false);
    }
    else
    {
        ui->addPushButton->setEnabled(true);
        ui->editPushButton->setEnabled(true);
    }
}

void MainWindow::on_ticketPriceLineEdit_textEdited(const QString &arg1)
{
    if(ui->numberLineEdit->text().isEmpty() || ui->ticketPriceLineEdit->text().isEmpty())
    {
        ui->addPushButton->setEnabled(false);
        ui->editPushButton->setEnabled(false);
    }
    else
    {
        ui->addPushButton->setEnabled(true);
        ui->editPushButton->setEnabled(true);
    }
}

void MainWindow::on_addPushButton_clicked()
{
    _flight->setFlightNumber(ui->numberLineEdit->text());
    _flight->setFlightTicketPrice(ui->ticketPriceLineEdit->text());
    _flight->setFlightDestinationPlace(ui->destinationComboBox->currentText());
    _flight->setFlightDate(ui->dateEdit->text());
    _flight->setFlightTime(ui->timeEdit->text());

    _flightTableViewAction->setFlight(*_flight);
    bool flag{_flightTableViewAction->createTableViewRecord()};

    if(!flag)
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Створення нового рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Неможливо створити рейс з таким номером! Рейc з номером " + ui->numberLineEdit->text() + " вже наявний у системі!");
        messageBox.setIcon(QMessageBox::Warning);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
    else
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Створення нового рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Рейс був успішно створений та доданий у базу даних!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
}

void MainWindow::on_editPushButton_clicked()
{
    _flight->setFlightNumber(ui->numberLineEdit->text());
    _flight->setFlightTicketPrice(ui->ticketPriceLineEdit->text());
    _flight->setFlightDestinationPlace(ui->destinationComboBox->currentText());
    _flight->setFlightDate(ui->dateEdit->text());
    _flight->setFlightTime(ui->timeEdit->text());

    _flightTableViewAction->setFlight(*_flight);
    bool flag{_flightTableViewAction->editTableViewRecord(ui->flightTableView->model()->index(ui->flightTableView->currentIndex().row(),0).data().toInt())};

    if(!flag)
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Редагування рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Неможливо редагувати обраний рейс таким чином! Рейc з номером " + ui->numberLineEdit->text() + " вже наявний у системі!");
        messageBox.setIcon(QMessageBox::Warning);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
    else
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Редагування рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Обраний рейс був успішно редагований!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
}

void MainWindow::on_datePushButton_clicked()
{
    _flight->setFlightDate(ui->calendarWidget->selectedDate().toString("dd.MM.yyyy"));

    _flightTableViewAction->setFlight(*_flight);
    _flightTableViewAction->searchTableViewRecord(true);

    if(this->_queryModel->rowCount() == 0)
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Результат пошуку рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Не було знайдено записів з вказаними параметрами!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
    else
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Результат пошуку рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Було знайдено записів з вказаними параметрами: " + QString::number(this->_queryModel->rowCount()) + "!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
}

void MainWindow::on_firstSpinBox_valueChanged(int arg1)
{
    (arg1 > ui->secondSpinBox->text().toInt()) ? ui->intervalPushButton->setEnabled(false) : ui->intervalPushButton->setEnabled(true);
}

void MainWindow::on_secondSpinBox_valueChanged(int arg1)
{
    (arg1 < ui->firstSpinBox->text().toInt()) ? ui->intervalPushButton->setEnabled(false) : ui->intervalPushButton->setEnabled(true);
}

void MainWindow::on_firstSpinBox_textChanged(const QString &arg1)
{
    (arg1 > ui->secondSpinBox->text()) ? ui->intervalPushButton->setEnabled(false) : ui->intervalPushButton->setEnabled(true);
}

void MainWindow::on_secondSpinBox_textChanged(const QString &arg1)
{
    (arg1 < ui->firstSpinBox->text()) ? ui->intervalPushButton->setEnabled(false) : ui->intervalPushButton->setEnabled(true);
}


void MainWindow::on_intervalPushButton_clicked()
{
    _flightTableViewAction->searchTableViewRecord(false, ui->firstSpinBox->text().toInt(), ui->secondSpinBox->text().toInt());

    if(this->_queryModel->rowCount() == 0)
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Результат пошуку рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Не було знайдено записів з вказаними параметрами!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
    else
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Результат пошуку рейсу");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Було знайдено записів з вказаними параметрами: " + QString::number(this->_queryModel->rowCount()) + "!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
}

void MainWindow::on_flightTableView_entered(const QModelIndex &index)
{
    QString flight_number = ui->flightTableView->model()->index(ui->flightTableView->currentIndex().row(), 0).data().toString();
    QString flight_ticket_price = ui->flightTableView->model()->index(ui->flightTableView->currentIndex().row(), 2).data().toString();
    QString flight_destination_place = ui->flightTableView->model()->index(ui->flightTableView->currentIndex().row(), 3).data().toString();
    QString fligth_date = ui->flightTableView->model()->index(ui->flightTableView->currentIndex().row(), 4).data().toString();
    QString flight_time = ui->flightTableView->model()->index(ui->flightTableView->currentIndex().row(), 5).data().toString();

    QString output = "Номер рейсу: " + flight_number + ";\n"
                     "Вартість білету: " + flight_ticket_price + ";\n"
                     "Пункт призначення: " + flight_destination_place + ";\n"
                     "Дата: " + fligth_date + ";\n"
                     "Час: " + flight_time + ".\n";

    ui->textBrowser->setText(output);
}
