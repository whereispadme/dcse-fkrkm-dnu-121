//���������� ������ Base
#include "Base.h"

#include <iostream>
using namespace std;

//����������� �� ���������(��� ����������)
Base::Base(){

	this->a = 0;
	this->b = 0;

}

//����������� �������������(� �����������)
Base::Base(int a, int b) {

	this->a = a;
	this->b = b;

}

//���������� �� ���������
Base::~Base() 
{
}

//���������� ������ sum_B ������ Base
int Base::sum_B() {

	return a + b;

}

//���������� ������ diff_B ������ Base
int Base::diff_B() {
	
	return a - b;

}