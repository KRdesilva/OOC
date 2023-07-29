#include "Guest.h"
#include<iostream>
#include<cstring>

using namespace std;

Guest::Guest()
{
	guestID = 0;
	strcpy_s(guestName,"");
	ratePerDay =0;
	numberOfDays =0;
}

void Guest::setGuestDetails(int ID, const char	name[], int days, int rate)
{
	guestID = ID;
	strcpy_s(guestName, name);
	ratePerDay = rate;
	numberOfDays = days;
}

void Guest::displayGuestDetails()
{
	cout << "Guest ID=  " << guestID << endl;
	cout << "Guest Name = " << guestName << endl;
	cout << "BillAmount =" << calculateGuestBill() << endl;
}

int Guest::calculateGuestBill()
{
	return ratePerDay * numberOfDays;
}

Guest::~Guest()
{
	cout << "guest removed " << endl;
}
