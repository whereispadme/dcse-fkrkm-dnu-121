#include "MyArray.h"
#include <cmath>

MyArray::MyArray()
{

    this->data = nullptr;
    this->size = 0;

}

MyArray::MyArray(unsigned int size)
{

    this->size = size;

    data = new int[size];

    for (int i = 0; i < size; ++i)
    {

        data[i] = 0;

    }

}

MyArray::~MyArray()
{

    if (this->data != nullptr)
        delete[] data;

}

void MyArray::setArray(std::vector<int> valueVector)
{

    if (this->data == nullptr)
        return;

    for (int i = 0; i < this->size; ++i)
    {

        this->data[i] = valueVector[i];

    }

}

int MyArray::getIndexArray(int index)
{

    if (this->data == nullptr)
        return 0;

    return this->data[index];

}

void MyArray::replaceOnPairedIndexSquare()
{

    if (this->data == nullptr)
        return;

    for (int i = 0; i < this->size; ++i)
    {

        if (i % 2 == 0)
        {

            this->data[i] = pow(this->data[i], 2);

        }

    }

}

std::vector<int> MyArray::getElementsInRange(int first, int second)
{

    if (this->data == nullptr)
        return std::vector<int>();

    std::vector<int> rangeVector;

    for (int i = 0; i < this->size; ++i)
    {

        if (this->data[i] >= first && this->data[i] <= second)
        {

            rangeVector.push_back(this->data[i]);

        }

    }

    return rangeVector;

}
