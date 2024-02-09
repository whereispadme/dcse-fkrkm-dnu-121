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

	cout << "�������������� ����� �����: ";
	correctDouble(this->real);

	cout << endl;

	cout << "������ ����� �����: ";
	correctDouble(this->img);
	
	cout << endl << "��������� �����: ";
	
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