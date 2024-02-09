#include "Calculate.h"
#include "includes.h"

Calculate::Calculate()
{

	this->complex1 = nullptr;
	this->complex2 = nullptr;
	this->complex3 = nullptr;

}

Calculate::Calculate(Complex *&complex1, Complex *&complex2, Complex *&complex3)
{

	this->complex1 = complex1;
	this->complex2 = complex2;
	this->complex3 = complex3;

}

Calculate::~Calculate()
{
}

void Calculate::display()
{

	cout << "Конечный результат: ";
	
	((*complex1) * (*complex2) - *(complex3)).print();

	system("pause");

}