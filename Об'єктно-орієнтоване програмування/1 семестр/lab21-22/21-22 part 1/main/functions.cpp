#include "functions.h"

void hideCursor(bool show) {

	CONSOLE_CURSOR_INFO info;
	info.bVisible = show;
	info.dwSize = 10;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

}

void clearCinBuff()
{

	cin.sync();
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());

}

void sizeOfStack(int &size)
{

	system("cls");
	hideCursor(true);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	cout << "Введите размер стека:";

	while (!(cin >> size) || (size <= 0)) {
		clearCinBuff();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Ошибка! Введите корректное значение:";
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	cout << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	hideCursor(true);
}

bool endProg() {

	system("cls");

	hideCursor(false);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Желаете продолжить работу с программой?";

	string choiceMenu[] =
	{
		"Подтвердить",
		"Отклонить"
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
				hideCursor(true);
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