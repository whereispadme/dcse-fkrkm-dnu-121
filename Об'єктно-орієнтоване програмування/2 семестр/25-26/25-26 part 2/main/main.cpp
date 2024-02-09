/*
	
	В целом, я так понял, что всё сводится к времени жизни объектов, в случае с агрегацией, объекты могут существовать независимо друг от друга,
	а в случае композиции объект является частью целого и уничтожается вместе с этим целым, примером может быть какое-либо существо, оно имеет мозг, и когда существо умирает, то и часть(сам мозг) также умирает,
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
#include "Platform.h"

#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

void view(CFlight &object);
void getCorrectInfo(int &platformNumber,int &trackNumber);
void line();

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");

	const char* name = "Кущевский";
	int platformNumber = 0;
	int trackNumber = 0;

	getCorrectInfo(platformNumber, trackNumber);

	Platform* platform = new Platform(platformNumber, trackNumber);

	CFlight object_1(1111, name, platform);

	CFlight* object_2 = new CFlight(2222, name, platform);

	CFlight object_3(*object_2, platform);

	view(object_1);
	view(*object_2);
	view(object_3);

	delete object_2;
	delete platform;

	system("pause");
	return 0;

}

void view(CFlight &object)
{

	cout << "Просмотр информации по объекту класса CFlight(рейс):" << endl;
	cout << "Название станции: " << object.getStationName() << endl;
	cout << "Номер поезда: " << object.getTrainNumber() << endl;
	cout << "Номер платформы: " << object.getPlatformNumber() << endl;
	cout << "Номер колеи: " << object.getTrackNumber() << endl;
	line();

}

void getCorrectInfo(int &platformNumber, int &trackNumber)
{

	cout << "Введите номер платформы для проверки работы программы: ";
	while (!(cin >> platformNumber)) {

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		
		cout << "Ошибка! Введите корректное значение: ";
		cin.clear();
		cin.sync();
		cin.ignore(cin.rdbuf()->in_avail());

	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	cout << endl << "Введите номер колеи для проверки работы программы: ";
	while (!(cin >> trackNumber)) {

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		
		cout << "Ошибка! Введите корректное значение: ";
		cin.clear();
		cin.sync();
		cin.ignore(cin.rdbuf()->in_avail());

	}


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	cout << endl;
	system("pause");

	system("cls");

}


void line()
{

	SetConsoleOutputCP(866);

	cout << endl << "ДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДД" << endl;

	SetConsoleOutputCP(1251);

}