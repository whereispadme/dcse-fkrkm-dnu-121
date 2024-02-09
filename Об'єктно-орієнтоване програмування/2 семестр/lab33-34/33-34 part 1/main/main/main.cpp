#include "Header.h"

void line()
{

	cout << "_______________________________________________________________________________________________________________________" << endl << endl;

}

void endProcedure()
{

	cin.ignore(cin.rdbuf()->in_avail());
	cout << endl;
	system("pause");

}

void viewDataHighSchool(HighSchool &object)
{
	
	line();
	cout << "Название: " << object.name << endl;
	cout << "Размер фонда: " << object.getRezervFund() << endl;
	cout << "Процент отчислений: " << object.getRate() << endl;
	
}

void viewDataEnterprise(Enterprise &object)
{

	line();
	cout << "Название: " << object.name << endl;
	cout << "Размер фонда: " << object.getRezervFund() << endl;
	cout << "Размер благотворительного фонда: " << object.getFundSize() << endl;

}

void viewDataUnion(Union &object)
{

	line();
	cout << "Название: " << object.name << endl;
	cout << "Вид деятельности: " << object.kind << endl;
	cout << "Размер фонда: " << object.getRezervFund() << endl;
	cout << "Процент отчислений: " << object.getRate() << endl;
	cout << "Размер благотворительного фонда: " << object.getFundSize() << endl;
	line();

}

int main()
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	SetConsoleTitle(L"Кущевский Андрей, ПЗ-19-1");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	HighSchool *oHighSchool = new HighSchool("UNIVERSITY OF FANS C++", 1.0e6, 2);
	viewDataHighSchool(*oHighSchool);

	Enterprise *oEnterprise = new Enterprise("CLEVER OWL Ltd.", 1.0e8, 1.0e7);
	viewDataEnterprise(*oEnterprise);

	Union *oUnion = new Union("VICTORY", 1.25e8, oHighSchool->getRate(), oEnterprise->getFundSize(), "Miracles");
	viewDataUnion(*oUnion);

	Organization *oOrganization;
	
	oOrganization = oHighSchool;
	cout << "Работа oHighSchool->name: " << oHighSchool->name << endl;
	cout << "Работа oOrganization->calculatePayment(5): " << oOrganization->calculatePayment(5) << endl;
	
	line();

	oOrganization = oEnterprise;
	cout << "Работа oEnterprise->name: " << oEnterprise->name << endl;
	cout << "Работа oOrganization->calculatePayment(17): " << oOrganization->calculatePayment(17) << endl;
	
	line();

	oOrganization = oUnion;
	cout << "Работа oUnion->name: " << oUnion->name << endl;
	cout << "Работа oOrganization->calculatePayment(0): " << oOrganization->calculatePayment(0) << endl;

	line();
	endProcedure();

	delete oHighSchool;
	delete oEnterprise;
	delete oUnion;

	return 0;

}