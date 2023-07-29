#pragma once
class Guest
{
private:
	int guestID;
	char guestName[20];
	int ratePerDay;
	int numberOfDays;

public:
	Guest();
	void setGuestDetails(int ID, const char name[], int days, int rate);
	void setGuestDetails(int guestID, const char guestName[], int numberOfDays);
	void displayGuestDetails();
	int calculateGuestBill();
	~Guest();
};

