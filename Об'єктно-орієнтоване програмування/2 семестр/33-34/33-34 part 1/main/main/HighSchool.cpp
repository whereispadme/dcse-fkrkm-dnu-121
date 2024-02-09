//реализаци€ класса HighSchool(Ўкола, учебное заведение)

#include "HighSchool.h"

HighSchool::HighSchool()
{

	this->rezervFund = 0;
	this->name = "";
	this->rate = 0;

}

HighSchool::HighSchool(string name, double rezervFund, int rate)
{

	this->name = name;
	this->rezervFund = rezervFund;
	this->rate = rate;

}

HighSchool::~HighSchool()
{
}

void HighSchool::setRate(int rate)
{

	this->rate = rate;

}

int HighSchool::getRate()
{
	
	return this->rate;

}

double HighSchool::calculatePayment(int procent)
{
	
	if (procent > this->rate) 
		return (this->rezervFund * this->rate / 1200);
	else 
		return (Organization::calculatePayment(procent));

}