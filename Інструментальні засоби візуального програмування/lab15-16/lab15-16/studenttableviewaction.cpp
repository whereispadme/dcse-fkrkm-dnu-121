#include "studenttableviewaction.h"

StudentTableViewAction::StudentTableViewAction()
{
    this->tableView = nullptr;
    this->tableModel = nullptr;
    this->queryModel = nullptr;
}

StudentTableViewAction::StudentTableViewAction(QTableView *&tableView, QSqlTableModel *&tableModel, QSqlQueryModel *&queryModel)
{
    this->tableView = tableView;
    this->tableModel = tableModel;
    this->queryModel = queryModel;
}

StudentTableViewAction::~StudentTableViewAction()
{
}

void StudentTableViewAction::setTableView()
{
    tableModel->setTable("student");

    StudentTableViewAction::setSqlTableModelHeadersData();

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->setSortingEnabled(true);

    tableModel->setSort(0, Qt::AscendingOrder);
    tableModel->select();

    tableView->setModel(tableModel);
    tableView->selectRow(0);

    int avarageSize = (tableView->geometry().width() / 3) - 5;

    tableView->setColumnHidden(0, true);
    tableView->setColumnHidden(1, true);
    tableView->setColumnWidth(2, avarageSize);
    tableView->setColumnWidth(3, avarageSize);
    tableView->setColumnWidth(4, avarageSize);

}

void StudentTableViewAction::setSqlTableModelHeadersData()
{
    tableModel->setHeaderData(0, Qt::Horizontal, ("student_id"));
    tableModel->setHeaderData(1, Qt::Horizontal, ("group_id"));
    tableModel->setHeaderData(2, Qt::Horizontal, ("Прізвище"));
    tableModel->setHeaderData(3, Qt::Horizontal, ("Група"));
    tableModel->setHeaderData(4, Qt::Horizontal, ("Номер залікової книжки"));
}

void StudentTableViewAction::setSqlQueryModelHeadersData()
{
    queryModel->setHeaderData(0, Qt::Horizontal, ("student_id"));
    queryModel->setHeaderData(1, Qt::Horizontal, ("group_id"));
    queryModel->setHeaderData(2, Qt::Horizontal, ("Прізвище"));
    queryModel->setHeaderData(3, Qt::Horizontal, ("Група"));
    queryModel->setHeaderData(4, Qt::Horizontal, ("Номер залікової книжки"));

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->setSortingEnabled(true);

    tableView->selectRow(0);
}

void StudentTableViewAction::searchTableViewRecord()
{
    QString query;

    query = "select * from student where student_group_id = (select _group_id from _group where _group_name = '%1');";
    query = query.arg(_student.getStudentGroupName());

    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    tableView->setModel(queryModel);
    StudentTableViewAction::setSqlQueryModelHeadersData();

}

bool StudentTableViewAction::createTableViewRecord()
{

    QString query;

    query = "select student_book_number from student where student_book_number = '%1';";
    query = query.arg(this->_student.getStudentBookNumber());

    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));
    tableView->setModel(queryModel);

    if(queryModel->rowCount() != 0)
    {
        StudentTableViewAction::setTableView();
        return false;
    }

    QSqlQuery sql_query(QSqlDatabase::database("MyDatabase"));
    sql_query.prepare("select _group_id from _group where _group_name = (:group_name);");
    sql_query.bindValue(":group_name", _student.getStudentGroupName());

    QString group_id;
    sql_query.exec();
    while(sql_query.next()) group_id = sql_query.value(0).toString();

    sql_query.prepare("insert into student(student_group_id, student_lastname, student_group_name, student_book_number) values (:student_group_id, :student_lastname, :student_group_name, :student_book_number);");
    sql_query.bindValue(":student_group_id", group_id);
    sql_query.bindValue(":student_lastname", _student.getStudentLastname());
    sql_query.bindValue(":student_group_name", _student.getStudentGroupName());
    sql_query.bindValue(":student_book_number", _student.getStudentBookNumber());
    sql_query.exec();

    StudentTableViewAction::setSqlQueryModelHeadersData();
    StudentTableViewAction::setTableView();

    return true;
}

 bool StudentTableViewAction::editTableViewRecord(int currentIndex)
{
    QString query;

    query = "select student_book_number from student where student_book_number = '%1';";
    query = query.arg(this->_student.getStudentBookNumber());

    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));
    tableView->setModel(queryModel);

    if(queryModel->rowCount() != 0)
    {
        StudentTableViewAction::setTableView();
        return false;
    }

    query = ("SET SQL_SAFE_UPDATES = 0;");
    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    query = ("SET GLOBAL FOREIGN_KEY_CHECKS = 0;");
    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    QSqlQuery sql_query(QSqlDatabase::database("MyDatabase"));
    sql_query.prepare("update student set student_lastname = (:student_lastname), student_book_number = (:student_book_number) where student_id = (:student_id);");
    sql_query.bindValue(":student_lastname", _student.getStudentLastname());
    sql_query.bindValue(":student_book_number", _student.getStudentBookNumber());
    sql_query.bindValue(":student_id", currentIndex);

    sql_query.exec();

    StudentTableViewAction::setSqlQueryModelHeadersData();
    StudentTableViewAction::setTableView();

    return true;
}

void StudentTableViewAction::setStudent(Student student)
{
    this->_student = student;
}
