#pragma once

template<class T>
class MyClass
{

	//закрытая часть класса
private:
	T* data;
	int size;
	
	//открытая часть класса
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