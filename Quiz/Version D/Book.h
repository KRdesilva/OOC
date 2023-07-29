#pragma once
class Book
{
private:
	int bookID;
	char bookName[20];
	char author[20];

public:
	Book();
	Book(int id, const char Name[], const char authr[]);
	void setBookDetails(int id, const char Name[], const char authr[]);
	void setBookID(int id);
	void displayBookDetails();
	~Book();
};

