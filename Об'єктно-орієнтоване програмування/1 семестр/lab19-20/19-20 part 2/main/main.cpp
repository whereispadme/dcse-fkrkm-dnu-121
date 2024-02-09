//Кущевский Андрей, ПЗ-19-1

/*
	Вариант 9.
	Розрахувати в перевизначеному методі класу-нащадку m_Calc() масив сум
	непарних елементів рядків матриці.
*/

#include "functions.h"
#include "Matrix.h"
#include "Inherit.h"

bool choice;

int main()
{

	setlocale(0, "rus");
	SetConsoleTitle(L"КущевскийАндрей, ПЗ-19-1");

	do {

		int rows, cols = 0;
		sizeOfMatrix(rows, cols);
		cout << "--Matrix Base(calculate->dynamic array)--" << endl << endl;

		Matrix matrix(rows, cols);
		matrix.input();
		matrix.output();
		matrix.calculate();

		sizeOfMatrix(rows, cols);
		cout << "--Matrix Inherit(calculate->vector)--" << endl << endl;

		Inherit iMatrix(rows, cols);
		iMatrix.input();
		iMatrix.output();

		choice = endProg();
	} while (choice == true);

	cout << endl << endl;
	system("pause");
	return 0;

}