//объ€вление и реализаци€ класса Enterprise (предпри€тие)
#pragma once
#include "Organization.h"

class Enterprise : virtual public Organization
{

	//октрыта€ часть класса
public:
	Enterprise();
	Enterprise(const string&, const double, const double);
	~Enterprise();
	void setAlloc(const double); 
	double getAlloc() const;
	double calcPayment(const int = 0) const;

//защищЄнна€ часть класса
protected:
	double alloc;// величина благотворительного фонда
	
};

Enterprise::Enterprise() : Organization()
{

	this->alloc = 0;

}

Enterprise::Enterprise(const string &name, const double sizeFund, const double alloc) : Organization(name, sizeFund)
{

	this->alloc = alloc;
	
}

Enterprise::~Enterprise()
{
}

void Enterprise::setAlloc(const double alloc)
{

	this->alloc = alloc;

}

double Enterprise::calcPayment(const int value) const
{

	return (this->alloc * value / 1200.0);

}

double Enterprise::getAlloc() const
{

	return this->alloc;

}