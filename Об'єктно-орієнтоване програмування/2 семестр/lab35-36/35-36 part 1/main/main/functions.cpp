#include "functions.h"

void gotoxy(int x, int y)
{

	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void hideCursor(bool status)
{

	_CONSOLE_CURSOR_INFO info;
	info.bVisible = status;
	info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

}

void setColor(int color)
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

}

void cursorMenu(string str, bool flag)
{

	string key = ">   ";

	switch (flag) 
	{

	case 1: 
	{
		
		setColor(10);
		
		str = key + str;
		cout << str;
		
		break;
	}

	case 0:
	{
		
		setColor(14);
		
		cout << str;
		
		for (int i = 0; i < 20; ++i)
			cout << " ";

		break;
	}

	}

}

int mainMenuCursor(string mainMenu[], int size)
{

	switch (size)
	{

	case 4: {

		int activeMenu = 0;
		int key = 0;

		int x = 0;
		int y = 0;
		while (true)
		{

			hideCursor(false);

			x = 10;
			y = 3;

			for (int i = 0; i < size; ++i)
			{

				if (i == activeMenu)
				{
					
					gotoxy(x, ++y);
					cursorMenu(mainMenu[i], true);
				}
				else
				{
					
					gotoxy(x, ++y);
					cursorMenu(mainMenu[i], false);
				}

			}
			
			key = _getch();

			switch (key)
			{

			case Up: 
			{
				
				if (activeMenu > 0)
					--activeMenu;
				else
					activeMenu = size - 1;

				break;
			}
			
			case Down: 
			{
				
				if (activeMenu < size - 1)
					++activeMenu;
				else
					activeMenu = 0;

				break;
			}
			
			case Enter:
			{

				switch (activeMenu)
				{

				case 0:
				{
					return 0;
				}


				case 1:
				{
					return 1;
				}


				case 2:
				{
					return 2;
				}


				case 3:
				{
					return 3;
				}
					
				}

				break;
			}

			}

		}
		break;
	}

	}

}