#include "Matrix.h"
#include "functions.h"

//���������� ������������ ��� ����������
Matrix::Matrix()
{

	this->matrix = nullptr;
	this->rows = 0;
	this->cols = 0;

}

//���������� ������������ ��� ���������� (��������� ������ �� ����)
Matrix::Matrix(int rows, int cols)
{

	this->rows = rows;
	this->cols = cols;

	matrix = new double *[rows];

	for (int i = 0; i < rows; ++i) {

		matrix[i] = new double[cols];

	}

}

//���������� ����������� (������������ ���������� �� ���� ������)
Matrix::~Matrix()
{

	//�������� ����� �������
	for (int i = 0; i < rows; ++i) {

		delete matrix[i];

	}

	//�������� ������� ���������� �� ������ �������
	delete[] matrix;

}

//���������� ������ �������� ������ ��� ������ �������
void Matrix::input()
{

	for (int i = 0; i < this->rows; ++i) {
		for (int j = 0; j < this->cols; ++j) {

			cout << "[" << i + 1 << "][" << j + 1 << "]:";

			while (!(cin >> matrix[i][j])) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				clearCinBuff();
				cout << "������! ������� ���������� �������� ��� [" << i + 1 << "][" << j + 1 << "]:";
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}

	}

}

//���������� ������ �������� ������ ��� ������� ��� �������� ��������� � ������ ������ �������
void Matrix::calculate()
{

	//������ ��� �������� ��� �������� ��������� ����� �������	
	double *arr = new double[this->rows];

	double sum = 0;//���������� ��� ����� �������� ���������
	int a = 0;	   //���������� ��� ���������� �� ������� ���

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

	cout << endl << "����� �������� ��������� � ������ ������ �������:" << endl;

	for (int i = 0; i < rows; ++i) {

		cout << "[" << i + 1 << "]:" << arr[i] << endl;

	}

	delete[] arr;

	cout << endl << endl;
	hideCursor(false);
	system("pause");

}

//���������� ������ �������� ������ ��� ������ ��������� �������
void Matrix::output()
{

	cout << endl << "�������:" << endl;

	for (int i = 0; i < this->rows; ++i) {
		for (int j = 0; j < this->cols; ++j) {

			cout << matrix[i][j] << "    ";

		}
		cout << endl;
	}

}