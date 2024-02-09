//объ€вление и реализаци€ класса Organization(организаци€)
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Organization {

	//открыта€ часть класса
public:
	string name;//название органицзации
	Organization();
	Organization(const string&, const double);
	~Organization();
	
	void setFund(double);
	double getFund()const;
	double calculatePayment(const int);
	
	//защищЄнна€ часть класса
protected:
	double sizeFund;//размер фонда

};

Organization::Organization()
{
	
	this->name = "";
	this->sizeFund = 0;

}

Organization::Organization(const string &name, const double sizeFund)
{

	this->name = name;
	this->sizeFund = sizeFund;

}

Organization::~Organization()
{
}

void Organization::setFund(double sizeFund)
{

	this->sizeFund = sizeFund;

}

double Organization::getFund() const
{
	
	return this->sizeFund;

}

double Organization::calculatePayment(const int value)
{
	
	return (this->sizeFund * value / 1200.0);

}