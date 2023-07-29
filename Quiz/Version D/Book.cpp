#include "Book.h"
#include<iostream>
#include<cstring>

using namespace std;

Book::Book() {
	bookID = 0;
	strcpy_s(bookName, "");
	strcpy_s(author, "");
}

Book::Book(int id,const char Name[],const char authr[]) {
	bookID = id;
	strcpy_s(bookName,Name);
	strcpy_s(author,authr);
}

void Book::setBookDetails(int id, const char Name[], const char authr[]) {
	bookID = id;
	strcpy_s(bookName,Name);
	strcpy_s(author,authr);
}

void Book::setBookID(int id) {
	cout << "Input new book Id " << id << ": ";
	cin >> bookID;

}

void Book::displayBookDetails() {
	cout << "BookID: " << bookID << endl;
	cout << "BookName: " << bookName << endl;
	cout << "Author: " << author << endl;
}

 Book::~Book() {
	 cout << "" << endl;
}



