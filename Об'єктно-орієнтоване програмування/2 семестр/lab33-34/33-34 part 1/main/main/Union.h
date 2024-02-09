//определение класса Union(Ќаучно-произведственное объединение), унаследованого от класса HighSchool и класса Enterprise

#pragma once
#include "HighSchool.h"
#include "Enterprise.h"

class Union : public HighSchool, public Enterprise
{

public:
	string kind; //тип де€тельности
	
	Union();
	Union(string, double, int, double, const string);
	~Union();

	double calculatePayment(int);

};