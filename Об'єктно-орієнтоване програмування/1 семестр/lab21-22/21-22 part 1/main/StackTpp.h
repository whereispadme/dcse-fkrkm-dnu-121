#pragma once
#include "Stack.h"
#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
Stack<T>::Stack()
{

	this->data = nullptr;
	this->size = 0;
	this->top = -1;

}

template <typename T>
Stack<T>::Stack(int size)
{

	this->size = size;
	this->data = new T[size];
	this->top = -1;

}

template <typename T>
Stack<T>::~Stack()
{

	if (this->size != 0) {

		delete[] data;

	}

}

template <typename T>
T Stack<T>::pop()
{

	T value = this->data[top];
	this->top--;
	return value;

}

template <typename T>
void Stack<T>::push(T data)
{

	if (this->top + 1 == size) {

		cout << "Стек заполнен, вопользуйтесь методом pop(), чтобы вытолкнуть элемент из стека!" << endl;
		cout << "Возможно вы пытаетесь добавить элемент в стек с размером 0!";

	}
	else {

		this->top++;
		this->data[top] = data;

	}

}

template<typename T>
void Stack<T>::print()
{

	if (size == 0) {

		cout << endl << "Стек пуст! Воспользуйтесь методом push(), чтобы добавить элемент в стек!";

	}
	else {

		cout << endl << endl << "Внимание после работы данного метода стек будет очищен!" << endl << endl;

		cout << "Стек:";

		while (this->top != -1) {

			cout << pop() << "    ";

		}

	}

	pop();

	cout << endl << endl;
	system("pause");

}