#pragma once
#include "Base2.h"

class Inherit : public Base2 {

	//открытая часть класса Inherit
public:
	Inherit() : c(0) { cout << "Сработал конструктор класса Inherit" << endl;  }
	~Inherit() { cout << "Сработал деструктор класса Inherit" << endl; _getch(); }

	//переопределение метода metod1_Base2() класса Base2 в унаследованном от Base2 классе Inherit
	void metod1_Base2()const { metod1_Base1(); }

	//закрытая часть класса
private:
	int c;

};