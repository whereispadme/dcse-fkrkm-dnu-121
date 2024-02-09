//определение базового класса Triangle(Треугольник), который унаследован от класса Figure

#pragma once
#include "Figure.h"

class Triangle : public Figure
{

protected:
	double c;

public:
	Triangle(); 
	Triangle(const double, const double, const double);
	~Triangle();
	
	void setFigure(const double, const double, const double);
	void getFigure(double&, double&, double&);
	
	double getArea() const;	

};