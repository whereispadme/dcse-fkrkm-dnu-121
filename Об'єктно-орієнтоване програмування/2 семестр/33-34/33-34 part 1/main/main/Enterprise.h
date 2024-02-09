//определение класса Enterprise(ѕредпри€тие), унаследованого от класса Organization

#pragma once
#include "Organization.h"

class Enterprise : virtual public Organization
{

protected:
	double fundSize; //размер благотворительного фонда

public:
	Enterprise();
	Enterprise(string, double, double);
	~Enterprise();
	
	void   setFundSize(double); 
	double getFundSize();
	double calculatePayment(int procent);
	
};