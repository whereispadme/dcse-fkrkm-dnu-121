#include <iostream>
#include "Organization.h"
#include "highSchool.h"
#include "Enterprise.h"
#include "Union.h"

#include <Windows.h>
#include <string>
#include <conio.h>
using namespace std;

int main() {

	SetConsoleCP(866);
	SetConsoleOutputCP(866);
	setlocale(0, "Rus");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	SetConsoleTitle(L"КущевскийАндрей, ПЗ-19-1");

	highSchool* objectHighSchool = new highSchool("UNIVERSITY OF FANS C++", 1.0e6, 2);
	cout << "Объект класса highSchool:" << endl << endl;
	cout << "Имя:" << objectHighSchool->name << endl;
	cout << "Фонд:" << objectHighSchool->getFund() << endl;
	cout << "Проценты:" << objectHighSchool->getRate() << endl;
	
	cout << endl;

	Enterprise* objectEnterprise = new Enterprise("CLEVER OWL Ltd.", 1.0e8, 1.0e7);
	cout << "Объект класса Enterprise:" << endl << endl;
	cout << "Имя:" << objectEnterprise->name << endl;
	cout << "Фонд:" << objectEnterprise->getFund() << endl;
	cout << "Allocation:" << objectEnterprise->getAlloc() << endl << endl;
	
	cout << endl;

	Union* objectUnion = new Union("VICTORY", 1.25e8, "Miracles", objectHighSchool->getRate(), objectEnterprise->getAlloc());
	cout << "Объект класса Union:" << endl << endl;
	cout << "Имя:" << objectUnion->name << endl;
	cout << "Тип:" << objectUnion->type << endl;
	cout << "Фонд:" << objectUnion->getFund() << endl;
	cout << "Процент:" << objectUnion->getRate() << endl;
	cout << "Allocation:" << objectUnion->getAlloc() << endl;
	cout << "Платеж" << endl << endl;
	
	Organization* p;
	p = objectHighSchool;
	cout << "Объект класса Organization:" << endl << endl;
	cout << "Имя:" << p->name << endl;
	cout << "Расчёт:" << p->calculatePayment(5) << endl;

	cout << endl << endl;
	system("pause");
	return 0;

}