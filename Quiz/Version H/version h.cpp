// version h.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Guest.h"
#include<sctring>

using namespace std;

int main()
{
	Guest g1, g2, g3;

	g1.setGuestDetails(1212, "Jared", 4500, 4);
	g2.setGuestDetails(1122, "Ben", 3000, 3);
	g1.setGuestDetails(1234, "Ruby", 5750, 2);

	g1.displayGuestDetails();
	g1.displayGuestDetails();
	g1.displayGuestDetails();

	return 0;
}


