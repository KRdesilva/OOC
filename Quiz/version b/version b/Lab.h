#pragma once
class Lab
{
private:
	int labID;
	int capacity;

public:
	Lab();
	Lab(int ID, int cap);
	void setLabDetails(int ID, int cap);
	int getCapacity();
	~Lab();
};

