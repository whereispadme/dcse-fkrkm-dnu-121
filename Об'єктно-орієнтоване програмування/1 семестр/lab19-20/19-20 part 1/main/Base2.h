#pragma once
#include "Base1.h"

class Base2 : public Base1{

	//открытая часть класса Base2
public:
	Base2() : b(0) { cout << "Сработал конструктор класса Base2" << endl; }
	virtual ~Base2() { cout << "Сработал деструктор класса Base2" << endl; _getch(); }

	void metod1_Base2()const { cout << "Метод metod1_Base2() класса Base2" << endl; }
	void metod2_Base2()const { cout << "Метод metod2_Base2() класса Base2" << endl; }

	//закрытая часть класса
private:
	int b;

};