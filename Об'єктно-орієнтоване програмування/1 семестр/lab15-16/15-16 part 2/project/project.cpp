//Кущевский Андрей, ПЗ-19-1
/*
Спочатку розташовується подвоєний мінімальний елемент, після нього розташовуються всі інші, 
крім тих, що дорівнюють мінімальному
*/

#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int trueSize();//прототип функции для проверки пользовательского ввода

//реализация шаблонной функции doubleFirst;
template<typename T>//T - тип параметра шаблона

void doubleFirst(T* array,const int size) {
	
	for (int i = 0; i < size; ++i) {
		std::cout << "A[" << i + 1 << "]:";
		std::cin >> array[i];
	}
	//Работа с массивом
	/*
	1.Найти минимальный элемент и его индекс
	2.Проверка на то, стоит ли минимальный элемент первым в массиве, если true->array[0] = min*2;
	3.Если 2 пункт false->меняем местами минимальный элемент *2 с первым элементом массива
	4.Вывод массива
	*/
	
	double min = array[0];//присваиваем min значение первого элемента в массива по умолчанию
	int indexMin = 0;//переменная для хранения индекса минимального элемента
	double temp;//временная переменная для смены местами индексов массива
	//1 пункт
	for (int i = 0; i < size; ++i) {
		if (array[i] < min) {
			min = array[i];
			indexMin = i;
		}
	}

	//2 пункт
	if (indexMin == 0) {
		min = min*2;
		array[0] = min;
	}
	//3 пункт
	else {
		temp = array[0];//запоминаем значение в первом индексе массива
		array[0] = min*2;//присваиваем первому индексу min x2
		array[indexMin] = temp;//на старое место минимального значения ставим значение первого элемента
	}

	std::cout << "\nМассив (первый элемент->x2 минимальный):"<<std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << "\t";
	}
	_getch();

}

int main() {
	setlocale(0, "rus");
	system("cls");

	int size(0);
	
	std::cout << "Работа шаблонной функции с массивом типа int:\n";

	size = { trueSize() };
	
	int* arrayI = new int[size];

	doubleFirst(arrayI, size);

	////////////////////////////////////////////////////////////////////
	
	std::cout << "\n\nРабота шаблонной функции с массивом типа double:\n";
	
	size = { trueSize() };
	
	double* arrayD = new double[size];

	doubleFirst(arrayD, size);


	
	delete[] arrayI;
	delete[] arrayD;

	
	_getch();
	return 0;
}

int trueSize() {

	int size = 0;

	std::cout << "Введите размерность массива:";
			
	while (!(cin >> size && size > 0)) {
		std::cout << "\nОшибка!Пожалуйста, введите корректное значение:";
		cin.clear();
		cin.ignore(22, '\n');

	}

	return size;

}