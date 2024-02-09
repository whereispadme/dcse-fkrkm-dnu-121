#include "flighttableviewaction.h"

FlightTableViewAction::FlightTableViewAction(QTableView *&tableView, QSqlTableModel *&tableModel, QSqlQueryModel *&queryModel)
{
    this->tableView = tableView;
    this->tableModel = tableModel;
    this->queryModel = queryModel;
}

FlightTableViewAction::~FlightTableViewAction()
{
}

void FlightTableViewAction::setTableView()
{
    tableModel->setTable("flight");

    FlightTableViewAction::setSqlTableModelHeadersData();

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->setSortingEnabled(true);

    tableModel->setSort(0, Qt::AscendingOrder);
    tableModel->select();

    tableView->setModel(tableModel);
    tableView->selectRow(0);

    int avarageSize = (tableView->geometry().width() / 5) - 5;

    tableView->setColumnWidth(0, avarageSize);
    tableView->setColumnWidth(1, avarageSize);
    tableView->setColumnWidth(2, avarageSize);
    tableView->setColumnWidth(3, avarageSize);
    tableView->setColumnWidth(4, avarageSize);
}

void FlightTableViewAction::setSqlTableModelHeadersData()
{
    tableModel->setHeaderData(0, Qt::Horizontal, ("Номер рейсу"));
    tableModel->setHeaderData(1, Qt::Horizontal, ("Вартість білету"));
    tableModel->setHeaderData(2, Qt::Horizontal, ("Пункт призначення"));
    tableModel->setHeaderData(3, Qt::Horizontal, ("Дата"));
    tableModel->setHeaderData(4, Qt::Horizontal, ("Час"));
}

void FlightTableViewAction::setSqlQueryModelHeadersData()
{
    queryModel->setHeaderData(0, Qt::Horizontal, ("Номер рейсу"));
    queryModel->setHeaderData(1, Qt::Horizontal, ("Вартість білету"));
    queryModel->setHeaderData(2, Qt::Horizontal, ("Пункт призначення"));
    queryModel->setHeaderData(3, Qt::Horizontal, ("Дата"));
    queryModel->setHeaderData(4, Qt::Horizontal, ("Час"));

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->setSortingEnabled(true);

    tableView->selectRow(0);
}

void FlightTableViewAction::searchTableViewRecord(bool typeSearch, int first, int second)
{
    QString query;

    if(typeSearch == 1)
    {
        query = "select * from flight where flight_date = '%1';";
        query = query.arg(_flight.getFlightDate());

        queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

        tableView->setModel(queryModel);
        FlightTableViewAction::setSqlQueryModelHeadersData();
    }
    else
    {
        query = "select * from flight where flight_id >= '%1' and flight_id <= '%2';";
        query = query.arg(first).arg(second);

        queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

        tableView->setModel(queryModel);
        FlightTableViewAction::setSqlQueryModelHeadersData();
    }
}

bool FlightTableViewAction::createTableViewRecord()
{
    QString query;

    query = "select flight_id from flight where flight_id = '%1';";
    query = query.arg(this->_flight.getFlightNumber());

    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));
    tableView->setModel(queryModel);

    if(queryModel->rowCount() != 0)
    {
        FlightTableViewAction::setTableView();
        return false;
    }

    query = ("insert into flight(flight_id, flight_ticket_price, flight_destination_place, flight_date, flight_time) values ('%1', '%2', '%3', '%4', '%5');");
    query = query.arg(_flight.getFlightNumber()).arg(_flight.getFlightTicketPrice()).arg(_flight.getFlightDestinationPlace()).arg(_flight.getFlightDate()).arg(_flight.getFlightTime());
    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    FlightTableViewAction::setSqlQueryModelHeadersData();
    FlightTableViewAction::setTableView();

    return true;
}

 bool FlightTableViewAction::editTableViewRecord(int currentIndex)
{
    QString query;

    query = "select flight_id from flight where flight_id = '%1';";
    query = query.arg(this->_flight.getFlightNumber());

    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));
    tableView->setModel(queryModel);

    if(queryModel->rowCount() != 0)
    {
        FlightTableViewAction::setTableView();
        return false;
    }

    query = ("SET SQL_SAFE_UPDATES = 0;");
    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    query = ("SET GLOBAL FOREIGN_KEY_CHECKS = 0;");
    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    query = ("update flight set flight_id = '%1', flight_ticket_price = '%2', flight_destination_place = '%3', flight_date = '%4', flight_time = '%5' where flight_id = '%6';");
    query = query.arg(_flight.getFlightNumber()).arg(_flight.getFlightTicketPrice()).arg(_flight.getFlightDestinationPlace()).arg(_flight.getFlightDate()).arg(_flight.getFlightTime()).arg(currentIndex);
    queryModel->setQuery(query, QSqlDatabase::database("MyDatabase"));

    FlightTableViewAction::setSqlQueryModelHeadersData();
    FlightTableViewAction::setTableView();

    return true;
}

void FlightTableViewAction::setFlight(Flight flight)
{
    this->_flight = flight;
}
