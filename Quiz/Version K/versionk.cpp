// versionk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Taxi.h"
#include<string>

using namespace std;

int main()
{
    Taxi t1, t2, t3;

    t1.setTaxiDetails(1234, "Ben", 150, 10);
    t2.setTaxiDetails(4321, "Chris", 250, 4);
    t3.setTaxiDetails(3434, "Nick", 175, 2);

    t1.displayTaxiDetails();
    cout << "BillAmount = " << t1.calculateBill() << endl;
    t2.displayTaxiDetails();
    cout << "BillAmount = " << t2.calculateBill() << endl;
    t3.displayTaxiDetails();
    cout << "BillAmount = " << t3.calculateBill() << endl;

    return 0;
    
}

