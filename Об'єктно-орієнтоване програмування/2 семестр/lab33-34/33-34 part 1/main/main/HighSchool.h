//����������� ������ HighSchool(�����, ������� ���������), �������������� �� ������ Organization

#pragma once
#include "Organization.h"

class HighSchool : virtual public Organization //����������� ������������??? �����������!
{
	
protected:
	int rate; //������� ���������� � �����

public:
	HighSchool();
	HighSchool(string, double, int);
	~HighSchool();
	
	void setRate(int);
	int  getRate();

	double calculatePayment(int);

};