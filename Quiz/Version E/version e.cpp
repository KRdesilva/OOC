// version e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Vehicle.h"
#include<cstring>


using namespace std;

int main()
{
	float vprice;

	Vehicle v1, v2, v3;

	v1.setVehicleDetails(1, "Toyota", "SUV", 8500000);
	v2.setVehicleDetails(2, "Nissan", "Saloon", 6000000);
	v3.setVehicleDetails(3, "Honda", "Convertible", 7200000);

	cout << "Input new price vehicle 1 : ";
	cin >> vprice;
	v1.setVehiclePrice(vprice);

	cout << "Input new price vehicle 2 : " ;
	cin >> vprice;
	v2.setVehiclePrice(vprice);

	cout << "Input new price vehicle 3 : " ;
	cin >> vprice;
	v3.setVehiclePrice(vprice);

	

	v1.displayVehicleDetails();
	v2.displayVehicleDetails();
	v3.displayVehicleDetails();

	return 0;
}

