#include "function.h"

#include <cmath>
#define PI 3.1415926535

Function::Function()
{

    this->data = 0;

}

Function::Function(double data)
{

    this->data = data;

}

Function::~Function()
{
}

void Function::setData(double data)
{

    this->data = data;

}

double Function::getData()
{

    return this->data;

}

double Function::calculateSin()
{

    return (sin(this->data * PI / 180));

}

double Function::calculateLog()
{

    return (log(this->data));

}

double Function::calculateSquare()
{

    return (this->data * this->data);

}

double Function::calculateSquqreRoot()
{

    return (sqrt(this->data));

}
