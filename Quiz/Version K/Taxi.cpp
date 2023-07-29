#include "Taxi.h"
#include<iostream>


using namespace std;

Taxi::Taxi()
{
	taxiID = 0;
	driver ="";
	ratePerKM = 0;
	distanceTravelled = 0;
}


void Taxi::setTaxiDetails(int id, string drive, int rate, int distant)
{
	taxiID = id;
	driver = drive;
	ratePerKM = rate;
	distanceTravelled = distant;
}

void Taxi::displayTaxiDetails()
{
	cout << "Taxi ID = " << taxiID << endl;
	cout << "Driver Name = " << driver << endl;
}

float Taxi::calculateBill()
{
	return (ratePerKM * distanceTravelled);
}

Taxi::~Taxi()
{
	cout << "Destructor runs" << endl;
}
