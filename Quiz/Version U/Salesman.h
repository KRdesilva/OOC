#pragma once
class Salesman
{
private:

	int salesmanid;
	char salesmanName[20];
	int salary;
	int contactNo;

public:
	Salesman();
	void setSalesmanDetails(int sid, const char name[], int sal, int no);
	void displaySalesmanDetails();
	void setSalesmanContactNo();
	~Salesman();
};

