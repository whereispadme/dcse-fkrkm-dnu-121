#include "DF09.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


//����������� ��� �������� ������� �� ���������, ���� ������ ����. �������� ����������
DF09::DF09() {
	this->array = nullptr;
	this->size = 0;
}

//��������� ������������ ������
DF09::DF09(int value) {
	
	this->size = value;
	array = new float[size];

	std::cout << "\n������ � �������� �� ������:"<<this;
	std::cout << std::endl;
	for (int i = 0; i < size; ++i) {
		
		std::cout << "A[" << i + 1 << "]:";
		std::cin>>this->array[i];
	
	}
}

//����������� �����������
DF09::DF09(const DF09& object) {

	this->size = object.size;
	this->array = new float[size];
	for (int i = 0; i < size; ++i) {

		array[i] = object.array[i];

	}

}


DF09::~DF09() {

	delete[] this->array;

}

int DF09::getSize() { return size; }

//���������� ���������� ���������� ��������� ������������
//��������� ���������� �����������
DF09& DF09::operator = (const DF09& object)
{

	this->size = object.size;
	array = new float[size];

	for (int i = 0; i < size; ++i) {
		array[i] = object.array[i];
	}

	//���������� ������� ������
	return *this;
}

DF09 DF09::operator*(DF09& object)
{
	int min = size; // ������ �������� �������
	int max = size; // ������ �������� �������
	if (min > object.size) min = object.size;
	if (max < object.size) max = object.size;
	DF09 temp;

	temp.size = max;
	temp.array = new float[temp.size];

	// ���� ������������� ������������
	for (int i = 0; i < max; i++)
	{
		if (i < min)
			temp.array[i] = array[i] * object.array[i];
		else
		{
			//���� ������ ������ ����, �� ������� ����� ����� �������� ������� ��������
			if (size < max)
				temp.array[i] = object.array[i];
			
			//���� ��������, �� ������
			else
				temp.array[i] = array[i];
		}
	}

	//���������� ��������� � ��������� ������������� ������������ ������
	return temp;
}