#pragma once
#include <string>
#include <vector>

class Book
{

private:
	std::string title;
	std::string author;
	std::string year;

public:
	Book();
	Book(std::string, std::string, std::string);
	~Book();

	void setData(Book);
	std::vector<std::string> getData();

};