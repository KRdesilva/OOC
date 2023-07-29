#pragma once
#include<string>
#include <string>
class Taxi
{
private:
	int taxiID;
	string driver;
	int ratePerKM;
	int distanceTravelled;

public:
	Taxi();
	void setTaxiDetails(int id, string drive, int rate, int distant);
	void displayTaxiDetails();
	float calculateBill();
	~Taxi();

};

