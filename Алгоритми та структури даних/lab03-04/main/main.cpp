//Кущевский Андрей, ПЗ-19-1
/*
	
	Вариант 9
	[1] Знайти суму елементів черги з діапазону [x;y] (x та y вводяться користувачем). 
	[2] Ті елементи черги, які не належать діапазону [x;y], помістити в стек. 
	[3] Підрахувати кількість додатних елементів в стеку.

*/

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>
#include <string>
#define UP 72
#define DOWN 80
#define ENTER 13

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(short x, short y) {
	
	SetConsoleCursorPosition(hStdOut, { x, y });

}

void hideCursor(bool show) {

	CONSOLE_CURSOR_INFO info;
	info.bVisible = show;
	info.dwSize = 20;
	SetConsoleCursorInfo(hStdOut, &info);

}

void clearCinBuff() {
	
	cin.sync();
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());

}

//реализация стека
struct Stack {

	//узел стека
	struct Node{

		float data;
		Node* next;//указатель на следующий узел стека
		
		Node(float value) : data(value) {}
		Node(float value, Node* node) : data(value), next(node) {}
	};

	Node* _top;//верхний узел стека(корневой)
	int _size; //размер стека

	Stack() : _top(0) {}

	//метод для добавления элемента в конец стека
	void push(float data) {

		//если верхний элемент стека не nullptr(присутсвуют какие-либо значения)
		if (_top != nullptr) {
			
			Node* temp = new Node(data, _top);//создается новый узел, указатель в новом узле будет указывать тот узел, который перед ним
			_top = temp;
			

		}else{

			_top = new Node(data);//новый узел становится верхушкой стека
			
		}

		++_size;
	
	}	

	//метод для удаления последнего элемента в стеке(top)
	void pop() {

		//если указатель на верхний элемент == nullptr, то прерывание работы метода
		if (_top == nullptr) {
			return;
		}
		else {

			Node* temp = _top;
			_top = _top->next;//элемент, который стоял после удаляемого становится корневым элементом
			delete temp;
			--_size;
		
		}

	}

	//метод для вывода последнего(корневого) элемента на экран
	float& top() {
		
		return _top->data;
		
	}

	//метод для проверки пуст ли стек
	bool is_empty() {
		
		if(_size == 0) {
			return true;
		}
		else {
			return false;
		}

	}

	//метод для возврата количества элементов в стеке
	int& size() {
		return _size;
	}

};

//реализация очереди
struct Queue {

	//узел очереди
	struct Node {

		float data;
		Node* next;

		Node(float value, Node* node) : data(value), next(node) {}

	};

	Node* head;
	Node* tail;
	int _size;
	
	//метод для возврата количества элементов в очереди
	int& size() {

		return _size;
		
	}

	//метод проверки на пустоту очереди
	bool is_empty() {

		if (_size == 0) {
			return true;
		}
		else {
			return false;
		}

	}

	//метод добавления элемента в очередь
	void push(float value) {

		Node* node = new Node(value, nullptr);//передаем в конструктор значение для поля дата, и указатель nullptr т.к элемент будет распологаться в конце очереди

		//если очередь пуста, то элемент становиться и хвостом и головой очереди
		if (_size == 0) {

			head = node;
			tail = node;
		
		}
		else {
			
			tail->next = node;
			tail = node;

		}

		++_size;

	}
	
	//метод для извлечения элемента из очереди
	float pop() {

		float value = head->data;

		if (head == tail) {

			head = nullptr;
			tail = nullptr;

		}
		else {

			head = head->next;

		}

		--_size;

		return value;

	}

	//метод для получения значения первого элемента в очереди(head)
	float front() {

		return head->data;

	}

	//метод для получения значения последнего элемента в очереди(tail)
	float back() {

		return tail->data;

	}

};

Stack stack;
Queue queue;

void showQueue() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (queue.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Очередь пуста!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		return;
	}

	cout << "Очередь:" << endl << endl;
	while (!queue.is_empty()) {

		cout << queue.pop() << "     ";
	
	}

	cout << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void showStack() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (stack.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Стек пуст!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		return;
	}

	cout << "Стек:" << endl << endl;
	while (!stack.is_empty()) {

		cout << stack.top() << "     ";
		stack.pop();

	}

	cout << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void addToQueue() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	hideCursor(true);

	if (!(queue.is_empty())) {
		cout << "В данный момент в очереди присутствуют значения!" << endl << endl;
	}

	cout << "Введите количество элементов, которые желаете добавить в очередь:";
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

		queue.push(data);

	}

	cout << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void findSumQueue() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (queue.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Очередь пуста!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		return;
	}

	hideCursor(true);

	cout << "Введите x:";
	float x;
	while (!(cin >> x)) {

		clearCinBuff();
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Ошибка! Введите корректное значение:";

	}
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	cout << endl << "Введите y:";
	float y;
	while (!(cin >> y)) {

		clearCinBuff();
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Ошибка! Введите корректное значение:";

	}
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	float sum = 0;
	float temp = 0;

	vector<float> toStack;
	vector<float> queueValues;
	
	while (!queue.is_empty()) {

		temp = queue.pop();
		queueValues.push_back(temp);

	}

	for (int i = 0; i < queueValues.size(); ++i) {

		if ((queueValues[i] >= x && queueValues[i] <= y) || (queueValues[i] <= x && queueValues[i] >= y)) {

			sum += queueValues[i];

		}
		else {
			toStack.push_back(queueValues[i]);
		}

	}
	
	cout << endl << endl << "Сумма элементов очереди из диапазона[" << x << "," << y << "]:" << sum;

	cout << endl << endl << endl << "Следующие элементы будут помещены в стек:" << endl << endl;
	for (int i = 0; i < toStack.size(); ++i) {
		
		cout << toStack[i] << "    ";
		stack.push(toStack[i]);

	}

	cout << endl << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void amountPositiveInStack() {

	system("cls");
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	if (stack.is_empty()) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Стек пуст!\n\n";
		system("pause");
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		return;
	}

	int amountPositive = 0;
	float temp = 0;

	vector<float> stackValues;

	do {

		temp = stack.top();
		stackValues.push_back(temp);
		
		if (temp > 0) {
			++amountPositive;
		}
		stack.pop();

	} while (!stack.is_empty());

	cout << "Стек:" << endl << endl;
	for (int i = 0; i < stackValues.size(); ++i) {

		cout << stackValues[i] <<  "    ";

	}

	cout << endl << endl << endl << "Количество положительных элементов стека:" << amountPositive;

	cout << endl << endl << endl;
	hideCursor(false);
	system("pause");
	system("cls");
	return;

}

void mainMenu() {
	
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	hideCursor(false);

	string mainMenu[] =
	{
		"Просмотр состояния очереди",
		"Просмотр состояния стека",
		"Добавление элементов в очередь",
		"Расчет суммы элементов очереди из диапазона [x,y]",
		"Расчет количества положительных элементов стека",
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
			}
			else {
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
				showQueue();
				break;
			}

			case 1: {
				showStack();
				break;
			}

			case 2: {
				addToQueue();
				break;
			}

			case 3: {
				findSumQueue();
				break;
			}

			case 4: {
				amountPositiveInStack();
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