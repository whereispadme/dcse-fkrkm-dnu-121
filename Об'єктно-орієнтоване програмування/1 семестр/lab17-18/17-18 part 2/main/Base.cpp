//���������� ������ Base
#include "Base.h"

#include <iostream>
using namespace std;

//����������� �� ���������(��� ����������)
Base::Base() {

	this->a = 0;
	this->b = 0;

}

//����������� �������������(� �����������)
Base::Base(int a, int b) {

	this->a = a;
	this->b = b;

}

//����������
Base::~Base()
{
}

//���������� ������� � ������� ������ ��� ��������� ��������� ����� ������� ������ Inherit
void Base::viewInherit() {

	cout << endl;
	
	cout << "Object a:" << a << endl;
	cout << "Object b:" << b << endl;

}