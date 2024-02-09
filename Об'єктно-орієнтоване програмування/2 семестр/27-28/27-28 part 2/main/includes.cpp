#include "includes.h"

void setColor(int color)
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

}

void correctDouble(double &value)
{

	while (!(cin >> value)) {

		cin.clear();
		cin.sync();
		cin.ignore(cin.rdbuf()->in_avail());

		setColor(12);
		cout << "Ошибка! Пожалуйста, введите корректное значение: ";

	}

	setColor(14);

}