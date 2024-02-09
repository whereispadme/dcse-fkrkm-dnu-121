/*
Вариант 9. Кущевский Андрей
Первый метод - Розрахунок добутку суми парних чисел від 1 до N, помноженого на добуток кратних 3
Второй метод - Розрахунок значення функції sin2(x)*x
*/

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "CR09.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned int value1;//переменная->параметр для статичкеского объекта
	double value2;     //переменная->параметр для динамического объекта

	//Работа со статическим объектом
	CR09 staticObj;
	std::cout << std::endl << "Расчет сумы парных чисел от 1 до N, умноженого на произведение кратным 3";
	std::cout << std::endl << "Введите число(N):";
	std::cin >> value1;

	std::cout << "Результат:" << staticObj.metod1(value1);

	
	std::cout << std::endl << std::endl;

	//Работа с динамическим объектом
	CR09 *dynamicObj = new CR09;
	
	std::cout << std::endl << "Расчет значения функции sin2(x)*x";
	std::cout << std::endl << "Введите x:";
	std::cin >> value2;

	std::cout << "Результат:" << dynamicObj->metod2(value2);
	std::cout << std::endl << std::endl;

	return 0;
}