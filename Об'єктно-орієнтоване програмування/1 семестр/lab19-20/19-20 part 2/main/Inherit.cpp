#include "Inherit.h"
#include "functions.h"

//конструктор без параметров
Inherit::Inherit()
{
}

//конструктор с параметрами, инициализация матрицы с помощью конструктора базового класса
Inherit::Inherit(int rows, int cols) : Matrix(rows, cols) {}

//реализация переопределённого метода базового класса для расчёта сум непарных элементов в каждой строке
void Inherit::calculate()
{

	//вектор для хранения сумм
	vector<double> fModResult;

	double sum = 0;

	for (int i = 0; i < getRows(); ++i) {
		for (int j = 0; j < getCols(); ++j) {

			if (fmod(getMatrix(i, j), 2)) {
				sum += getMatrix(i, j);
			}

		}
		fModResult.push_back(sum);
		sum = 0;
	}

	cout << endl << "Сумма непарных элементов в каждой строке матрицы:" << endl;

	for (int i = 0; i < fModResult.size(); ++i) {

		cout << "[" << i + 1 << "]:" << fModResult[i] << endl;

	}

	cout << endl << endl;
	hideCursor(false);
	system("pause");

}

//реализация переопределённого для метода просмотра состояния матрицы с дальнейшим вызовом метода calculate
void Inherit::output()
{

	cout << endl << "Матрица:" << endl;

	for (int i = 0; i < getRows(); ++i) {
		for (int j = 0; j < getCols(); ++j) {

			cout << getMatrix(i, j) << "\t";

		}
		cout << endl;
	}

	calculate();

}

//деструктор
Inherit::~Inherit()
{
}