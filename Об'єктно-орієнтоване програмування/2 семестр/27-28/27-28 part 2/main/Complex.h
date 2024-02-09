#pragma once

class Complex
{

private:
	double real;//действительная часть
	double img; //мнимая часть

public:
	Complex();
	Complex(double, double);
	~Complex();

	void setComplex();
	void print();

	friend Complex operator-(Complex a, Complex b);
	friend Complex operator*(Complex a, Complex b);

};