#pragma once

template<typename T>
class Stack
{

public:
	Stack();
	Stack(int size);
	~Stack();

	T pop();
	void push(T value);
	void print();

private:
	T *data;
	int size;

	int top;

};

#include "StackTpp.h"