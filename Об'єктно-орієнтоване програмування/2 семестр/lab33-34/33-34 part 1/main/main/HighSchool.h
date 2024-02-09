//определение класса HighSchool(Ўкола, учебное заведение), унаследованого от класса Organization

#pragma once
#include "Organization.h"

class HighSchool : virtual public Organization //виртуальное наследование??? разобратьс€!
{
	
protected:
	int rate; //процент отчислений с фонда

public:
	HighSchool();
	HighSchool(string, double, int);
	~HighSchool();
	
	void setRate(int);
	int  getRate();

	double calculatePayment(int);

};