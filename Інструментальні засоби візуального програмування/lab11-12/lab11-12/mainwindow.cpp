#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setDatabaseConnection();
    setMainWindowProperty();

    _student = new Student();

    _tableModel = new QSqlTableModel();
    _queryModel = new QSqlQueryModel(this);

    _queryModel = new QSqlQueryModel(this);
    _tableModel = new QSqlTableModel(this, QSqlDatabase::database("MyDatabase"));
    _tableModel->setTable("student");

    _studentTableViewAction = new StudentTableViewAction(ui->studentTableView, _tableModel, _queryModel);
    _studentTableViewAction->setTableView();
}

MainWindow::~MainWindow()
{
    delete ui;

    delete _student;
    delete _studentTableViewAction;
    delete _tableModel;
    delete _queryModel;
}

void MainWindow::setMainWindowProperty()
{
    this->show();
    this->setFixedSize(1002, 851);
    this->setWindowTitle("КущевськийАндрій, ПЗ-19-1 | lab13-14");
    this->setWindowFlags(Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
    this->setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));

    QSqlQuery query(QSqlDatabase::database("MyDatabase"));
    QStringList query_result;
    query.exec("select _group_name from _group;");

    while (query.next())
        query_result.push_back(query.value(0).toString());

    ui->groupComboBox->addItems(query_result);
    ui->groupFilterComboBox->addItems(query_result);
}

bool MainWindow::setDatabaseConnection()
{
    this->_database = QSqlDatabase::addDatabase("QODBC", "MyDatabase");

    QString connect = "DRIVER={MySQL ODBC 8.0 Unicode Driver};";

    connect.append("server = localhost, 3306;");
    connect.append("database = practicedb;");
    connect.append("user = root;");
    connect.append("password = 23kapkap;");
    connect.append("multi_host = 1;");
    _database.setDatabaseName(connect);

    if(!_database.open()) { qDebug() << "Failed to database connnect!"; return false; }

    return true;
}

void MainWindow::on_addGroupPushButton_clicked()
{
    for(int i = 0; i < ui->groupComboBox->count(); ++i)
        if(ui->groupComboBox->itemText(i) == ui->groupNameLineEdit->text()) return;

    QString group_name = ui->groupNameLineEdit->text();

    QString query = "insert into _group(_group_name) values('%1');";
    query = query.arg(group_name);

    _queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    QStringList string_list = (QStringList() << group_name);
    ui->groupComboBox->addItems(string_list);
    ui->groupFilterComboBox->addItems(string_list);
}

void MainWindow::on_addPushButton_clicked()
{
    _student->setStudentGroupName(ui->groupComboBox->currentText());
    _student->setStudentLastname(ui->lastnameLineEdit->text());
    _student->setStudentBookNumber(ui->bookNumberLineEdit->text());

    _studentTableViewAction->setStudent(*_student);
    bool flag{_studentTableViewAction->createTableViewRecord()};

    if(!flag)
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Додавання нового студенту");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Неможливо додати учня з таким номером залікової книжки! Студент з номером залікової книжки " + ui->bookNumberLineEdit->text() + " вже наявний у системі!");
        messageBox.setIcon(QMessageBox::Warning);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
    else
    {
        QMessageBox messageBox;
        messageBox.setWindowTitle("Додавання нового студенту");
        messageBox.setWindowIcon(QIcon("C:\\Users\\Professional\\Desktop\\lab13-14\\airport_icon.png"));
        messageBox.setText("Студент був успішно доданий у базу даних!");
        messageBox.setIcon(QMessageBox::Information);
        messageBox.setDefaultButton(QMessageBox::Ok);
        messageBox.exec();
    }
}

void MainWindow::on_editPushButton_clicked()
{

    _student->setStudentLastname(ui->lastnameLineEdit->text());
    _student->setStudentBookNumber(ui->bookNumberLineEdit->text());
    this->_studentTableViewAction->setStudent(*_student);

    QVariant myData;
    QModelIndex myIndex;
    myIndex = ui->studentTableView->model()->index(ui->studentTableView->currentIndex().row(), 0, QModelIndex());
    myData = ui->studentTableView->model()->data(myIndex);

    qDebug() << myData.toInt();

    this->_studentTableViewAction->editTableViewRecord(myData.toInt());
}

void MainWindow::on_deletePushButton_clicked()
{
    _student->setStudentGroupName(ui->groupFilterComboBox->currentText());
    this->_studentTableViewAction->setStudent(*_student);

}

void MainWindow::on_filterPushButton_clicked()
{
    _student->setStudentGroupName(ui->groupFilterComboBox->currentText());
    this->_studentTableViewAction->setStudent(*_student);

    this->_studentTableViewAction->searchTableViewRecord();
}

void MainWindow::on_resetPushButton_clicked()
{
    this->_studentTableViewAction->setTableView();
}

void MainWindow::on_studentTableView_activated(const QModelIndex &index)
{
    QVariant myData;
    QModelIndex myIndex;
    myIndex = ui->studentTableView->model()->index(ui->studentTableView->currentIndex().row(), 0, QModelIndex());
    myData = ui->studentTableView->model()->data(myIndex);

    qDebug() << myData.toInt();

    QString student_image;

    QSqlQuery sql_query(QSqlDatabase::database("MyDatabase"));
    sql_query.prepare("select student_image from student where student_id = :student_id;");
    sql_query.bindValue(":student_id", myData.toInt());
    sql_query.exec();
    while(sql_query.next()) student_image = sql_query.value(0).toString();

    qDebug() << student_image;
    QPixmap image("C:\\Users\\Professional\\Desktoplab11-12\\student_images\\2.jpg");

    QLabel *imageLabel = new QLabel();
    imageLabel->setPixmap(image);

    QHBoxLayout *layout = new QHBoxLayout(ui->frame);
    layout->addWidget(imageLabel);
}


void MainWindow::on_studentTableView_doubleClicked(const QModelIndex &index)
{

}

