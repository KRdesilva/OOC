#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double salary, netSalary;
	int etype, otHrs,otRate;
	
	cout << "Enter Employee Type :";
	cin >> etype;
	
	cout <<"Enter Salary :";
	cin >> salary;
	
	cout << "Enter OtHrrs :";
	cin >> otHrs;
	
	switch (etype)
	{
		case 1:
			otRate = 1000;
			break;
			
		case 2:
			otRate = 1500;
			break;
			
		default:
			otRate =1700;
			break;		
	} 
	
	netSalary =salary + otHrs * otRate;
	cout << "Net Salary is "<<setprecision(2)<<setiosflags(ios::fixed)<< netSalary <<endl;
	return 0;
}
