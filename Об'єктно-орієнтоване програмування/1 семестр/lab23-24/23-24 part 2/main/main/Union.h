//объявление и реализация класса Union(научно-произ объединение) унаследованого от highSchool и Enterprise 
#pragma once
#include "highSchool.h"
#include "Enterprise.h"

class Union : public highSchool, public Enterprise {

	//открытая часть класса
public:
	string type;//вид деятельности
	Union();
	Union(const string&, const double, const string&, const int, const double);
	~Union();

	double calculatePayment(const int value);

};

Union::Union()
{
}

Union::Union(const string &name, const double sizeFund, const string &type, const int procent, const double alloc) : highSchool("", 0.0, procent), Enterprise("", 0.0, alloc)
{

	this->type = type;
	setFund(sizeFund);

}

Union::~Union()
{
}

double Union::calculatePayment(const int value)
{
	return 0.0;
}