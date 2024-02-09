#ifndef STUDENTTABLEVIEWACTION_H
#define STUDENTTABLEVIEWACTION_H

#include "headers.h"
#include "student.h"

class StudentTableViewAction
{

protected:
    Student _student;

    QTableView *tableView;
    QSqlTableModel *tableModel;
    QSqlQueryModel *queryModel;

public:
    StudentTableViewAction();
    StudentTableViewAction(QTableView *&, QSqlTableModel *&, QSqlQueryModel *&);
    ~StudentTableViewAction();

    void setTableView();
    void setSqlTableModelHeadersData();
    void setSqlQueryModelHeadersData();

    void searchTableViewRecord();
    bool createTableViewRecord();
    bool editTableViewRecord(int);

    void setStudent(Student);

};

#endif
