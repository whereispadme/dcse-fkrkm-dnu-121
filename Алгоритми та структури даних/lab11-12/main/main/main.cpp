#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <vector>
#include <iomanip>
#define UP 72
#define DOWN 80
#define ENTER 13
using namespace std;


HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void clearCinBuff()
{

	cin.clear();
	cin.sync();
	cin.ignore(cin.rdbuf()->in_avail());

}

void endProcedure()
{

	clearCinBuff();
	cout << endl << endl;
	system("pause");
	system("cls");

}

void gotoxy(short x, short y)
{

	SetConsoleCursorPosition(hStdOut, { x, y });

}

void hideCursor(bool showStatus)
{

	_CONSOLE_CURSOR_INFO info;
	info.bVisible = showStatus;
	info.dwSize = 20;
	SetConsoleCursorInfo(hStdOut, &info);

}

void setColorText(short unsigned int item)
{

	SetConsoleTextAttribute(hStdOut, item);

}

//вузли АВЛ-дерева 
struct Tree
{
	float info;
	int h;
	Tree* left;
	Tree* right;
};

Tree* root = nullptr;

//фукнция для проверки на пустоту дерева 
bool isEmpty(Tree* (&Node))
{

	if (!Node)
	{

		return true;

	}
	else
	{

		return false;

	}

}

// три допоміжні функції, пов'язані з висотою height, bfactor, fixheight

//Перша є обгорткою для поля h, вона може працювати й з нульовими покажчиками
//(з порожніми деревами). Вона повертає висоту дерева(піддерева):
int height(Tree* p)
{
	if (p != NULL)return p->h;
	else return 0;
}

//Друга обчислює balance factor заданого вузла (і працює тільки з ненульовими покажчиками):
int bfactor(Tree* p)
{
	return height(p->right) - height(p->left);
}

//Третя функція відновлює коректне значення поля h заданого вузла
//(за умови, що значення цього поля в правом і левом дочірніх вузлах є коректними):
void fixheight(Tree* p)
{
	int h1 = height(p->left);
	int h2 = height(p->right);
	if (h1 > h2) p->h = h1 + 1;
	else p->h = h2 + 1;
}

//правий простий поворіт
Tree* rotateright(Tree* p) // правий поворот навколо p
{
	Tree* q = p->left;
	p->left = q->right;
	q->right = p;
	fixheight(p);
	fixheight(q);
	return q;
}

//лівий простий поворіт
Tree* rotateleft(Tree* q) // лівий поворот навколо q
{
	Tree* p = q->right;
	q->right = p->left;
	p->left = q;
	fixheight(q);
	fixheight(p);
	return p;
}

//балансування вузлу бінарного дерева пошуку
Tree* balance(Tree* p) // балансування вузла p
{
	fixheight(p);
	if (bfactor(p) == 2)
	{
		if (bfactor(p->right) < 0)
			p->right = rotateright(p->right);
		return rotateleft(p);
	}
	if (bfactor(p) == -2)
	{
		if (bfactor(p->left) > 0)
			p->left = rotateleft(p->left);
		return rotateright(p);
	}
	return p;
}

Tree* create_avltree(Tree*&, float);//функція для створення бінарного дерева
void search_tree(Tree*&, float);//функція пошуку ключового елементу
void view_tree(Tree*&, int);//функція виводу бінарного дерева
Tree* exit(Tree*&);//функція видалення бінарного дерева

//вставкa нового вузла
Tree* create_avltree(Tree*& p, float k)//функція створення БД(додавання одного елементу)
{
	if (p == NULL)
	{
		p = new Tree;
		p->info = k;
		p->h = 0;
		p->left = NULL;
		p->right = NULL;
	}
	else {
		if (k < p->info) p->left = create_avltree(p->left, k);
		else p->right = create_avltree(p->right, k);
	}
	return balance(p);
}

void search_tree(Tree*& tree, float k)//функція пошуку
{
	if (k == tree->info) { cout << "Елемент найден!"; return; }
	if (k > tree->info) {
		if (tree->right == NULL) cout << "Елемент не найден!";
		else search_tree(tree->right, k);
	}
	else {
		if (tree->left == NULL) cout << "Елемент не найден!";
		else search_tree(tree->left, k);
	}
}

