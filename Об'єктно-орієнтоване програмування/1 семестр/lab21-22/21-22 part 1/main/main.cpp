#include "functions.h"
#include "Stack.h"
#include "Warriors.h"
using namespace std;

int choiceType();

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "Rus");

	int type;
	bool choice;
	int size = 0;

	do {

		type = choiceType();

		switch (type) {

		case 0: {
			sizeOfStack(size);
			Stack<int> iStack(size);
			for (int i = 0; i < size; ++i) {

				iStack.push(i);

			}
			iStack.push(1);
			iStack.print();
			break;
		}

		case 1: {
			sizeOfStack(size);
			Stack<float> fStack(size);
			float temp = 0.1;
			for (int i = 0; i < size; ++i) {

				fStack.push(temp);
				temp += 1.0;

			}
			fStack.push(1.1);
			fStack.print();
			break;
		}

		case 2: {
			sizeOfStack(size);
			Stack<Warriors> wStack(size);
			Warriors *warArray = new Warriors[size];

			for (int i = 0; i < size; ++i) {

				wStack.push(warArray[i]);

			}

			Warriors temp;
			wStack.push(temp);

			cout << endl << endl << "Внимание после работы данного метода стек будет очищен!" << endl << endl;
			cout << "Стек:";

			for (int i = 0; i < size; ++i) {

				cout << wStack.pop().health << "    ";

			}
			cout << endl << endl;
			system("pause");
			delete[] warArray;
			break;
		}

		}

		choice = endProg();

	} while (choice);

	return 0;

}

int choiceType() {

	system("cls");

	hideCursor(false);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "C каким типом данных желаете работать?";

	string choiceMenu[] =
	{
		"Int",
		"Float",
		"Warrior"
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
				return 0;
			}
			case 1: {
				return 1;
			}
			case 2: {
				return 2;
			}
			}
			break;
		}
		}

	}

}