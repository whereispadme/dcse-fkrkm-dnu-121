//реализация класса Organization(Организация)

#include "Organization.h"

Organization::Organization()
{

	this->rezervFund = 0;
	this->name = "";

}

Organization::Organization(const string name, const double rezervFund)
{

	this->name = name;
	this->rezervFund = rezervFund;

}

Organization::~Organization()
{
}

void Organization::setRezervFund(double rezervFund)
{

	this->rezervFund = rezervFund;

}

double Organization::getRezervFund()
{
	
	return this->rezervFund;

}

double Organization::calculatePayment(const int procent)
{

	return (this->rezervFund * procent / 1200);

}