#pragma once 
#include "Matrix.h"

class Inherit : public Matrix {

	//открытая часть класса-наследника
public:
	//конструкторы, деструктор
	Inherit();
	Inherit(int rows, int cols);
	~Inherit();

	//переопределённые методы базового класса
	void calculate();
	void output();

};