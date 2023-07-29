// versiond.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Book.h"
#include<cstring>

using namespace std;

int main()
{
	Book* book[3];

	book[0] = new Book(1212, "Jane Eyre", "Charlotte Bronte");
	book[1]= new Book(1234, "Divergent", "Veronica Roth");
	book[2] = new Book(3456, "Matilda", "Roald");


	book[0]->setBookID(1);
	book[1]->setBookID(2);
	book[2]->setBookID(3);


	book[0]->displayBookDetails();
	book[1]->displayBookDetails();
	book[2]->displayBookDetails();



	int i = 0;
	for(i = 0; i < 3; i++)
	{
		delete book[i];
	}

	return 0;
}


