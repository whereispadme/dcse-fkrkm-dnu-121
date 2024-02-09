//���������� ������� ������ DF09
#include "DF09.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

//����������� �� ���������
DF09::DF09() {

	this->array = nullptr;
	this->size = 0;

}

//�������������� ��������� ������� �������� ���������� + new
DF09::DF09(int size) {

	this->size = size;
	array = new int[size];

	for (int i = 0; i < size; ++i) {

		array[i] = 0;

	}

}
//���������� ����������� ����������� (���������� ������ ����������� � ������������� �������)
//������ ������������ ���������� �����������
DF09::DF09(const DF09& object) {

	this->size = object.size;
	this->array = new int[size];
	for (int i = 0; i < size; ++i) {

		array[i] = object.array[i];

	}

}

//���������� �������� ������
DF09::~DF09() {

	if (this->size > 0) {

		delete[] this->array;

	}

}


//���������� ������� ��� ���� Size, ������������� � ������������� ������� view()
int DF09::getSize(void) const {
	return this->size;
}

//���������� ���������� ���������� ��������� ������������
//��������� ���������� �����������
DF09& DF09::operator = (const DF09& object)
{

	this->size = object.size;
	array = new int[size];

	for (int i = 0; i < size; ++i) {
		array[i] = object.array[i];
	}

	//���������� ������� ������
	return *this;
}


//���������� ���������� ��������� ������������ (������ + ������)
DF09 DF09::operator + (const DF09& object) {

	DF09 temp;

	temp.size = object.size;
	temp.array = new int[temp.size];

	for (int i = 0; i < temp.size; ++i) {
		
			temp.array[i] = array[i] + object.array[i];

	}

	return temp;

}

DF09 DF09::operator +(int value) {
	DF09 temp;

	temp.size = size;
	temp.array = new int[temp.size];
	for (int i = 0; i < size; ++i) {
		temp.array[i] = array[i] + value;
	}

	return temp;
}

//���������� ��������� ���������, (������ - ������)
DF09 DF09::operator -(const DF09& object) {

	
	DF09 temp;

	temp.size = size;
	temp.array = new int[temp.size];

	for (int i = 0; i < temp.size; ++i) {
		temp.array[i] = array[i] - object.array[i];
	}

	return temp;
}

//���������� ���������� ��������� ����������
int& DF09::operator[](const unsigned int index) const {

	return this->array[index];

}