//реализация класса Inherit
#include "Inherit.h"
#include "Base.h"

#include <iostream>
using namespace std;

//конструктор по умолчанию(без параметров)
Inherit::Inherit() {
	
	this->mult = 0;
	this->div = 0;
	this->temp = 0;

}

//конструктор инициализации, для иниц. полей a и b *объекта класса Inherit* используем конструктор класса Base
Inherit::Inherit(int a_base, int b_base, int temp) : Base(a_base, b_base) {

	this->temp = temp;

	cout << "Значения а и б(из параметров), которые переданы в конст. при создании объекта класса Inherit:" << endl;
	cout << "a:" << a_base << endl;
	cout << "b:" << b_base << endl;

	cout << endl;

	cout << "Значения а и б(для объекта) после вызова конструктора класса Base:" << endl;
	cout << "a:" << this->a << endl;
	cout << "b:" << this->b << endl;

}

//деструктор по умолчанию(без параметров)
Inherit::~Inherit() 
{
}

//реализация метода для произведения a*b
void Inherit::setMult() {
	
	cout << endl;
	cout << "Метод setMult(), текущее состояние полей:" << endl;
	cout <<  "a:" << this->a << endl;
	cout <<  "b:" << this->b << endl;

	if ((a == 0) || (b == 0)) {
		
		this->mult = 0;

	}
	else {
		
		this->mult = a * b;
		
	}
	
	cout << "Результат работы метода произведения:" << mult << endl;

}

//реализация метода для деления а/b
void Inherit::setDiv(){

	cout << "Метод setDiv(), текущее состояние полей:" << endl;
	cout << "a:" << this->a << endl;
	cout << "b:" << this->b << endl;

	if (b != 0) {

		this->div = a / b;
		cout << "Результат работы метода деления a/b:" << div << endl << endl;
	
	}
	else {
		
		cout << "Деление на ноль невозможно!" << endl;
	
	}

}