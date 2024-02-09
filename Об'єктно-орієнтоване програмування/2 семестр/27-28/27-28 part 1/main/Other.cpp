#include "Other.h"

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x, int y)
{

	COORD coord;

	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(hStdOut, coord);

}

void hideCursor(bool status)
{

	CONSOLE_CURSOR_INFO info;
	info.bVisible = status;
	info.dwSize = 20;
	SetConsoleCursorInfo(hStdOut, &info);

}

void setColor(int color)
{

	SetConsoleTextAttribute(hStdOut, color);

}

void cursorStrMenu(string str, int color, bool status)
{

	string key = ">   ";

	setColor(color);

	if (status) {

		str = key + str;
		cout << str;

	}
	else {

		cout << str;

		for (int i = 0; i < 10; ++i)
			cout << " ";


	}

}

void clearStreamInput() 
{
	
	cin.clear();
	cin.sync();
	cin.ignore(cin.rdbuf()->in_avail());

}

void endProcedure()
{

	clearStreamInput();
	cout << endl;
	system("pause");
	system("cls");

}

int threePosMenuMenu(string str[])
{

	int activeMenu = 0;
	int key = 0;
	int x = 0;
	int y = 0;

	int strLen = 2;

	while (true) {

		hideCursor(false);

		x = 10;
		y = 3;
		gotoxy(x, y);

		for (int i = 0; i < strLen + 1; ++i) {

			if (i == activeMenu) {

				gotoxy(x, ++y);
				cursorStrMenu(str[i], 10, true);


			}
			else {

				gotoxy(x, ++y);
				cursorStrMenu(str[i], 14, false);

			}

		}

		key = _getch();

		switch (key) {

		case KEY_UP: {

			if (activeMenu > 0) {

				--activeMenu;

			}
			else {

				activeMenu = strLen;

			}

			break;

		}

		case KEY_DOWN: {

			if (activeMenu < strLen) {

				++activeMenu;

			}
			else {

				activeMenu = 0;

			}

			break;

		}

		case ENTER: {

			return activeMenu;
			break;

		}

		}

	}

}

int threePosMenu(string mainMenu[])
{

	int activeMenu = 0;
	int key = 0;
	int x = 0;
	int y = 0;

	int strLen = 2;

	while (true) {

		hideCursor(false);

		x = 10;
		y = 3;
		gotoxy(x, y);

		for (int i = 0; i < strLen + 1; ++i) {

			if (i == activeMenu) {

				gotoxy(x, ++y);
				cursorStrMenu(mainMenu[i], 10, true);


			}
			else {

				gotoxy(x, ++y);
				cursorStrMenu(mainMenu[i], 14, false);

			}

		}

		key = _getch();

		switch (key) {

		case KEY_UP: {

			if (activeMenu > 0) {

				--activeMenu;

			}
			else {

				activeMenu = strLen;

			}

			break;

		}

		case KEY_DOWN: {

			if (activeMenu < strLen) {

				++activeMenu;

			}
			else {

				activeMenu = 0;

			}

			break;

		}

		case ENTER: {

			return activeMenu;
			break;

		}

		}

	}

}

int fivePosMenu(string mainMenu[])
{

	int activeMenu = 0;
	int key = 0;
	int x = 0;
	int y = 0;

	int strLen = 4;

	while (true) {

		hideCursor(false);

		x = 10;
		y = 3;
		gotoxy(x, y);

		for (int i = 0; i < strLen + 1; ++i) {

			if (i == activeMenu) {

				gotoxy(x, ++y);
				cursorStrMenu(mainMenu[i], 10, true);


			}
			else {

				gotoxy(x, ++y);
				cursorStrMenu(mainMenu[i], 14, false);

			}

		}

		key = _getch();

		switch (key) {

		case KEY_UP: {

			if (activeMenu > 0) {

				--activeMenu;

			}
			else {

				activeMenu = strLen;

			}

			break;

		}

		case KEY_DOWN: {

			if (activeMenu < strLen) {

				++activeMenu;

			}
			else {

				activeMenu = 0;

			}

			break;

		}

		case ENTER: {

			return activeMenu;
			break;

		}

		}

	}

}

void getCorrectInteger(int &value)
{

	while (!(cin >> value) || (value <= -1)) {

		clearStreamInput();
		setColor(12);
		cout << "Ошибка! Введите корректное значение: ";

	}

	setColor(14);

}