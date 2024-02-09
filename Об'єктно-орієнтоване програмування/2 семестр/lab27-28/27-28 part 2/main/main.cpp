#include "includes.h"

Complex operator-(Complex a, Complex b)
{
	return Complex(a.real - b.real, a.img - b.img);
}

Complex operator*(Complex a, Complex b)
{
	return Complex(a.real * b.real - a.img * b.img, a.real * b.img + a.img * b.real);
}

int main() 
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");
	
	setColor(14);
	
	cout << "<-- Ввод первого числа -->" << endl << endl;
	Complex *complex1 = new Complex;
	complex1->setComplex();	
	
	cout << "<-- Ввод второго числа -->" << endl << endl;
	Complex *complex2 = new Complex;
	complex2->setComplex();

	cout << "<-- Ввод третьего числа -->" << endl << endl;
	Complex *complex3 = new Complex;
	complex3->setComplex();

	Calculate calculate(complex1, complex2, complex3);
	calculate.display();

	delete complex1;
	delete complex2;
	delete complex3;

	return 0;

}