void view_tree(Tree*& tree, int level)//функція виведення БД
 //перевірка на існування БД або віток або листків цього БД
{

	if (tree != NULL) {
		view_tree(tree->right, level + 3);
		if (level != 0)for (int i = 0; i < level + 6; i++) cout << " ";
		if (level == 0) cout << "Корень:";
		cout << tree->info << endl;
		view_tree(tree->left, level + 3);
	}

}

Tree* exit(Tree*& tree)
{//Видалення усього БД якщо воно існує

	Tree* work = tree;
	if (work->left != NULL) work->left = exit(work->left);
	if (work->right != NULL) work->right = exit(work->right);
	delete work;
	return NULL;

}

//очистка выделенной динамической под дерево
void clearTree(Tree* (&Node))
{

	//если в дереве отсутствуют ноды, прекращение работы функции
	if (!Node) {
		return;
	}

	clearTree(Node->left);
	clearTree(Node->right);
	delete Node;

	Node = nullptr;

	return;

}

void clearTreeMenu()
{

	system("cls");
	setColorText(14);

	if (isEmpty(root)) {
		setColorText(12);
		cout << "В дереве отсутствуют элементы, воспользуйтесь соответствующим пунктом меню для инициализации дерева!";
		endProcedure();
		return;
	}

	cout << "Очистка дерева...";
	clearTree(root);

	endProcedure();
	return;

}

void mainMenu()
{

	hideCursor(false);

	string mainMenu[] =
	{
		"Просмотр состояния дерева",
		"Инициализация дерева значениями",
		"Поиск элемента",
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

		for (int i = 0; i < 5; ++i) {

			if (activeMenu == i) {
				setColorText(13);
			}
			else {
				setColorText(14);
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
			else {
				activeMenu = 5 - 1;
			}

			break;
		}
		case DOWN: {

			if (activeMenu < 5 - 1) {
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

				system("cls");
				//Перевірка на існування дерева
				if (root != NULL) {
					view_tree(root, 0);
					endProcedure();
					system("cls");
				}
				else {
					setColorText(12);
					cout << "В дереве отсутствуют элементы, воспользуйтесь соответствующим пунктом меню для инициализации дерева!";
					endProcedure();
				}
				break;
			}

			case 1: {
				system("cls");
				hideCursor(true);

				if (!root) {
					setColorText(12);
					cout << "На данный момент в дереве отсутствуют элементы!" << endl << endl;
					setColorText(14);
				}
				else {
					setColorText(12);
					cout << "На данный момент в дереве присутствуют элементы!" << endl << endl;
					setColorText(14);
				}

				cout << "Введите количество элементов, которые желаете добавить:";
				int size = 0;
				while (!(cin >> size) || (size <= 0)) {

					setColorText(12);
					clearCinBuff();
					cout << "Ошибка! Введите корректное значение:";

				}

				setColorText(14);
				cout << endl;

				float value = 0;

				for (int i = 0; i < size; ++i) {

					cout << "[" << i + 1 << "]:";
					while (!(cin >> value)) {

						setColorText(12);
						clearCinBuff();
						cout << "Ошибка! Введите корректное значение для [" << i + 1 << "]:";

					}
					setColorText(14);

					root = create_avltree(root, value);

				}

				hideCursor(false);
				cout << endl;
				system("pause");
				system("cls");
				break;
			}

			case 2: {
				if (root != NULL) {
					system("cls");
					setColorText(14);
					float key = 0;
					hideCursor(true);
					cout << "Введите значение, которе желаете найти:";
					while (!(cin >> key)) {

						setColorText(12);
						clearCinBuff();
						cout << "Ошибка! Введите корректное значение:";
					}
					hideCursor(false);
					setColorText(14);
					search_tree(root, key);
					endProcedure();
				}
				else {
					setColorText(12);
					system("cls");
					cout << "В дереве отсутствуют элементы, воспользуйтесь соответствующим пунктом меню для инициализации дерева!";
					endProcedure();
				}
				break;
			}

			case 3: {
				clearTreeMenu();
				break;
			}

			case 4: {
				system("cls");
				setColorText(14);
				system("pause");
				return;
			}

			}
			break;
		}

		}

	}

}

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");

	mainMenu();
	clearTree(root);

	return 0;

}