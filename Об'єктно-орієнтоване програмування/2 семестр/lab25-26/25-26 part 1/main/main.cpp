/*
	
	В целом, я так понял, что всё сводится к времени жизни объектов, в случае с агрегацией, объекты могут существовать независимо друг от друга,
	а в случае композиции объект является частью целого и уничтожается вместе с этим целым, пример может быть какое-либо существо, оно имеет мозг, и когда существо умирает, то и часть(сам мозг) также умирает,
	ну и при этом мозг не знает о том, что он является частью чего-то большего.
	На самом деле, это интересно мне просто попадались источники, видео, статьи в которых использование композиции сводилось к вложенным классам, вобщем глубокая тема, можно сказать.

*/

/*
	
	Оголосити окремо клас «Платформа, колія», що описує місце відправлення у вигляді номеру платформи та колії. 
	Додати до класу CTrain закрите поле «Платформа, колія відправлення». 
	Передбачити ініціалізацію, методи встановлення та отримання значення, необхідні перевірки.

*/

#include "CFlight.h"
#include "CStation.h"

#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

void view(CFlight &object);
void line();

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");

	const char* name = "Кущевский";

	CFlight object_1(1111, name);

	CFlight* object_2 = new CFlight(2222, name);

	CFlight object_3(*object_2);

	view(object_1);
	view(*object_2);
	view(object_3);

	delete object_2;

	system("pause");
	return 0;

}

void view(CFlight &object)
{

	cout << "Просмотр информации по объекту класса CFlight(рейс): " << endl;
	cout << "Название станции: " << object.getStationName() << endl;
	cout << "Номер поезда: " << object.getTrainNumber() << endl;
	line();

}

void line()
{

	SetConsoleOutputCP(866);

	cout << endl << "ДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДД" << endl;

	SetConsoleOutputCP(1251);

}