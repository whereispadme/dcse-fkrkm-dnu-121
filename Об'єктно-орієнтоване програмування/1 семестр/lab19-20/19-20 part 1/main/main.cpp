//Кущевский Андрей, ПЗ-19-1
#include "Base1.h"
#include "Base2.h"
#include "Inherit.h"

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>
using namespace std;

const int magicNumber = 2;

int main() {

	setlocale(0, "Rus");
	system("color 0A");
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");

	Base1* arRan[magicNumber];
	Base2* arAvi[magicNumber];

	Inherit* pBase1;
	Inherit* pBase2;

	int choice;
	int amountArRan = 0;
	int amountArAvi = 0;

	cout << "*Демонстрация работы конструкторов при наследовании*" << endl << endl;

	cout << "--Первый цикл--" << endl << endl;

	vector<int> indexArRan;

	for (int i = 0; i < magicNumber; ++i) {

		cout << "[1] - Base1, [2] - Inherit:";
		cin >> choice;

		if (choice == 1) {

			pBase1 = new Base1;
			arRan[i] = pBase1;
			indexArRan.push_back(i);
			++amountArRan;

		}
		else {
			
			pBase1 = new Inherit;
			
		}

		cout << endl;

	}
	
	cout << endl << "--Второй цикл--" << endl << endl;

	vector<int> indexArAvi;

	for (int i = 0; i < magicNumber; ++i) {

		cout << "[1] - Base2, [2] - Inherit:";
		cin >> choice;

		if (choice == 1) {

			pBase2 = new Base2;
			arAvi[i] = pBase2;
			indexArAvi.push_back(i);
			++amountArAvi;

		}
		else {

			pBase2 = new Inherit;
			
		}

		cout << endl;

	}

	cout << endl << "*Методы*" << endl << endl;

	for (int i = 0; i < magicNumber; ++i) {

		cout << "arRan[" << i + 1 << "]:" << endl;
		arRan[i]->metod1_Base1();
		
		cout << endl;

	}

	for (int i = 0; i < magicNumber; ++i) {

		cout << "arAvi[" << i + 1 << "]:" << endl;

		arAvi[i]->metod1_Base2();
		arAvi[i]->metod2_Base2();

	}

	cout << endl << endl << "*Демонстрация работы деструкторов при наследовании*" << endl << endl;

	//корректное освобождение памяти для arRan  
	if (amountArRan == 2) {
		for (int i = 0; i < 2; ++i) {
			delete arRan[i];
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < size(indexArRan); ++i) {
			delete arRan[indexArRan[i]];
		}
	}
	
	cout << endl;

	//корректное освобождение памяти для arAvi
	if (amountArAvi == 2) {
		for (int i = 0; i < 2; ++i) {
			delete arAvi[i];
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < size(indexArAvi); ++i) {
			delete arAvi[indexArAvi[i]];
		}
	}

	cout << endl;
	system("pause");
	return 0;

}