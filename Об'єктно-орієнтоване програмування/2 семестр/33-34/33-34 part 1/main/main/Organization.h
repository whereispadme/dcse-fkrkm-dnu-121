//����������� ������ Organization(�����������)

#pragma once
#include <string>
using namespace std;

class Organization 
{
	
protected:
	double rezervFund; //��������� ����
	
public:
	string name; //�������� �����������
	
	Organization();
	Organization(const string, const double);
	virtual ~Organization();

	void   setRezervFund(double);
	double getRezervFund();
	
	virtual double calculatePayment(const int); //������� ����� ����������� ��������

};