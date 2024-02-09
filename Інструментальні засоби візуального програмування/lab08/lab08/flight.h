#include <string>
#include <vector>

#pragma once

struct Date
{

    std::string date;
    std::string time;

};

class Flight
{

protected:
    Date date;

    std::string destination;

    std::string flightNumber;

    std::string price;

public:
    Flight();
    Flight(Date, std::string, std::string, std::string);
    ~Flight();

    void setData(Date, std::string, std::string, std::string);
    std::vector<std::string> getData();

    std::vector<std::string> getItemForSearch();

};
