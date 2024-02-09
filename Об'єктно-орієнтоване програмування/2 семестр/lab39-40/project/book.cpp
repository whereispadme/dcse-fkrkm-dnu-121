#include "book.h"

Book::Book()
{
    this->title = "";
    this->author = "";
    this->year = "";
}

Book::Book(std::string title, std::string author, std::string year)
{
    this->title = title;
    this->author = author;
    this->year = year;
}

Book::~Book()
{
}

void Book::setData(Book book)
{
    this->title = book.title;
    this->author = book.author;
    this->year = book.year;
}

std::vector<std::string> Book::getData()
{

    std::vector<std::string> vectorStr;

    vectorStr.push_back(this->title);
    vectorStr.push_back(this->author);
    vectorStr.push_back(this->year);

    return vectorStr;
}
