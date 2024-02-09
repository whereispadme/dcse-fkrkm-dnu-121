#pragma once
#include "Triangle.h"

class Trapeze : public Triangle
{

protected:
	double d;
	double h;

public:
	Trapeze();
	Trapeze(const double, const double, const double, const double, const double);
	~Trapeze();
	
	void setFigure(const double, const double, double, double, double);
	void getFigure(double&, double&, double&, double&, double&);
	
	double getArea() const;
	
};