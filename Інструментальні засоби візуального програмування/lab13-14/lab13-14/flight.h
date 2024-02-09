#ifndef FLIGHT_H
#define FLIGHT_H

#include "headers.h"

class Flight
{

protected:
    QString _flight_number;
    QString _flight_ticket_price;
    QString _flight_destination_place;
    QString _fligth_date;
    QString _flight_time;

public:
    Flight();
    Flight(const QString &, const QString &, const QString &, const QString &, const QString &);
    ~Flight();

    void setFlightNumber(const QString &);
    void setFlightTicketPrice(const QString &);
    void setFlightDestinationPlace(const QString &);
    void setFlightDate(const QString &);
    void setFlightTime(const QString &);

    const QString &getFlightNumber() const;
    const QString &getFlightTicketPrice() const;
    const QString &getFlightDestinationPlace() const;
    const QString &getFlightDate() const;
    const QString &getFlightTime() const;

};

#endif
