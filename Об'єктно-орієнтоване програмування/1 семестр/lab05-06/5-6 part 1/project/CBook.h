#pragma once
#include <string>
using namespace std;
class CBook
{
private:
	std::string m_Author;//�����
	std::string m_Title;//��������
	int m_Year;		    //���


public:
	//�������(���������� ��������)
	void setAuthor(std::string str);
	void setTitle(std::string str);
	void setYear(int Year);

	//�������(�������� ��������)
	std::string getAuthor();
	std::string getTitle();
	int getYear();

	//����������� � ����������
	CBook();//����������� �� ���������
	~CBook();//���������� �� ���������
};