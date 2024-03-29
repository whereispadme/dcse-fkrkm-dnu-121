#pragma once
#include "book.h"

class Catalogue
{

private:
    Book *books;
    int size;
    int currentIndex;

public:
    Catalogue();
    Catalogue(int size);
    ~Catalogue();

    bool addNewBookToCatalogue(Book*);
    bool deleteBookFromCatalogue(const std::string key);
    int findBookInCatalogue(const std::string key);
    bool sortBookInCatalogue();

    int getCurrentIndex();
    Book getBookIndex(int);

};
