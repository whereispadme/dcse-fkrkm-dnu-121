#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class Base1 {

	//открытая часть класса Base1
public:
	Base1() : a(0) { cout << "Сработал конструктор класса Base1" << endl; }
	virtual ~Base1() { cout << "Сработал деструктор класса Base1" << endl; _getch(); }

	void metod1_Base1()const { cout << "Метод metod1_Base1 класса Base1" << endl; }
	   
	//закрытая часть класса
private:
	int a;

};