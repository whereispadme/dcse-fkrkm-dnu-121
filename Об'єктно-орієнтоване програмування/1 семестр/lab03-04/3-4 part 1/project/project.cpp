#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "CR09.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned int value;//переменная, параметр для функции double factorial(double value);

	CR09 object1;//статический объект класса
	std::cout << "Введите число для вычесления факториала статического объкта:";
	std::cin >> value;
	std::cout << "Факториал статического объекта равен:"<<object1.factorial(value);

	std::cout << std::endl << std::endl;

	CR09 *dynamicObj = new CR09;//динамический объект класса
	std::cout << "Введите число для вычесления факториала динамического объекта:";
	std::cin >> value;
	std::cout << "Факториал динамического объекта равен:" << dynamicObj->factorial(value);
	
	std::cout << std::endl << std::endl;

	return 0;
}