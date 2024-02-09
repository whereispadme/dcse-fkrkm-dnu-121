#include "functions.h"
#include "MyClass.h"

//�����������
template<typename T>
MyClass<T>::MyClass()
{
	
	this->data = nullptr;
	this->size = 0;

}

//����������� � �����������
template<typename T>
MyClass<T>::MyClass(int size)
{

	this->size = size;
	this->data = new T[size];

	for (int i = 0; i < size; ++i){

		data[i] = 0;

	}

}

//����������
template<typename T>
MyClass<T>::~MyClass()
{

	if (this->size != 0) {
		delete[] data;
	}

}

//����� ������������� ������� ����������������� ����������
template<typename T>
void MyClass<T>::setArray() {

	if (this->size == 0) {

		cout << "�� �������� ������ ��� ������, �������������� ������� setSize()!" << endl;
		return;
	}

	cout << "������� �������� � ������:" << endl << endl;

	for (int i = 0; i < this->size; ++i) {

		cout << "[" << i + 1 << "]:";

		while (!(cin >> data[i])) {

			clearCinBuff();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "������! ������� ���������� �������� ��� [" << i + 1 << "]:";

		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		
	}

	cout << endl << endl;

}

//����� ��� ��������� ������ ��� ������, � ������ ���� �� �� ��� ����������������� � �����������
template<typename T>
void MyClass<T>::setSize(int size) 
{
	
	if (this->size != 0) {
		hideCursor(true);
		cout << "� ������� ������������ ��������, �������������� ������� clear()!" << endl;
		return;

	}

	this->size = size;

}

//����� ��� ����������� ������������ ������
template<typename T>
void MyClass<T>::clear()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "������ ������ ����������, ������ �� ��� ���������������!";
		return;
	}


	this->size = 0;
	delete[] this->data;

}

//����� ��� ��������� ��������� �������
template<typename T>
void MyClass<T>::print()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "������ ������ ����������, ������ �� ��� ���������������!";
		return;
	}

	
	hideCursor(false);
	cout << "������:" << endl << endl;
	
	for(int i = 0; i < size; ++i){
	
		cout << this->data[i] << "    ";

	}

	cout << endl << endl;
	system("pause");
}

//���������� ������ ��� ������ ������������� �������� �������
template<typename T>
void MyClass<T>::maxAbsInt()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "������ ������ ����������, ������ �� ��� ���������������!";
		return;
	}

	system("cls");

	cout << "������ ������ ��� ������ ������������� �� ������ �������� �������:" << endl << endl;

	cout << "������:" << endl << endl;

	for (int i = 0; i < size; ++i) {

		cout << this->data[i] << "    ";

	}

	T maxAbs = abs(this->data[0]);

	for (int i = 0; i < this->size; ++i) {

		if (abs(this->data[i]) > maxAbs) {

			maxAbs = abs(this->data[i]);

		}

	}

	cout << endl << endl << endl << "������������ �� ������ ������� �������:" << maxAbs; 

	cout << endl << endl;
	system("pause");

}

//���������� ������ ��� ������ ������������� �������� �������
template<typename T>
void MyClass<T>::maxAbsFloat()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "������ ������ ����������, ������ �� ��� ���������������!";
		return;
	}

	system("cls");

	cout << "������ ������ ��� ������ ������������� �� ������ �������� �������:" << endl << endl;

	cout << "������:" << endl << endl;

	for (int i = 0; i < size; ++i) {

		cout << this->data[i] << "    ";

	}

	T maxAbs = fabs(this->data[0]);

	for (int i = 0; i < this->size; ++i) {

		if (fabs(this->data[i]) > maxAbs) {

			maxAbs = fabs(this->data[i]);

		}

	}

	cout << endl << endl << endl << "������������ �� ������ ������� �������:" << maxAbs;

	cout << endl << endl;
	system("pause");

}

//���������� ������ ��� ���������� ����� ����� ������ � ������ �������������� ����������
template<typename T>
void MyClass<T>::sumFirstSecondPositive()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "������ ������ ����������, ������ �� ��� ���������������!";
		return;
	}

	system("cls");

	cout << "������ ������ ��� ���������� ����� ����� ������ � ������ ��������������� ����������:" << endl << endl;

	cout << "������:" << endl << endl;

	for (int i = 0; i < size; ++i) {

		cout << this->data[i] << "    ";

	}

	T sum = 0;
	size_t step(0);

	for (int i = 0; i < this->size; ++i) {
		switch (step) {
		
		case 0: {
			if (this->data[i] > 0) {
				step = 1;
			}
			break;
		}

		case 1: {
			if (this->data[i] > 0) {
				step = 2;
			}
			else {
				sum = sum + this->data[i];
			}
			break;
		}

		case 2: {
			break;
		}
		}//switch
	}//for

	switch (step) {
	case 0: {
		cout << endl << endl << endl << "�� ���� ������������� ���������!";
		break;
	}

	case 1: {
		cout << endl << endl << endl << "��� ������ ������ ���� ������������� �������!";
		break;
	}

	case 2: {
		cout << endl << endl << endl << "����� ����� ������ � ������ ������������� ����������:" << sum;
		break;
	}

	}

	cout << endl << endl;
	system("pause");

}

//���������� ������ ��� ����������� ���� ������� ��������� � ����� �������
template<typename T>
void MyClass<T>::nullOnEnd()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "������ ������ ����������, ������ �� ��� ���������������!";
		return;
	}

	system("cls");

	cout << "������ ������ ��� ����������� ���� ������� ��������� � ����� �������:" << endl;

	vector<T> temp;
	
	size_t amount = 0;
	
	for (int i = 0; i < size; ++i) {

		if (this->data[i] != 0) {

			temp.push_back(this->data[i]);

		}

	}

	for (int i = 0; i < size; ++i) {

		if (this->data[i] == 0) {

			temp.push_back(this->data[i]);
			++amount;
		}

	}

	for (int i = 0; i < size; ++i) {

		this->data[i] = temp[i];

	}
		
	if (amount == 0) {

		cout << endl << "�� ���� ������� ������� ����������!";
		cout << endl << endl;
		system("pause");
		return;
	}
	else {
		cout << endl;
		print();
		return;
	}	

}