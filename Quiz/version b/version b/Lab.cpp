#include "Lab.h"
#include<iostream>

using namespace std;

Lab::Lab()
{
	labID = 0;
	capacity = 0;
}
Lab::Lab(int ID, int cap)
{
	labID = ID;
	capacity = cap;
}
void Lab::setLabDetails(int ID, int cap)
{
	labID = ID;
	capacity = cap;
}
int Lab::getCapacity()
{
	return capacity;
}
Lab::~Lab()
{
	cout << "" << endl;
}
