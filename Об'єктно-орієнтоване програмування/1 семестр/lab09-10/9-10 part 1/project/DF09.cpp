//���������� �������
#include "DF09.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//����� ������������� ��������� ������� �������������
void DF09::setArray() {
	system("cls");
	for (int i = 0; i < this->size; ++i) {
		std::cout << "A[" << i + 1 << "]:";
		std::cin >> array[i];
	}
	std::cout << std::endl;

}

//����� ������ ��������� ������� �� �����
void DF09::printArray() {
	std::cout << "�������� ������:" << std::endl;
	for (int i = 0; i < this->size; ++i) {
		std::cout << array[i] << "\t";
	}
	std::cout << std::endl<<std::endl;
	_getch();
}

//����������� � ���������� size ��� ��������� ������ �� ����, ����� ������������� ��������� ������� �������� ����������
DF09::DF09(int size)
{
	this->size = size;
	this->array = new int[this->size];
	
	for (int i = 0; i < size; ++i) {
		array[i] = 0;
	}
	
}

//���������� ����������� ������ � ���������� ������������� ������������ ������ ��� ����������� ������� ������
DF09::~DF09()
{
	
	delete[] this->array;
	std::cout << "�������� ����������!";
	_getch();
}