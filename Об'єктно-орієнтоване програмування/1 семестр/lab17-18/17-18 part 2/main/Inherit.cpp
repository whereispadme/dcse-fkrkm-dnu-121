//���������� ������ Inherit
#include "Inherit.h"
#include "Base.h"

#include <iostream>
using namespace std;

//����������� �� ���������(��� ����������)
Inherit::Inherit() {

	this->mult = 0;
	this->div = 0;
	this->procent = 0;

}

//����������� �������������, ��� ����. ����� a � b *������� ������ Inherit* ���������� ����������� ������ Base
Inherit::Inherit(int a_base, int b_base) : Base(a_base, b_base) {

	system("cls");

	cout << "�������� � � �(�� ����������), ������� �������� � �����. ��� �������� ������� ������ Inherit:" << endl;
	cout << "a:" << a_base << endl;
	cout << "b:" << b_base << endl;

	cout << endl;

	cout << "�������� � � �(��� �������) ����� ������ ������������ ������ Base:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

}

//���������� �� ���������(��� ����������)
Inherit::~Inherit()
{
}

//���������� ������ ��� ������������ a*b
void Inherit::setResultMult() {

	cout << endl;
	cout << "����� setMult(), ������� ��������� �����:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

	if ((getA() == 0) || (getB() == 0)) {

		this->mult = 0;

	}
	else {

		this->mult = getA() * getB();

	}

	cout << "��������� ������ ������ ������������:" << mult << endl;

}

//���������� ������ ��� ������� �/b
void Inherit::setResultDiv() {

	cout << endl;
	cout << "����� setDiv(), ������� ��������� �����:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

	if (getB() != 0) {

		this->div = getA() / getB();
		cout << "��������� ������ ������ ������� a/b:" << div << endl;

	}
	else {

		cout << "������� �� ���� ����������!" << endl;

	}

}

//���������� ������ ��� ������� ��������� ����� a �� ����� ���� ����� �������� ������
void Inherit::setResultProcent() {

	cout << endl;
	cout << "����� setProcent(), ������� ��������� �����:" << endl;
	cout << "a:" << this->getA() << endl;
	cout << "b:" << this->getB() << endl;

	float sum = getA() + getB();
	
	this->procent = (getA() / sum) * 100
;
	cout << "��������� ������ ������ ��������� a �� ����� ����� ���. ������:" << procent << endl;

}

//���������� ������ ��������� ��������� ����� � ������� ������ �������� ������ ��� ��������� ����� a � b
void Inherit::printStatus() {

	cout << endl;
	cout << "������ ������:" << typeid(*this).name();
	viewInherit();
	cout << "Object procent:" << this->procent << endl;
	
	cout << endl;
}