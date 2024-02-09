#include "Triangle.h"
#include <cmath>

Triangle::Triangle() : Figure()
{
	
	this->c = 0;

}

Triangle::Triangle(const double a, const double b, const double c) : Figure(a, b)
{

	this->c = c;

}

Triangle::~Triangle()
{
}

void Triangle::setFigure(const double a, const double b, const double c)
{

	Figure::setFigure(a, b);
	this->c = c;

}

void Triangle::getFigure(double &a, double &b, double &c)
{

	a = this->a;	
	b = this->b;
	c = this->c;

}

double Triangle::getArea() const
{
	
	double p = (this->a + this->b + this->c) / 2;
	return sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));
	
}