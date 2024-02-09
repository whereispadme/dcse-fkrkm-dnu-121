#ifndef FLIGHTTABLEVIEWACTION_H
#define FLIGHTTABLEVIEWACTION_H

#include "headers.h"
#include "flight.h"

class FlightTableViewAction
{

protected:
    Flight _flight;

    QTableView *tableView;
    QSqlTableModel *tableModel;
    QSqlQueryModel *queryModel;

public:
    FlightTableViewAction(QTableView *&, QSqlTableModel *&, QSqlQueryModel *&);
    ~FlightTableViewAction();

    void setTableView();
    void setSqlTableModelHeadersData();
    void setSqlQueryModelHeadersData();

    void searchTableViewRecord(bool, int = 0, int = 0);
    bool createTableViewRecord();
    bool editTableViewRecord(int);

    void setFlight(Flight);

};

#endif
