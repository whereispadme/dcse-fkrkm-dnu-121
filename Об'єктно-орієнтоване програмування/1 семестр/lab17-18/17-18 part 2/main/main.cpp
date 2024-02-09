//Кущевский Андрей, ПЗ-19-1
#include "Base.h"
#include "Inherit.h"

#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

//прототип функции для пользовательского ввода, данные в функцию передаются по ссылке -> значения изменяются в самой функции
void getTrueValue(int &a, int &b);
void line();

//реализация дружественной функции для просмотра состояниия объекта класса Inherit
void view(Inherit& object) {

	cout << endl;
	cout << "Объект класса:" << typeid(object).name() << endl;
	cout << "Object a:" << object.baseGet_A() << endl;
	cout << "Object b:" << object.baseGet_B() << endl;
	cout << "Object procent:" << object.procent << endl;
	cout << endl;

}

//главная функция программы
int main() {

	system("color 0A");
	setlocale(0, "rus");

	int a = { 0 };
	int b = { 0 };

	getTrueValue(a, b);
	Inherit object(a, b);

	cout << endl << "Результат работы методов базового класса для объекта унаследованного класса:" << endl;
	cout << "Сумма:" << object.sumChild() << endl;
	cout << "Разница:" << object.diffChild() << endl;

	line();

	view(object);

	object.setResultDiv();
	object.setResultMult();
	object.setResultProcent();

	line();

	object.printStatus();

	cout << endl;
	system("pause");
	return 0;
}

//реализация фукнции для пользовательского ввода
void getTrueValue(int &a, int &b) {

	cout << "Введите a:";

	while (!(cin >> a)) {

		cin.clear();
		cin.ignore(100500, '\n');
		cout << "Ошибка!Введите корректное значение:";
		
	}

	cout << endl;

	cout << "Введите b:";
	while (!(cin >> b)) {

		cin.clear();
		cin.ignore(100500, '\n');
		cout << "Ошибка!Введите корректное значение:";

	}

	cout << endl;
	system("pause");

}

void line() {
	cout << "+---------------------------------------------------------------------+" << endl;
}