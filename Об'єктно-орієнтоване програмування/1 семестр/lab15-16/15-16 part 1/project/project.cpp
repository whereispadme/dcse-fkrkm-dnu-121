#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

//шаблонная функция программы для вывода массивов
template <class T> 
void view(const T* array, const size_t size) {
	for (int i = 0; i < size; ++i) {
		std::cout << array[i]<<"\t";
	}
}


// в начало массива записываются отрицательные элементы
// после отрицательных элементов записываются положительные элементы
template < class T >
void reorg(T* p, const int size)//"Функция сортировки элементов массива"
{
	T tmp;
	for (int i = 0, j = 0; i < size; i++)
	{
		if (p[i] > 0) continue;
		
		tmp = p[i];
		for (int k = i; k > j; k--)	p[k] = p[k - 1];
		p[j] = tmp;
		j++;
	}
}

//главная функция программы
int main() {
	setlocale(0, "rus");

	int intArr[] = { 1, -3, 0, -9, 2, 7, 0, -19 };//массив int->4 байт * 8(элементов) = 32 байт
	
	double doubleArr[] = { 0.0875, 1.25, -3, 0.0, -7.986 };//массив double->8 байт * 5(элементов) = 40 байт

	long longArr[] = { 1L, -2L, 3L, -100L };//массив long->4 байт * 4(элементов) = 16 байт

	float floatArr[] = { -2.12, 1.5, -3.25, -17.2 };//массив float->4 байт * 8(элементов) = 32 байт

	char s[] = "Vivat!";
	std::cout << "Работа с шаблонной функцией view():\n\n";
	
	std::cout << "Вывод массива типа int:";
	view(intArr, sizeof(intArr) / sizeof(int));//размерность массива = размер(intArr) / размер(типа инт в байтах)

	std::cout << std::endl << "Вывод массива типа double:";
	view(doubleArr, sizeof(doubleArr) / sizeof(double));//размерность массива = размер(doubleArr) / размер(типа double в байтах)
	
	std::cout << std::endl << "Вывод массива типа long:";
	view(longArr, sizeof(longArr) / sizeof(long));// размерность массива = размер(longArr) / размер(типа лонг в байтах)
	
	std::cout << std::endl << "Вывод символьного массива:";
	view(s, strlen(s));//тип char занимает 1 байт, потому просто передаем длину строки(strlen) как size

	std::cout << std::endl << "\n\nРабота с шаблонной функцией reorg():\n\n";

	long lArr[] = { 1L, -2L, 3L, -100L, -200L };
	float fArr[] = { -2.12, 1.5, -3.25, -17.2 };
	
	std::cout << "Инициализация массива типа long:";	
	int n = sizeof(lArr) / sizeof(long);
	view(lArr, n);
	
	std::cout << "\nРезультат выполнения шаблонной функции сортировки элементов reorg():"; 
	reorg(lArr, n);
	view(lArr, n);
	
	std::cout << "\n\nИнициализация массива типа float:";
	n = sizeof(fArr) / sizeof(float);
	view(fArr, n);

	cout << "\nРезультат выполнения шаблонной функции сортировки элементов reorg():"; 
	reorg(fArr, n);
	view(fArr, n);
	
	std::cout << std::endl << std::endl;
	system("pause");
	return 0;
}