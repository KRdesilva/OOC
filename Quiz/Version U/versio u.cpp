// versio u.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Salesman.h"
#include<cstring>


using namespace std;

int main()
{
    Salesman* s1, * s2, * s3;

    s1 = new Salesman();
    s2 = new Salesman();
    s3 = new Salesman();

    s1->setSalesmanDetails(1, "John", 30000, 773456);
    s2->setSalesmanDetails(2, "Ann", 40000, 777886);
    s3->setSalesmanDetails(3, "Leema",35000, 713456);

    s1->setSalesmanContactNo();
    s1->setSalesmanContactNo();
    s1->setSalesmanContactNo();

    cout << endl;

    s1->displaySalesmanDetails();
    s2->displaySalesmanDetails();
    s3->displaySalesmanDetails();

    delete s1, s2, s3;
}

