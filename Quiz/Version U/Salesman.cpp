#include "Salesman.h"
#include<iostream>
#include<cstring>

using namespace std;

Salesman::Salesman() {
	salesmanid = 0;
	strcpy_s(salesmanName, "");
	salary = 0;
	contactNo = 0;
}
void Salesman::setSalesmanDetails(int sid, const char name[], int sal, int no) {
	salesmanid = sid;
	strcpy_s(salesmanName,name);
	salary = sal;
	contactNo = no;
}
void Salesman::displaySalesmanDetails() {
	cout << "Salesmanid = " << salesmanid << endl;
	cout << "SalesmanName = " << salesmanName << endl;
	cout << "Salary = " << salary << endl;
	cout << "ContactNo = " << contactNo << endl;
}
void Salesman::setSalesmanContactNo() {
	cout << "Input new contact number of salesman : ";
	cin >> contactNo;
}
Salesman::~Salesman() {
	cout << "Destructor end"<< endl;
}
