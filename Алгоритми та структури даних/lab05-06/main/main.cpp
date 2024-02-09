/*
	Вариант 22.	
	Створити бінарне дерево дійсних чисел введенням даних з клавіатури.
	Використовуючи прямий обхід дерева, знайти мінімальний елемент дерева та вивести його на екран. 
	Всі від’ємні числа дерева заміни мінімальним елементом. Вивести оновлене дерево на екран.
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <string>
#include <iomanip>

#define UP 72
#define DOWN 80
#define ENTER 13

using namespace std;


int tabs = 0;
vector<float> vec;

void hideCursor(bool showStatus)
{

	_CONSOLE_CURSOR_INFO info;
	info.bVisible = showStatus;
	info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

}

void gotoxy(int x, int y)
{

	COORD coord;

	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void setColor(int num)
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), num);

}

void clearStreamInput()
{

	cin.clear();
	cin.sync();
	cin.ignore(cin.rdbuf()->in_avail());

}

void endProcedure()
{

	clearStreamInput();
	cout << endl << endl;
	system("pause");
	system("cls");

}

float correctWrite()
{

	float value;
	setColor(14);
		
	while (!(cin >> value)) {
		setColor(12);
		clearStreamInput();
		cout << "Ошибка! Введите корректное значение:";

	}

	setColor(10);
	std::cout << std::endl << "Значение корректно!\n\n";
	setColor(14);

	return value;
}

struct Node {

	float data;
	Node *left;
	Node *right;

	Node(float num) : data(num), left(nullptr), right(nullptr) {}
	Node() : data(), left(nullptr), right(nullptr) {}

};

struct BinaryTree {

	Node *head;

	void input() {

		char ans;

		std::cout << "Инициализация начального узла дерева:";
		head = new Node(correctWrite());

		std::cout << "Двигаемся влево? (Y - Да, другая клавиша - отмена):";
		std::cin >> ans;
		head->left = Add(ans);

		std::cout << "\nДвигаемся вправо? (Y - Да, другая клавиша - отмена):";
		std::cin >> ans;
		head->right = Add(ans);

	}

	bool isEmpty() {
		return head == nullptr;
	}

	Node *Add(char ans) {

		Node *work;

		if (ans == 'Y' || ans == 'y') {

			std::cout << std::endl << "Введите новый элемент: ";
			work = new Node(correctWrite());

			std::cout << "Добавить элемент влево?  (Y - Да, другая клавиша - отмена):";
			std::cin >> ans;
			work->left = Add(ans);

			std::cout << "Добавить элемент вправо? (Y - Да, другая клавиша - отмена):";
			std::cin >> ans;
			work->right = Add(ans);

			return work;

		}
		else {
			return nullptr;
		}

	}

	void replaceNegativeOnMin(Node *(&node), float min) {

		if (!node) {

			return;

		}

		if (node->data < 0) node->data = min;
		replaceNegativeOnMin(node->left, min);
		replaceNegativeOnMin(node->right, min);


	}	

	void findMin(Node *p) {

		Node *work;
		work = p;

		if (!p) {

			return;

		}

		vec.push_back(work->data);
		if (work->left != nullptr) findMin(work->left);
		if (work->right != nullptr) findMin(work->right);

	}

};

BinaryTree tree;

//реализация рекурсивного вывода дерева
void outputTree(Node *(&Node))
{

	//если в указатель nullptr, прекращение работы функции
	if (tree.isEmpty()) {

		return;

	}

	//если ветка существует то увеличение счетчика рекурсивно вызванных процедур, который
	//будет считать отступы для красивого вывода дерева
	tabs += 5;

	//вывод ветки и её подветок справа
	if (Node->right != nullptr) outputTree(Node->right);

	for (int i = 0; i < tabs; ++i) cout << " ";//отступы
	cout << Node->data << endl;//данный этой ветки

	//вывод ветки и её подветок слева
	if (Node->left != nullptr) outputTree(Node->left);

	tabs -= 5;//уменьшение количества отступов

	return;

}

void clearTree(Node *(&p))
{

	//если в дереве отсутствуют ноды, прекращение работы функции
	if (tree.isEmpty()) {
		return;
	}

	Node *work;
	work = p;

	if (work->left != nullptr)  clearTree(work->left);
	if (work->right != nullptr) clearTree(work->right);
	delete work;

	p = nullptr;

	return;

}

/****************************************************************************************************************************/
//start func menu

