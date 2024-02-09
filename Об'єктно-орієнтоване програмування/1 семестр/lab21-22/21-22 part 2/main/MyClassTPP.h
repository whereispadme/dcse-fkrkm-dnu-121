#include "functions.h"
#include "MyClass.h"

//конструктор
template<typename T>
MyClass<T>::MyClass()
{
	
	this->data = nullptr;
	this->size = 0;

}

//конструктор с параметрами
template<typename T>
MyClass<T>::MyClass(int size)
{

	this->size = size;
	this->data = new T[size];

	for (int i = 0; i < size; ++i){

		data[i] = 0;

	}

}

//деструктор
template<typename T>
MyClass<T>::~MyClass()
{

	if (this->size != 0) {
		delete[] data;
	}

}

//метод инициализации массива пользовательскими значениями
template<typename T>
void MyClass<T>::setArray() {

	if (this->size == 0) {

		cout << "Не выделена память под массив, воспользуйтесь методом setSize()!" << endl;
		return;
	}

	cout << "Введите элементы в массив:" << endl << endl;

	for (int i = 0; i < this->size; ++i) {

		cout << "[" << i + 1 << "]:";

		while (!(cin >> data[i])) {

			clearCinBuff();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "Ошибка! Введите корректное значение для [" << i + 1 << "]:";

		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		
	}

	cout << endl << endl;

}

//метод для выделение памяти под массив, в случае если он не был инициализированом в конструктор
template<typename T>
void MyClass<T>::setSize(int size) 
{
	
	if (this->size != 0) {
		hideCursor(true);
		cout << "В массиве присутствуют элементы, воспользуйтесь методом clear()!" << endl;
		return;

	}

	this->size = size;

}

//метод для осовождения динамической памяти
template<typename T>
void MyClass<T>::clear()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "Работа метода невозможна, массив не был инициализирован!";
		return;
	}


	this->size = 0;
	delete[] this->data;

}

//метод для просмотра состояния матрицы
template<typename T>
void MyClass<T>::print()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "Работа метода невозможна, массив не был инициализирован!";
		return;
	}

	
	hideCursor(false);
	cout << "Массив:" << endl << endl;
	
	for(int i = 0; i < size; ++i){
	
		cout << this->data[i] << "    ";

	}

	cout << endl << endl;
	system("pause");
}

//реализация метода для поиска максимального элемента массива
template<typename T>
void MyClass<T>::maxAbsInt()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "Работа метода невозможна, массив не был инициализирован!";
		return;
	}

	system("cls");

	cout << "Работа метода для поиска максимального по модулю элемента массива:" << endl << endl;

	cout << "Массив:" << endl << endl;

	for (int i = 0; i < size; ++i) {

		cout << this->data[i] << "    ";

	}

	T maxAbs = abs(this->data[0]);

	for (int i = 0; i < this->size; ++i) {

		if (abs(this->data[i]) > maxAbs) {

			maxAbs = abs(this->data[i]);

		}

	}

	cout << endl << endl << endl << "Максимальный по модулю элемент массива:" << maxAbs; 

	cout << endl << endl;
	system("pause");

}

//реализация метода для поиска максимального элемента массива
template<typename T>
void MyClass<T>::maxAbsFloat()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "Работа метода невозможна, массив не был инициализирован!";
		return;
	}

	system("cls");

	cout << "Работа метода для поиска максимального по модулю элемента массива:" << endl << endl;

	cout << "Массив:" << endl << endl;

	for (int i = 0; i < size; ++i) {

		cout << this->data[i] << "    ";

	}

	T maxAbs = fabs(this->data[0]);

	for (int i = 0; i < this->size; ++i) {

		if (fabs(this->data[i]) > maxAbs) {

			maxAbs = fabs(this->data[i]);

		}

	}

	cout << endl << endl << endl << "Максимальный по модулю элемент массива:" << maxAbs;

	cout << endl << endl;
	system("pause");

}

//реализация метода для нахождения суммы между первым и вторым положительными элементами
template<typename T>
void MyClass<T>::sumFirstSecondPositive()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "Работа метода невозможна, массив не был инициализирован!";
		return;
	}

	system("cls");

	cout << "Работа метода для нахождения суммы между первым и вторым положительнымии элементами:" << endl << endl;

	cout << "Массив:" << endl << endl;

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
		cout << endl << endl << endl << "Не было положительных элементов!";
		break;
	}

	case 1: {
		cout << endl << endl << endl << "Был введен только один положительный элемент!";
		break;
	}

	case 2: {
		cout << endl << endl << endl << "Сумма между первым и вторым положительным элементами:" << sum;
		break;
	}

	}

	cout << endl << endl;
	system("pause");

}

//реализация метода для перемещения всех нулевых элементов в конец массива
template<typename T>
void MyClass<T>::nullOnEnd()
{

	if (this->size == 0) {
		hideCursor(true);
		cout << "Работа метода невозможна, массив не был инициализирован!";
		return;
	}

	system("cls");

	cout << "Работа метода для перемещения всех нулевых элементов в конец массива:" << endl;

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

		cout << endl << "Не было найдено нулевых элемментов!";
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