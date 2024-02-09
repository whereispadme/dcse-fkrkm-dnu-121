#include "Figure.h"

Figure::Figure()
{
	
	this->a = 0;
	this->b = 0;

}

Figure::Figure(const double a, const double b)
{

	this->a = a;
	this->b = b;

}

Figure::~Figure()
{
}

void Figure::setFigure(const double a, const double b)
{

	this->a = a;
	this->b = b;

}

void Figure::getFigure(double &a, double &b)
{

	a = this->a;
	b = this->b;

}