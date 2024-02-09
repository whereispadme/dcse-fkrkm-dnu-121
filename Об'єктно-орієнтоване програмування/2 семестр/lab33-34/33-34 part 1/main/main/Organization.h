//определение класса Organization(Организация)

#pragma once
#include <string>
using namespace std;

class Organization 
{
	
protected:
	double rezervFund; //резервный фонд
	
public:
	string name; //название организации
	
	Organization();
	Organization(const string, const double);
	virtual ~Organization();

	void   setRezervFund(double);
	double getRezervFund();
	
	virtual double calculatePayment(const int); //подсчет суммы ежемесячных платежей

};