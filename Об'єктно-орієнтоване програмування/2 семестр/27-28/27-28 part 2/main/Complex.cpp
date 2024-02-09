#include "Complex.h"
#include "includes.h"

#include <iostream>
using namespace std;

Complex::Complex()
{

	this->real = 0;
	this->img = 0;

}

Complex::Complex(double real, double img)
{

	this->real = real;
	this->img = img;

}

Complex::~Complex()
{
}

void Complex::setComplex()
{

	cout << "Действительная часть числа: ";
	correctDouble(this->real);

	cout << endl;

	cout << "Мнимая часть числа: ";
	correctDouble(this->img);
	
	cout << endl << "Введенное число: ";
	
	cout << this->real << "+i*";

	if (this->img < 0) {
		cout << "(" << this->img << ")";
	}
	else {
		cout << this->img;
	}

	cout << endl << endl << endl;

}

void Complex::print()
{

	cout << this->real << "+i*";

	if (this->img < 0) {
		cout << "(" << this->img << ")";
	}
	else {
		cout << this->img;
	}

	cout << endl << endl << endl;

}