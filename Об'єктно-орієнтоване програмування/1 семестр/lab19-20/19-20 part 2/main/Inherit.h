#pragma once 
#include "Matrix.h"

class Inherit : public Matrix {

	//�������� ����� ������-����������
public:
	//������������, ����������
	Inherit();
	Inherit(int rows, int cols);
	~Inherit();

	//��������������� ������ �������� ������
	void calculate();
	void output();

};