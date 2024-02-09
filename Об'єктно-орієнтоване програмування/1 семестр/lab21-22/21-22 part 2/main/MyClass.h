#pragma once

template<class T>
class MyClass
{

	//�������� ����� ������
private:
	T* data;
	int size;
	
	//�������� ����� ������
public:
	MyClass();
	MyClass(int size);
	~MyClass();
	
	void setArray();
	void setSize(int size);
	void clear();

	void print();

	void maxAbsInt();
	void maxAbsFloat();
	void sumFirstSecondPositive();
	void nullOnEnd();
	
};

#include "MyClassTPP.h"