#pragma once
#include <vector>

class MyArray
{

private:
    int *data;
    unsigned int size;

public:
    MyArray();
    MyArray(unsigned int size);
    ~MyArray();

    void setArray(std::vector<int>);
    int getIndexArray(int);

    void replaceOnPairedIndexSquare();
    std::vector<int> getElementsInRange(int, int);

};
