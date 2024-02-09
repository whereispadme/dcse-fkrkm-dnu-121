#include "Circle.h"
#include <iostream>

Circle::Circle()
{
	this->itsRadius = 0;
	this->itsCircumference = 0;
}

Circle::Circle(int itsRadius)
{
	this->itsRadius = itsRadius;
}

Circle::~Circle()
{
}

double Circle::getArea()
{
	return (3.14 * this->itsRadius * this->itsRadius);
}

double Circle::getPerim()
{
	return (6.28 * this->itsRadius);
}

void Circle::draw()
{
	std::cout << "Circle drawing routine here!" << std::endl;
}