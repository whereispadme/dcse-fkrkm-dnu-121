#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "CR09.h"
using namespace std;

CR09::CR09() {

	std::cout << "Сработал конструктор!" << std::endl;

}

CR09::~CR09() {

	std::cout << "Сработал деструктор!";
	_getch();
}

unsigned int CR09::factorial(unsigned int value) {

	unsigned int res{ value };
	while (value > 1) {
		res *= --value;
	}
	return res;
}