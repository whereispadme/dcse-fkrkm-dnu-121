#include "CR09.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cmath>
using namespace std;

CR09::CR09(){

	std::cout << "Сработал конструктор!" << std::endl;

}

CR09::~CR09() {
	   	  
	std::cout << "Сработал деструктор!";
	_getch();

}

//Первый метод - Розрахунок добутку суми парних чисел від 1 до N, помноженого на добуток кратних 3
unsigned int CR09::metod1(unsigned int value) {
	
	unsigned int result(0);

	for (unsigned int i = 0; i < value; ++i) {
		if (i%3 == 0) {

			result += i;

		}
	}

	return result;
}

//Второй метод - Розрахунок значення функції sin2(x)*x
double CR09::metod2(double value) {
		
	double result(0);

	result = pow(sin(value), 2)*value;


	return result;
}