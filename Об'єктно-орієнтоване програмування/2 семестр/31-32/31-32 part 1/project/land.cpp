#include "land.h"

Land::Land()
{
    this->type = 0;

    this->count = 0;
    this->tax = 0;
    this->length = 0;
    this->width = 0;
}

Land::Land(int type, int count, int length, int width)
{
    this->type = type;
    this->count = count;
    this->length = length;
    this->width = width;

    double area = (this->length * this->width) * count;
    area = area / 10000.;

    switch(this->type)
    {

    case 1:
    {
        this->tax = area * 250;
        break;
    }

    case 2:
    {
        this->tax =area * 367;
        break;
    }

    case 3:
    {
        this->tax = area * 595;
        break;
    }

    }

}

int Land::getType()
{
    return this->type;
}

int Land::getArea()
{
    return this->length * this->width;
}

int Land::getCount()
{
    return this->count;
}

double Land::getTax()
{
    return this->tax;
}
