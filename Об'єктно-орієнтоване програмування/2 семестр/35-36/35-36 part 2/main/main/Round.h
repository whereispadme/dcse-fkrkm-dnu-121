//����������� ������ Round(������� ����), ������� ����������� �� Figure
#pragma once
#include "Figure.h"

class Round : public Figure
{

protected:
	float height;
	float surfaceRadius;

public:
	Round();
	Round(float, float);
	~Round();
	
};