//Кущевский Андрей, ПЗ-19-1

/*
	Дано двовимірний масив дійсних чисел  a[1..n,1..m] (кількість рядків n та кількість стовпців m вводиться користувачем).
	Впорядкувати за спаданням k-й та p-й рядки масиву використовуючи алгоритм шейкерного сортування (k та  p  вводяться користувачем).
*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <iomanip>
#define UP 72
#define DOWN 80
#define ENTER 13

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void hideCursor(bool show) {

	CONSOLE_CURSOR_INFO info;
	info.bVisible = show;
	info.dwSize = 10;
	SetConsoleCursorInfo(hStdOut, &info);

}

void gotoxy(short x, short y) {

	SetConsoleCursorPosition(hStdOut, { x, y });

}

void normalText() {

	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

}

void errorText() {

	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);

}

void clearCinBuff() {

	cin.clear();
	cin.sync();
	cin.ignore(cin.rdbuf()->in_avail());

}

void sizeOfMatrix(int(&rows), int(&cols)) {

	normalText();
	hideCursor(true);

	cout << "Введите количество строк:";
	while (!(cin >> rows) || (rows <= 0)) {

		clearCinBuff();
		errorText();
		cout << "Ошибка! Введите корректное значение:";

	}
	normalText();

	cout << endl << "Введите количество столбцов:";
	while (!(cin >> cols) || (cols <= 0)) {

		clearCinBuff();
		errorText();
		cout << "Ошибка! Введите корректное значение:";

	}
	normalText();

}

void outputMatrix(float **matrix, int rows, int cols) {

	system("cls");
	normalText();
	hideCursor(false);

	if (rows == 0) {
		cout << "В матрице отсутствуют значения!";
		cout << endl << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "Матрица:" << endl;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {

			cout << matrix[i][j] << "\t";

		}
		cout << endl;
	}

	cout << endl << endl;
	system("pause");
	system("cls");

}

void inputMatrix(float **(&matrix), int(&rows), int(&cols)) {

	system("cls");
	hideCursor(true);
	normalText();

	if (rows != 0) {

		for (int i = 0; i < rows; ++i) {

			delete matrix[i];

		}

		delete[] matrix;

	}

	sizeOfMatrix(rows, cols);

	matrix = new float *[rows];
	for (int i = 0; i < rows; ++i) {

		matrix[i] = new float[cols];

	}

	cout << endl << endl;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {

			cout << "[" << i + 1 << "][" << j + 1 << "]:";
			while (!(cin >> matrix[i][j])) {

				clearCinBuff();
				errorText();
				cout << "Ошибка! Введите корректное значение:";

			}
			normalText();

		}
	}


	cout << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");

}

void cocktailSortSelectRow(float **(&matrix), int &widthOFMatrix, int &selectRow) {

	int temp = 0;

	int toLeft = 1;
	int toRight = widthOFMatrix - 1;

	while (toLeft < toRight) {

		for (int i = toRight; i >= toLeft; --i) {

			if (matrix[selectRow][i - 1] > matrix[selectRow][i]) {

				temp = matrix[selectRow][i];
				matrix[selectRow][i] = matrix[selectRow][i - 1];
				matrix[selectRow][i - 1] = temp;

			}

		}
		++toLeft;

		for (int i = toLeft; i <= toRight; ++i) {

			if (matrix[selectRow][i - 1] > matrix[selectRow][i]) {

				temp = matrix[selectRow][i];
				matrix[selectRow][i] = matrix[selectRow][i - 1];
				matrix[selectRow][i - 1] = temp;

			}

		}
		--toRight;

	}

}

void cocktailSortForMatrix(float **(&matrix), int(&rows), int(&cols)) {

	system("cls");
	hideCursor(true);
	normalText();

	if (rows == 0) {
		hideCursor(false);
		cout << "В матрице отсутствуют значения!";
		cout << endl << endl;
		system("pause");
		system("cls");
		return;
	}

	int first = 0;
	cout << "Введите первую строку, которую желаете отсортировать(k):";
	while (!(cin >> first) || (first <= 0) || (first > rows)) {

		clearCinBuff();
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Ошибка! Введите корректное значение:";

	}
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	int second = 0;
	cout << endl << "Введите второю строку, которую желаете отсортировать(p):";
	while (!(cin >> second) || (second <= 0) || (second > rows)) {

		clearCinBuff();
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Ошибка! Введите корректное значение:";

	}
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	
	--first;
	--second;

	cocktailSortSelectRow(matrix, cols, first);
	cocktailSortSelectRow(matrix, cols, second);
		
	cout << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");

}

	void mainMenu(float **(&matrix), int(&rows), int(&cols)) {

		hideCursor(false);

		string mainMenu[] =
		{
			"Просмотр состояния матрицы",
			"Инициализация матрицы",
			"Сортировка матрицы",
			"Выход из программы"
		};

		int key = 0;
		int activeMenu = 0;
		short x;
		short y;

		while (true) {

			x = 10, y = 5;

			for (int i = 0; i < size(mainMenu); ++i) {
				if (activeMenu == i) {
					normalText();
				}
				else {
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
				}

				gotoxy(x, ++y);
				cout << mainMenu[i];

			}

			key = _getch();
			switch (key) {

			case UP: {
				if (activeMenu > 0) {
					--activeMenu;
				}
				break;
			}

			case DOWN: {
				if (activeMenu < size(mainMenu) - 1) {
					++activeMenu;
				}
				break;
			}

			case ENTER: {
				switch (activeMenu) {

				case 0: {
					outputMatrix(matrix, rows, cols);
					break;
				}

				case 1: {
					inputMatrix(matrix, rows, cols);
					break;
				}

				case 2: {
					cocktailSortForMatrix(matrix, rows, cols);
					break;
				}

				case 3: {
					system("cls");
					cout << "Завершение работы программы..." << endl << endl;
					system("pause");
					return;
				}

						break;
				}
				break;
			}

			}

		}

	}

	int main() {

		setlocale(0, "rus");
		SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");

		int rows = 0;
		int cols = 0;

		float **matrix = new float *[rows];
		for (int i = 0; i < rows; ++i) {
			matrix[i] = new float[cols];
		}
		normalText();

		mainMenu(matrix, rows, cols);

		for (int i = 0; i < rows; ++i) {
			delete[] matrix[i];
		}

		delete[] matrix;

		_getch();
		return 0;

	}


