#include "flight.h"

Flight::Flight()
{

    this->date.date = "";
    this->date.time = "";

    this->destination = "";
    this->flightNumber = "";
    this->price = "";
}

Flight::Flight(Date date, std::string destination, std::string flightNumber, std::string price)
{

    this->date.date = date.date;
    this->date.time = date.time;

    this->destination = destination;
    this->flightNumber = flightNumber;
    this->price = price;

}

Flight::~Flight()
{
}

void Flight::setData(Date date, std::string destination, std::string flightNumber, std::string price)
{

    this->date.date = date.date;
    this->date.time = date.time;

    this->destination = destination;
    this->flightNumber = flightNumber;
    this->price = price;

}

std::vector<std::string> Flight::getData()
{

    std::vector<std::string> vector;

    std::string string = this->date.date + " " + this->date.time;

    vector.push_back(string);

    vector.push_back(this->destination);
    vector.push_back(this->flightNumber);
    vector.push_back(this->price);

    return vector;

}

std::vector<std::string> Flight::getItemForSearch()
{

    std::vector<std::string> vector;

    vector.push_back(this->destination);
    vector.push_back(this->date.time);

    return vector;
}
