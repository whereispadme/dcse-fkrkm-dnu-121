//Кущевский Андрей, ПЗ-19-1
/*
Варіант 9.
Обчислити:
1. Максимальний по модулю елемент масиву. +
2. Суму елементів масиву, розташованих між першим і другим позитивними елементами. +
3. Перетворити масив таким чином, щоб елементи, рівні нулю, розташовувалися після всіх інших. +
*/

#include "functions.h"
#include "MyClass.h"

bool choiceType();

int main() {

	SetConsoleCP(866);
	SetConsoleOutputCP(866);
	setlocale(0, "rus");

	int size = 0;
	bool choiceOnEnd;
	bool type;

	do {

		type = choiceType();
		
		switch (type) {
		
		case 1: {
			
			sizeOfMatrix(size);
			MyClass<int> arrObject(size);
			arrObject.setArray();
			arrObject.print();	
			arrObject.maxAbsInt();
			arrObject.sumFirstSecondPositive();
			arrObject.nullOnEnd();			
			break;
		}
		case 0: {
			
			sizeOfMatrix(size);
			MyClass<float> arrObject(size);
			arrObject.setArray();
			arrObject.print();
			arrObject.maxAbsFloat();
			arrObject.sumFirstSecondPositive();
			arrObject.nullOnEnd();
			break;
		}
		
		}
				
		choiceOnEnd = endProg();

	} while (choiceOnEnd);

	return 0;

}

bool choiceType() {

	system("cls");

	hideCursor(false);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "C каким типом данных желаете работать?";

	string choiceMenu[] =
	{
		"Int",
		"Float"
	};

	int active = 0;
	short x, y;
	int key = 0;

	while (true) {

		x = 0, y = 1;

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });

		for (int i = 0; i < size(choiceMenu); ++i) {
			if (active == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
			}

			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, ++y });
			cout << choiceMenu[i];

		}

		key = _getch();

		switch (key) {
		case 72: {
			if (active > 0) {
				--active;
			}
			break;
		}
		case 80: {
			if (active < size(choiceMenu) - 1) {
				++active;
			}
			break;
		}
		case 13: {
			switch (active) {
			case 0: {
				return true;
			}
			case 1: {
				return false;
			}
			}
			break;
		}
		}

	}

}