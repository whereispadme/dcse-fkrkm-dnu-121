//определение базового класса Figure(Фигура)

#pragma once

class Figure
{

protected:
	double a;
	double b;

public:
	Figure();
	Figure(const double, const double);
	virtual ~Figure();

	virtual void setFigure(const double, const double);
	virtual void getFigure(double&, double&);

	virtual double getArea() const = 0;

};