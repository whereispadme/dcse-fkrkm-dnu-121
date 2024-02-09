#include "catalogue.h"
#include <iostream>
using namespace std;

Catalogue::Catalogue()
{
    this->size = 0;
    this->currentIndex = 0;
    this->books = nullptr;
}

Catalogue::Catalogue(int size)
{

    this->size = size;
    this->books = new Book[size];

}

Catalogue::~Catalogue()
{
    if (this->books != 0)
        delete[] this->books;
}

bool Catalogue::addNewBookToCatalogue(Book *book)
{

    if (this->currentIndex == 100)
    {
        return false;
    }

    this->books[currentIndex].setData(*book);
    this->currentIndex++;

    return true;

}

bool Catalogue::deleteBookFromCatalogue(const std::string key)
{

    if (this->currentIndex == 0)
    {
        return false;
    }

    int deleteBookIndex = findBookInCatalogue(key);

    if (deleteBookIndex == -1)
    {
        return false;
    }

    this->books[deleteBookIndex].~Book();

    std::vector<Book> vec;

    for (int i = 0; i < this->currentIndex; ++i)
    {

        if (this->books[i].getData()[0] != "")
        {
            vec.push_back(this->books[i]);
        }

    }

    for (int i = 0; i < this->currentIndex; ++i)
    {

        if(this->books[i].getData()[0] == "")
            vec.push_back(Book());

    }

    for (int i = 0; i < this->currentIndex; ++i)
    {

        this->books[i] = vec[i];

    }

    this->currentIndex--;

}

int Catalogue::findBookInCatalogue(const std::string key)
{

    if (this->size == 0)
    {
        return -1;
    }

    int index = -1;

    for (int i = 0; i < this->currentIndex; ++i)
    {

        if (this->books[i].getData()[0] == key)
        {
            index = i;
            break;
        }
        else
        {
            index = -1;
        }

    }

    return index;

}

bool Catalogue::sortBookInCatalogue()
{
    if (this->currentIndex == 0)
    {
        return false;
    }

    Book temp;

    for (int i = 0; i < currentIndex - 1; i++)
    {
        for (int j = currentIndex - 1; j > i; j--)
        {
            if (this->books[j].getData()[1] < this->books[j - 1].getData()[1])
            {
                temp = this->books[j - 1];
                this->books[j - 1] = this->books[j];
                this->books[j] = temp;
            }
        }

    }

}

int Catalogue::getCurrentIndex()
{

    return this->currentIndex;

}

Book Catalogue::getBookIndex(int index)
{

    return this->books[index];

}
