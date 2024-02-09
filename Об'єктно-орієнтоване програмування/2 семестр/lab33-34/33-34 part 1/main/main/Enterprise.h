//����������� ������ Enterprise(�����������), �������������� �� ������ Organization

#pragma once
#include "Organization.h"

class Enterprise : virtual public Organization
{

protected:
	double fundSize; //������ ������������������ �����

public:
	Enterprise();
	Enterprise(string, double, double);
	~Enterprise();
	
	void   setFundSize(double); 
	double getFundSize();
	double calculatePayment(int procent);
	
};