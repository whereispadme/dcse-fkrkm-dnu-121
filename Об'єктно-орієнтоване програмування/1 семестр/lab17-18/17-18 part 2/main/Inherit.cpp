//реализация класса Inherit
#include "Inherit.h"
#include "Base.h"

#include <iostream>
using namespace std;

//конструктор по умолчанию(без параметров)
Inherit::Inherit() {

	this->mult = 0;
	this->div = 0;
	this->procent = 0;

}

//конструктор инициализации, для иниц. полей a и b *объекта класса Inherit* используем конструктор класса Base
Inherit::Inherit(int a_base, int b_base) : Base(a_base, b_base) {

	system("cls");

	cout << "Значения а и б(из параметров), которые переданы в конст. при создании объекта класса Inherit:" << endl;
	cout << "a:" << a_base << endl;
	cout << "b:" << b_base << endl;

	cout << endl;

	cout << "Значения а и б(для объекта) после вызова конструктора класса Base:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

}

//деструктор по умолчанию(без параметров)
Inherit::~Inherit()
{
}

//реализация метода для произведения a*b
void Inherit::setResultMult() {

	cout << endl;
	cout << "Метод setMult(), текущее состояние полей:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

	if ((getA() == 0) || (getB() == 0)) {

		this->mult = 0;

	}
	else {

		this->mult = getA() * getB();

	}

	cout << "Результат работы метода произведения:" << mult << endl;

}

//реализация метода для деления а/b
void Inherit::setResultDiv() {

	cout << endl;
	cout << "Метод setDiv(), текущее состояние полей:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

	if (getB() != 0) {

		this->div = getA() / getB();
		cout << "Результат работы метода деления a/b:" << div << endl;

	}
	else {

		cout << "Деление на ноль невозможно!" << endl;

	}

}

//реализация метода для расчёта процентов числа a от суммы всех полей базового класса
void Inherit::setResultProcent() {

	cout << endl;
	cout << "Метод setProcent(), текущее состояние полей:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

	float sum = getA() + getB();
	
	this->procent = (getA() / sum) * 100
;
	cout << "Результат работы метода процентов a от суммы полей баз. класса:" << procent << endl;

}

//реализация метода просмотра состояния полей с вызовом метода базового класса для просмотра полей a и b
void Inherit::printStatus() {

	cout << endl;
	cout << "Объект класса:" << typeid(*this).name();
	viewInherit();
	cout << "Object procent:" << this->procent << endl;
	
	cout << endl;
}