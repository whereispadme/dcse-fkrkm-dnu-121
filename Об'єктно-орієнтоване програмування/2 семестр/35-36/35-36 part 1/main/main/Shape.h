//определение базового класса Shape(Фигура)
#pragma once

class Shape
{

public:
	Shape();
	~Shape();

	virtual double getArea() = 0;
	virtual double getPerim() = 0;
	virtual void draw() = 0;

};