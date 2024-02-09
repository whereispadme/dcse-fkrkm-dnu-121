#include "Matrix.h"
#include "functions.h"

//реализация конструктора без параметров
Matrix::Matrix()
{

	this->matrix = nullptr;
	this->rows = 0;
	this->cols = 0;

}

//реализация конструктора без параметров (выделение памяти из кучи)
Matrix::Matrix(int rows, int cols)
{

	this->rows = rows;
	this->cols = cols;

	matrix = new double *[rows];

	for (int i = 0; i < rows; ++i) {

		matrix[i] = new double[cols];

	}

}

//реализация деструктора (освобождение выделенной из кучи памяти)
Matrix::~Matrix()
{

	//удаление строк матрицы
	for (int i = 0; i < rows; ++i) {

		delete matrix[i];

	}

	//удаление массива указателей на строки матрицы
	delete[] matrix;

}

//реализация метода базового класса для вывода матрицы
void Matrix::input()
{

	for (int i = 0; i < this->rows; ++i) {
		for (int j = 0; j < this->cols; ++j) {

			cout << "[" << i + 1 << "][" << j + 1 << "]:";

			while (!(cin >> matrix[i][j])) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				clearCinBuff();
				cout << "Ошибка! Введите корректное значение для [" << i + 1 << "][" << j + 1 << "]:";
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}

	}

}

//реализация метода базового класса для расчёта сум непарных элементов в каждой строке матрицы
void Matrix::calculate()
{

	//массив для хранения сум непарных элементов строк матрицы	
	double *arr = new double[this->rows];

	double sum = 0;//переменная для суммы непарных элементов
	int a = 0;	   //переменная для индексации по массиву сум

	for (int i = 0; i < this->rows; ++i) {
		for (int j = 0; j < this->cols; ++j) {

			if (fmod(matrix[i][j], 2)) {
				sum += matrix[i][j];
			}

		}
		arr[a] = sum;
		++a;
		sum = 0;
	}

	cout << endl << "Сумма непарных элементов в каждой строке матрицы:" << endl;

	for (int i = 0; i < rows; ++i) {

		cout << "[" << i + 1 << "]:" << arr[i] << endl;

	}

	delete[] arr;

	cout << endl << endl;
	hideCursor(false);
	system("pause");

}

//реализация метода базового класса для вывода состояния матрицы
void Matrix::output()
{

	cout << endl << "Матрица:" << endl;

	for (int i = 0; i < this->rows; ++i) {
		for (int j = 0; j < this->cols; ++j) {

			cout << matrix[i][j] << "    ";

		}
		cout << endl;
	}

}