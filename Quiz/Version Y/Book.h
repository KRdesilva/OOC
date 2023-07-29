#pragma once
class Book
{
private:
	int bookID;
	char bookName[20];
	char author[20];

public:
	Book();
	Book(int ID, const char name, const char auth);
	void setBookDetails(int ID, const char name, const char auth);
	void displayBookDetails();
	void setBookID(int ID);
	~Book();
};

