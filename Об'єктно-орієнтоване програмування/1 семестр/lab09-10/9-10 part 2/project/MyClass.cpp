#include "MyClass.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//�����������, ��� �������� ������� ������������� ����� �������� �����������
MyClass::MyClass() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->result = 0;

	std::cout << "�������� ����������� ������� �� ������:" << this;
	_getch();
}

MyClass::~MyClass() {

	std::cout << "�������� ���������� ������� �� ������:" << this << std::endl;
	_getch();
}

//���������� �������� � �������� ��� ����� ������ DF09

void MyClass::setX(double x) { this->x = x; }

void MyClass::setY(double y) { this->y = y; }

void MyClass::setZ(double z) { this->z = z; }

void MyClass::setResult(double result) { this->result = result; }

double MyClass::getX() { return this->x; }

double MyClass::getY() { return this->y; }

double MyClass::getZ() { return this->z; }

double MyClass::getResult() { return this->result; }