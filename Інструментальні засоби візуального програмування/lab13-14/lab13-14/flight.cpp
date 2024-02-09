#include "flight.h"

Flight::Flight()
{
    this->_flight_number = "";
    this->_flight_ticket_price = "";
    this->_flight_destination_place = "";
    this->_fligth_date = "";
    this->_flight_time = "";
}

Flight::Flight(const QString &flight_number, const QString &flight_ticket_price, const QString &flight_destination_place, const QString &fligth_date, const QString &flight_time)
{
    this->_flight_number = flight_number;
    this->_flight_ticket_price = flight_ticket_price;
    this->_flight_destination_place = flight_destination_place;
    this->_fligth_date = fligth_date;
    this->_flight_time = flight_time;
}

Flight::~Flight()
{
}

void Flight::setFlightNumber(const QString &flight_number)
{
    this->_flight_number = flight_number;
}

void Flight::setFlightTicketPrice(const QString &flight_ticket_price)
{
    this->_flight_ticket_price = flight_ticket_price;
}

void Flight::setFlightDestinationPlace(const QString &flight_destination_place)
{
    this->_flight_destination_place = flight_destination_place;
}

void Flight::setFlightDate(const QString &fligth_date)
{
    this->_fligth_date = fligth_date;
}

void Flight::setFlightTime(const QString &flight_time)
{
    this->_flight_time = flight_time;
}

const QString &Flight::getFlightNumber() const
{
    return this->_flight_number;
}

const QString &Flight::getFlightTicketPrice() const
{
    return this->_flight_ticket_price;
}

const QString &Flight::getFlightDestinationPlace() const
{
    return this->_flight_destination_place;
}

const QString &Flight::getFlightDate() const
{
    return this->_fligth_date;
}

const QString &Flight::getFlightTime() const
{
    return this->_flight_time;
}


