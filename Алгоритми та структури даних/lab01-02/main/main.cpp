#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#define UP 72
#define DOWN 80
#define ENTER 13

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(short x, short y) {
		
	SetConsoleCursorPosition(hStdOut, { x , y });

}

void hideCursor(bool show) {
	
	CONSOLE_CURSOR_INFO info;
	info.bVisible = show;
	info.dwSize = 20;
	SetConsoleCursorInfo(hStdOut, &info);

}

void clearCinBuff() {

	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());

}

//реализация структуры узла
struct Node {

	float data;
	Node* ptr;//next

	Node(float value) : data(value), ptr(nullptr){}

};

//реализация структуры списка
struct LinkedList {

	Node* first;
	Node* last;
	
	LinkedList() : first(nullptr), last(nullptr) {}

	bool is_empty() {

		return first == nullptr;

	}

	void push_begin(float value) {

		//создание нового узла, значение для поля дата передается через конструктор
		Node* node = new Node(value);

		//если список пуст, то узел становится первым и последним в списке
		if (is_empty()) {
			
			first = node;
			last = node;

		}	
		else {

			node->ptr = first;
			first = node;
		
		}
		
		return;

	}

	//метод для вывода значений, котороые хранятся в узлах списка
	void printList() {
		
		if (is_empty()) {
			return;
		}

		//создание указателя на первый узел для прохода по всему списку
		Node* node = first;

		//пока указатель на след. узел не nullptr
		while (node != nullptr) {

			cout << node->data << "   ";
			node = node->ptr;

		}

	}

	//метод для поиска минимального, максимального значений и расчёта их суммы
	void minMaxSum() {

		if (is_empty()) {
			return;
		}

		Node* p = first;

		std::cout << "Список:" << std::endl << std::endl;
		printList();

		float min = p->data;
		float max = p->data;
		
		while (p != nullptr) {
			if (p->data < min) {
				min = p->data;
			}
			p = p->ptr;
		}

		p = first;

		while (p != nullptr) {
			if (p->data > max) {
				max = p->data;
			}
			p = p->ptr;
		}

		cout << endl;
		cout << endl << "Минимальное значение  в списке:" << min;
		cout << endl << "Максимальное значение в списке:" << max;
		cout << endl << endl << "Сумма минимального и максимального значений:" << min + max;
	
		return;
		
	}

	//метод для удаления всех минимаьлных элементов из списка
	void deleteMin() {

		if (is_empty()) {
			return;
		}

		Node* p = first;

		float min = p->data;

		while (p != nullptr) {
			if (p->data < min) {
				min = p->data;
			}
			p = p->ptr;
		}

		Node* temp1;
		Node* temp2;
		temp1 = first;

		while (temp1 != nullptr && temp1->data == min)
		{
			first = first->ptr;
			delete temp1;
			temp1 = first;
		}
		temp2 = temp1;

		if (temp1 != nullptr)
			temp1 = temp1->ptr;

		while (temp1 != nullptr)
		{
			if (temp1->data == min)
			{
				temp2->ptr = temp1->ptr;
				delete temp1;
				temp1 = temp2->ptr;

			}
			else
			{
				temp1 = temp1->ptr;
				temp2 = temp2->ptr;
			}
		}

	}

	//метод для удаления всего списка
	void deleteList() {

		if (is_empty()) {
			return;
		}
		
		Node* temp = first;
		
		while (first != nullptr) {

			first = first->ptr;
			delete temp;
			temp = first;
		
		}
	
	}
	   
};

LinkedList list;

