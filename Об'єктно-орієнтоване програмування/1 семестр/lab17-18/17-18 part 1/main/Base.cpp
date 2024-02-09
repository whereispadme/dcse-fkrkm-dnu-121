//реализация класса Base
#include "Base.h"

#include <iostream>
using namespace std;

//конструктор по умолчанию(без параметров)
Base::Base(){

	this->a = 0;
	this->b = 0;

}

//конструктор инициализации(с параметрами)
Base::Base(int a, int b) {

	this->a = a;
	this->b = b;

}

//деструктор по умолчанию
Base::~Base() 
{
}

//реализация метода sum_B класса Base
int Base::sum_B() {

	return a + b;

}

//реализация метода diff_B класса Base
int Base::diff_B() {
	
	return a - b;

}