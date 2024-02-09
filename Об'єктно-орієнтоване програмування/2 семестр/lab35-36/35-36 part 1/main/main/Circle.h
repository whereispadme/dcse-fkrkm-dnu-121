//����������� ������ Circle(����), ������� ����������� �� Shape
#pragma once
#include "Shape.h"

class Circle : public Shape
{

private:
	int itsRadius;
	int itsCircumference;

public:
	Circle();
	Circle(int);
	~Circle();

	double getArea();
	double getPerim();
	void draw();
	
};