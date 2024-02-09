//реализация класса Union(Научно-производственное объединение)

#include "Union.h"

Union::Union()
{

	this->name = "";
	this->rezervFund = 0;
	this->rate = 0;
	this->fundSize = 0;
	this->kind = "";

}

Union::Union(string name, double rezervFund, int rate, double fundSize, string kind)
{

	this->name = name;
	this->rezervFund = rezervFund;
	this->rate = rate;
	this->fundSize = fundSize;
	this->kind = kind;

}

Union::~Union()
{
}

double Union::calculatePayment(int procent)
{

	return 0.0;

}