void printList() {
	
	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (list.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Список пуст!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		return;
	}

	cout << "Список:" << endl << endl;
	list.printList();

	cout << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void pushBegin() {
	
	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	clearCinBuff();

	hideCursor(true);

	if (!(list.is_empty())) {
		cout << "На данный момент в списке присутствуют значения!" << endl << endl;
	}

	cout << "Введите количество элементов, которые желаете добавить в начало списка:";
	int size;
	while (!(cin >> size) || (size <= 0)) {
		clearCinBuff();
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Ошибка! Введите корректное значение:";
	}
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	float data;

	cout << endl;

	for (int i = 0; i < size; ++i) {

		cout << "[" << i + 1 << "]:";
		while (!(cin >> data)) {
			clearCinBuff();
			SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "Ошибка! Введите корректное значение для [" << i + 1 << "]:";
		}
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

		list.push_begin(data);
	
	}

	cout << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void findMinMaxSum() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (list.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Список пуст!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		return;
	}

	list.minMaxSum();

	cout << endl << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void deleteMin() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (list.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Список пуст!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		return;
	}

	string deleteMenu[] =
	{
		"Подтвердить",
		"Отклонить",
	};

	short x = 0;
	short y = 0;

	int activeMenu = 0;
	int key = 0;

	cout << "Подтвердите удаление всех минимальных элементов списка:";

	while (true) {

		x = 0, y = 1;

		for (int i = 0; i < size(deleteMenu); ++i) {

			if (activeMenu == i) {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}
			else {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
			}

			gotoxy(x, ++y);
			cout << deleteMenu[i];

		}

		key = _getch();

		switch (key) {

		case UP: {
			if (activeMenu > 0) {
				--activeMenu;
			}
			break;
		}

		case DOWN: {
			if (activeMenu < size(deleteMenu) - 1) {
				++activeMenu;
			}
			break;
		}

		case ENTER: {
			switch (activeMenu) {

			case 0: {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				list.deleteMin();
				system("cls");
				cout << "Удаление элементов...";
				cout << endl << endl;
				hideCursor(false);
				system("pause");
				system("cls");
				return;
			}

			case 1: {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				system("cls");
				cout << "Возврат в главное меню...";
				cout << endl << endl;
				hideCursor(false);
				system("pause");
				system("cls");
				return;
			}

			}
			break;
		}
		}

	}

}

void deleteList() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (list.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Список пуст!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		return;
	}

	string deleteMenu[] = 
	{
		"Подтвердить",
		"Отклонить",
	};

	short x = 0;
	short y = 0;

	int activeMenu = 0;
	int key = 0;

	cout << "Подтвердите удаление элементов из всего списка:";

	while (true) {

		x = 0, y = 1;

		for (int i = 0; i < size(deleteMenu); ++i) {

			if (activeMenu == i) {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}
			else {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
			}

			gotoxy(x, ++y);
			cout << deleteMenu[i];

		}

		key = _getch();

		switch (key) {

		case UP: {
			if (activeMenu > 0) {
				--activeMenu;
			}
			break;
		}

		case DOWN: {
			if (activeMenu < size(deleteMenu) - 1) {
				++activeMenu;
			}
			break;
		}

		case ENTER: {
			switch (activeMenu) {

			case 0: {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				list.deleteList();
				system("cls");
				cout << "Удаление элементов...";
				cout << endl << endl;
				hideCursor(false);
				system("pause");
				system("cls");
				return;
			}

			case 1: {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				system("cls");
				cout << "Возврат в главное меню...";
				cout << endl << endl;
				hideCursor(false);
				system("pause");
				system("cls");
				return;
			}

			}
			break;
		}
		}

	}

}

void mainMenu() {

	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	hideCursor(false);

	string mainMenu[] = 
	{
		"Просмотр состояния списка",
		"Добавление элементов в начало списка",
		"Поиск максимального, минимального значений и расчёт их суммы",
		"Удаление всех минимальных значений",
		"Удаление всего списка",
		"Выход из программы"
	};

	short x = 0;
	short y = 0;

	int activeMenu = 0;
	int key = 0;

	while (true) {
		hideCursor(false);

		x = 10, y = 3;

		for (int i = 0; i < size(mainMenu); ++i) {
			
			if (activeMenu == i) {
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}else{
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
			}

			gotoxy(x, ++y);
			cout << mainMenu[i];

		}
	
		key = _getch();

		switch (key) {
		
		case UP: {
			if (activeMenu > 0) {
				--activeMenu;
			}
			break;
		}

		case DOWN: {
			if (activeMenu < size(mainMenu) - 1) {
				++activeMenu;
			}
			break;
		}
		
		case ENTER: {
			switch (activeMenu) {
			
			case 0: {
				printList();
				break;
			}

			case 1: {
				pushBegin();
				break;
			}
					
			case 2: {
				findMinMaxSum();
				break;
			}
			
			case 3: {
				deleteMin();
				break;
			}
			
			case 4: {
				deleteList();
				break;
			}
				
			case 5: {
				system("cls");
				SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout << "Завершение работы программы...\n\n";
				system("pause");
				exit(0);
				break;
			}

			}
			break;
		}
		}
	
	}

}

int main() {

	setlocale(0, "rus");
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");

	mainMenu();

	_getch();
	return 0;

}