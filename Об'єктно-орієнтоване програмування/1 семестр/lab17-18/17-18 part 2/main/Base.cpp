//реализация класса Base
#include "Base.h"

#include <iostream>
using namespace std;

//конструктор по умолчанию(без параметров)
Base::Base() {

	this->a = 0;
	this->b = 0;

}

//конструктор инициализации(с параметрами)
Base::Base(int a, int b) {

	this->a = a;
	this->b = b;

}

//деструктор
Base::~Base()
{
}

//реализация функции в базовом классе для просмотра состояния полей объекта класса Inherit
void Base::viewInherit() {

	cout << endl;
	
	cout << "Object a:" << a << endl;
	cout << "Object b:" << b << endl;

}