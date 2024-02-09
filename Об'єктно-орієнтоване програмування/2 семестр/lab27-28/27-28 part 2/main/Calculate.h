#pragma once
#include "Complex.h"

class Calculate
{

private:
	Complex *complex1;
	Complex *complex2;
	Complex *complex3;

public:
	Calculate();
	Calculate(Complex *&complex1, Complex *&complex2, Complex *&complex3);
	~Calculate();

	void display();

};