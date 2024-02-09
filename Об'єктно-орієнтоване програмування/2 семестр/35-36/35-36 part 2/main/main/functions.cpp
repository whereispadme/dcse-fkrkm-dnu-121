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

void line()
{
	cout << endl << "_______________________________________________________________________________________________________________________" << endl;
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
	
	case 3:
	{

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

				}

				break;
			}

			}

		}
		break;

	}

	case 4: 
	{

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

float defaultFloatCorrectValue()
{

	float value = 0;

	while(!(cin >> value))
	{

		cin.clear();
		cin.sync();
		cin.ignore(cin.rdbuf()->in_avail());

		setColor(12);
		cout << "Ошибка! Введите корректное значение: ";

	}

	setColor(14);

	return value;

}

int floatCorrectValue(float *value, const char *prompt)
{
	size_t length = 0;
	char *end = NULL;
	char buf[CLI_BUFFER_SIZE] = "";

	/* Проверка параметров */
	assert(value);
	assert(prompt);

	/* Приглашение */
	printf("%s: ", prompt);
	fflush(stdout);

	/* Чтение в буфер */
	if (!fgets(buf, sizeof(buf), stdin)) {
		return 1;
	}

	/* Удаление символа перевода строки */
	length = strlen(buf);
	if (buf[length - 1] == '\n') {
		buf[--length] = '\0';

		/* Перевод из строки в число */
		errno = 0;
		*value = strtof(buf, &end);

		/* Обработка ошибок */
		if (length == 0) {
			fprintf(stderr, "Ошибка: введена пустая строка.\n");
			return 1;
		}
		if (errno != 0 || *end != '\0') {
			fprintf(stderr, "Ошибка: некорректный символ.\n");
			fprintf(stderr, "\t%s\n", buf);
			fprintf(stderr, "\t%*c\n", (int)(end - buf) + 1, '^');
			return 1;
		}
	}
	else {
		/* Строка прочитана не полностью
		   Пропустить остаток строки      */
		scanf("%*[^\n]");
		scanf("%*c");

		setColor(12);
		fprintf(stderr, "Ошибка: не вводите больше чем %d символа(ов).\n\n", CLI_BUFFER_SIZE - 2);
		setColor(14);

		return 1;
	}

	return 0;
}