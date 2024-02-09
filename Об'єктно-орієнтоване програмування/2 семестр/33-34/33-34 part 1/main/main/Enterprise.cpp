//реализация класса Enterprise(Предприятие)

#include "Enterprise.h"

Enterprise::Enterprise()
{

	this->rezervFund = 0;
	this->name = "";
	this->fundSize = 0;

}

Enterprise::Enterprise(string name, double rezervFund, double fundSize)
{

	this->name = name;
	this->rezervFund = rezervFund;
	this->fundSize = fundSize;

}

Enterprise::~Enterprise()
{
}

void Enterprise::setFundSize(double fundSize)
{

	this->fundSize = fundSize;

}

double Enterprise::getFundSize()
{

	return this->fundSize;

}

double Enterprise::calculatePayment(int procent)
{
	
	return (this->fundSize * procent / 1200);

}