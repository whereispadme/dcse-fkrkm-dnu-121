#pragma once
#include <string>
using namespace std;
class CBook
{
private:
	std::string m_Author;//автор
	std::string m_Title;//название
	int m_Year;		    //год


public:
	//сеттеры(установить значение)
	void setAuthor(std::string str);
	void setTitle(std::string str);
	void setYear(int Year);

	//геттеры(получить значение)
	std::string getAuthor();
	std::string getTitle();
	int getYear();

	//конструктор и деструктор
	CBook();//конструктор по умолчанию
	~CBook();//деструктор по умолчанию
};