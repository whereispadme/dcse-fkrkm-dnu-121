//���������� ������ Inherit
#include "Inherit.h"
#include "Base.h"

#include <iostream>
using namespace std;

//����������� �� ���������(��� ����������)
Inherit::Inherit() {
	
	this->mult = 0;
	this->div = 0;
	this->temp = 0;

}

//����������� �������������, ��� ����. ����� a � b *������� ������ Inherit* ���������� ����������� ������ Base
Inherit::Inherit(int a_base, int b_base, int temp) : Base(a_base, b_base) {

	this->temp = temp;

	cout << "�������� � � �(�� ����������), ������� �������� � �����. ��� �������� ������� ������ Inherit:" << endl;
	cout << "a:" << a_base << endl;
	cout << "b:" << b_base << endl;

	cout << endl;

	cout << "�������� � � �(��� �������) ����� ������ ������������ ������ Base:" << endl;
	cout << "a:" << this->a << endl;
	cout << "b:" << this->b << endl;

}

//���������� �� ���������(��� ����������)
Inherit::~Inherit() 
{
}

//���������� ������ ��� ������������ a*b
void Inherit::setMult() {
	
	cout << endl;
	cout << "����� setMult(), ������� ��������� �����:" << endl;
	cout <<  "a:" << this->a << endl;
	cout <<  "b:" << this->b << endl;

	if ((a == 0) || (b == 0)) {
		
		this->mult = 0;

	}
	else {
		
		this->mult = a * b;
		
	}
	
	cout << "��������� ������ ������ ������������:" << mult << endl;

}

//���������� ������ ��� ������� �/b
void Inherit::setDiv(){

	cout << "����� setDiv(), ������� ��������� �����:" << endl;
	cout << "a:" << this->a << endl;
	cout << "b:" << this->b << endl;

	if (b != 0) {

		this->div = a / b;
		cout << "��������� ������ ������ ������� a/b:" << div << endl << endl;
	
	}
	else {
		
		cout << "������� �� ���� ����������!" << endl;
	
	}

}