//1 pos menu
void showTreeMenu()
{

	system("cls");
	hideCursor(false);

	if (!tree.head) {

		setColor(12);
		cout << "В дереве отсутствуют элементы, воспользуйтесь соответствующим пунктом меню для инициализации дерева!";
		endProcedure();
		return;

	}

	setColor(14);
	outputTree(tree.head);

	endProcedure();
	return;

}

//2 pos menu
void createTreeMenu()
{

	system("cls");
	
	if (tree.isEmpty()) {
		setColor(12);
		cout << "В данный момент в дереве отсутствуют элементы!" << endl << endl;
		setColor(14);
	}
	else {
		setColor(12);
		cout << "Дерево ранее уже было инициализировано(данные будут удалены)!" << endl << endl;
		setColor(14);
	}

	hideCursor(true);

	tree.input();

	hideCursor(false);
	cout << endl;
	system("pause");
	system("cls");
	return;

}

//3 pos menu
void findMinMenu()
{

	system("cls");
	setColor(14);

	if (!tree.head) {

		setColor(12);
		cout << "В дереве отсутствуют элементы, воспользуйтесь соответствующим пунктом меню для инициализации дерева!";
		endProcedure();
		return;

	}

	tree.findMin(tree.head);

	cout << "Элементы:" << endl << endl;
	for (int i = 0; i < vec.size(); ++i) {

		cout << setw(4) << vec[i];

	}

	float min = vec[0];

	for (int i = 0; i < vec.size(); ++i) {

		if (vec[i] < min) {

			min = vec[i];

		}

	}

	cout << endl << endl << "Минимальный элемент равен:" << min;
	
	vec.clear();

	endProcedure();
	return;

}

//4 pos menu
void negativeReplaceMenu()
{

	system("cls");
	hideCursor(false);

	if (!tree.head) {

		setColor(12);
		cout << "В дереве отсутствуют элементы, воспользуйтесь соответствующим пунктом меню для инициализации дерева!";
		endProcedure();
		return;

	}

	cout << "Видоизменённое дерево после замены отрицательных элементов на минимальное:" << endl << endl;

	tree.findMin(tree.head);
	float min = vec[0];
	unsigned int indexMin = 0;

	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] < min) {

			min = vec[i];

		}
	}

	tree.replaceNegativeOnMin(tree.head, min);

	outputTree(tree.head);

	vec.clear();
	hideCursor(false);
	endProcedure();
	return;

}

//5 pos menu
void clearTreeMenu()
{

	system("cls");
	setColor(14);

	if (tree.isEmpty()) {
		setColor(12);
		cout << "В дереве отсутствуют элементы, воспользуйтесь соответствующим пунктом меню для инициализации дерева!";
		endProcedure();
		return;
	}

	clearTree(tree.head);
	cout << "Очистка дерева...";
	
	endProcedure();
	return;

}

//end func menu
/****************************************************************************************************************************/

void mainMenu()
{

	std::string mainMenu[] =
	{
		"Просмотр дерева",
		"Инициализация дерева значениями",
		"Поиск минимального значения",
		"Замена отрицательных элементов минимальным",
		"Очистка дерева",
		"Выход из программы"
	};

	short x = 0;
	short y = 0;
	int key = 0;
	int activeMenu = 0;

	while (true) {
		hideCursor(false);

		x = 10;
		y = 3;

		for (int i = 0; i < size(mainMenu); ++i) {

			if (activeMenu == i) {
				setColor(13);
			}
			else {
				setColor(14);
			}

			gotoxy(x, ++y);
			std::cout << mainMenu[i];

		}

		key = _getch();

		switch (key) {

		case UP: {
			if (activeMenu > 0) {
				--activeMenu;
			}
			else {
				activeMenu = size(mainMenu) - 1;
			}

			break;
		}
		case DOWN: {

			if (activeMenu < size(mainMenu) - 1) {
				++activeMenu;
			}
			else {
				activeMenu = 0;
			}

			break;
		}

		case ENTER: {
			switch (activeMenu) {
			case 0: {
				showTreeMenu();
				break;
			}

			case 1: {
				createTreeMenu();
				break;
			}

			case 2: {
				findMinMenu();
				break;
			}

			case 3: {
				negativeReplaceMenu();
				break;
			}
			
			case 4: {
				clearTreeMenu();
				break;
			}

			case 5: {
				system("cls");
				setColor(14);
				std::cout << "Завершение работы программы..." << std::endl << std::endl;
				system("pause");
				return;
			}

			}
			break;
		}

		}

	}

}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");

	mainMenu();
	clearTree(tree.head);

	return 0;

}