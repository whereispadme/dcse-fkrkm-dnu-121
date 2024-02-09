//����������� ������ Union(������-���������������� �����������), �������������� �� ������ HighSchool � ������ Enterprise

#pragma once
#include "HighSchool.h"
#include "Enterprise.h"

class Union : public HighSchool, public Enterprise
{

public:
	string kind; //��� ������������
	
	Union();
	Union(string, double, int, double, const string);
	~Union();

	double calculatePayment(int);

};