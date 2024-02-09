//Кущевский Андрей, ПЗ-19-1

/*
	Дано двовимірний масив дійсних чисел  a[1..n,1..m] (кількість рядків n та кількість стовпців m вводиться користувачем).
	Впорядкувати за спаданням k-й та p-й рядки масиву використовуючи алгоритм шейкерного сортування (k та  p  вводяться користувачем).
*/

/*
	Для відсортованих рядків матриці реалізувати алгоритм інтерполя-ційного пошуку введеного користувачем числа.
*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <iomanip>
#include <vector>

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

vector<int> indexForInterpolate;

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

			cout << setw(6) << matrix[i][j];

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

	float temp = 0;

	int toLeft = 1;
	int toRight = widthOFMatrix - 1;

	while (toLeft <= toRight) {

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

	cout << "Исходная матрица:" << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {

			cout << setw(6) << matrix[i][j];

		}
		cout << endl;
	}


	int first = 0;
	cout << endl << endl << "Введите первую строку, которую желаете отсортировать(k):";
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

	cout << endl << endl << "Отсортированные строки матрицы:" << endl;
	if (first != second) {
	
		cout << "[" << first + 1 << "]:";  for (int j = 0; j < cols; ++j) { cout << setw(5) << matrix[first][j]; };
		cout << endl;
		cout << "[" << second + 1 << "]:"; for (int j = 0; j < cols; ++j) { cout << setw(5) << matrix[second][j]; };
	
	}
	else if (first == second) {

		cout << "[" << first + 1 << "]:";  for (int j = 0; j < cols; ++j) { cout << setw(5) << matrix[first][j]; };

	}

	indexForInterpolate.push_back(first);
	indexForInterpolate.push_back(second);

	cout << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");

}

float interpolateSearchInRow(float **(&matrix), int (&cols), int (&selectRows), float (&keyOfSearch)) {

	//start intepolateSearch
	float *a = new float[cols];

	for (int i = 0; i < cols; ++i) {

		a[i] = matrix[selectRows][i];

	}

	//объявляем необходимые локальные переменные
	//изначально устанавливаем нижний индекс на начало массива,
	//а верний на конец массива
	int low = 0;
	int high = cols - 1;
	int mid;
	//цикл интерполирующего поиска
	while (a[low] < keyOfSearch && a[high] >= keyOfSearch)
	{
		//интерполирующий поиск производит оценку новой области поиска
		//по расстоянию между ключом поиска и текущим значение элемента
		mid = low + ((keyOfSearch - a[low]) * (high - low)) / (a[high] - a[low]);
		//если значение в ячейке с индексом mid меньше, то смещаем нижнюю границу
		if (a[mid] < keyOfSearch)
			low = mid + 1;
		//в случае, если значение больше, то смещаем верхнюю границу
		else if (a[mid] > keyOfSearch)
			high = mid - 1;
		//если равны, то возвращаем индекс
		else
			return mid;
	}
	//если цикл while не вернул индекс искомого значения,
	//то проверяем не находится ли оно в ячейке массива с индексом low,
	//иначе возвращаем -1 (значение не найдено)
	if (a[low] == keyOfSearch)
		return low;
	else
		return -1;

	delete[] a;

}

void interPolationSearch(float **(&matrix), int (&rows), int(&cols)) {

	system("cls");
	hideCursor(true);
	normalText();

	if (cols == 0) {
		hideCursor(false);
		cout << "В матрице отсутствуют значения!";
		cout << endl << endl;
		system("pause");
		system("cls");
		return;
	}

	if (indexForInterpolate.empty()) {
		hideCursor(false);
		cout << "Не было найдено индексов отсортированных строк, выполните пункт меню \"Сортировка матрицы\"!";
		cout << endl << endl;
		system("pause");
		system("cls");
		return;
	}
	
	cout << "Матрица:" << endl;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {

			cout << setw(6) << matrix[i][j];

		}
		cout << endl;
	}

	int first = 0;
	int second = 0;

	cout << endl << "Строки, в которых будет совершён интерполяционный поиск:";
	for (int i = 0; i < indexForInterpolate.size(); ++i) {
		cout << indexForInterpolate[i] + 1 << ' ';
		if (i == 0) {
			first = indexForInterpolate[i];
		}
		else if (i == 1) {
			second = indexForInterpolate[i];
		}
	}
	cout << "!";
	
	cout << endl << endl << "Введите искомое значение:";
	float findValues = 0;
	while (!(cin >> findValues)) {

		clearCinBuff();
		errorText();
		cout << "Ошибка! Введите корректное значение:";

	}
	normalText();

	int result = 0;

	if (first == second) {
		result = interpolateSearchInRow(matrix, cols, first, findValues);
		if (result != -1)
			cout << "Значение было найдено в элементе под индексом [" << first + 1 << "][" << result + 1 << "]!" << endl;
		else
			cout << "Значение не было найдено!" << endl;

	}
	else if(first != second) {

		result = interpolateSearchInRow(matrix, cols, first, findValues);
		if (result != -1)
			cout << "Значение было найдено в элементе под индексом [" << first + 1 << "][" << result + 1 << "]!" << endl;
		else
			cout << "Значение не было найдено!" << endl;

		result = interpolateSearchInRow(matrix, cols, second, findValues);
		if (result != -1)
			cout << "Значение было найдено в элементе под индексом [" << first + 1 << "][" << result + 1 << "]!" << endl;
		else
			cout << "Значение не было найдено!" << endl;
	}
	
	indexForInterpolate.clear();

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
		"Интерполяционный поиск",
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
				interPolationSearch(matrix, rows, cols);
				break;
			}

			case 4: {
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

	return 0;

}