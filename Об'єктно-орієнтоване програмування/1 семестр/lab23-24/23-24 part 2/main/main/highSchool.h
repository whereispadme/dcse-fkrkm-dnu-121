//объ€вление и реализаци€ класса highSchool(вуз) унаследованого от класса Organization
#pragma once
#include "Organization.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class highSchool : virtual public Organization {

	//открыта€ часть класса
public:
	highSchool();
	highSchool(const string&, const double, const int);
	~highSchool();

	void setRate(int);
	int getRate()const;
	double calculatePayment(const int);

	//защищЄнна€ часть класса
protected:
	int procent;//процент отчислений

};

highSchool::highSchool() : Organization()
{

	this->procent = 0;

}

 highSchool::highSchool(const string &name, const double sizeFund, const int procent) : Organization(name, sizeFund)
{
}

 highSchool::~highSchool()
 {
 }

 void highSchool::setRate(int procent)
 {

	 this->procent = procent;

 }

 int highSchool::getRate() const
 {
	 return this->procent;
 }

 double highSchool::calculatePayment(const int procent)
 {
	 if (procent > this->procent) return (this->sizeFund * this->procent / 1200);
	 else return (Organization::calculatePayment(procent));

 }