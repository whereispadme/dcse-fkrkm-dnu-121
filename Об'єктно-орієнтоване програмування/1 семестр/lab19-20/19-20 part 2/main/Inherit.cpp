#include "Inherit.h"
#include "functions.h"

//����������� ��� ����������
Inherit::Inherit()
{
}

//����������� � �����������, ������������� ������� � ������� ������������ �������� ������
Inherit::Inherit(int rows, int cols) : Matrix(rows, cols) {}

//���������� ���������������� ������ �������� ������ ��� ������� ��� �������� ��������� � ������ ������
void Inherit::calculate()
{

	//������ ��� �������� ����
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

	cout << endl << "����� �������� ��������� � ������ ������ �������:" << endl;

	for (int i = 0; i < fModResult.size(); ++i) {

		cout << "[" << i + 1 << "]:" << fModResult[i] << endl;

	}

	cout << endl << endl;
	hideCursor(false);
	system("pause");

}

//���������� ���������������� ��� ������ ��������� ��������� ������� � ���������� ������� ������ calculate
void Inherit::output()
{

	cout << endl << "�������:" << endl;

	for (int i = 0; i < getRows(); ++i) {
		for (int j = 0; j < getCols(); ++j) {

			cout << getMatrix(i, j) << "\t";

		}
		cout << endl;
	}

	calculate();

}

//����������
Inherit::~Inherit()
{
}