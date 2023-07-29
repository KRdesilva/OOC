#include "Vehicle.h"
#include<iostream>
#include<cstring>

using namespace std;

Vehicle::Vehicle() {
	vehicleID = 0;
	strcpy_s(vehicleBrand, "");
	strcpy_s(vehicleType, "");
	vehiclePrice = 0;
}

Vehicle::Vehicle(int id, const char brand[], const char type[], float price) {
	vehicleID = id;
	strcpy_s(vehicleBrand, brand);
	strcpy_s(vehicleType, type);
	vehiclePrice = price;
}

void Vehicle::setVehicleDetails(int id, const char brand[], const char type[], float price)  {
	vehicleID = id;
	strcpy_s(vehicleBrand, brand);
	strcpy_s(vehicleType, type);
	vehiclePrice = price;
}

void Vehicle::displayVehicleDetails() {
	cout << "VehicleID = " << vehicleID << endl;
	cout << "VehicleBrand = " << vehicleBrand << endl;
	cout << "VehicleType = " << vehicleType << endl;
	cout << "VehiclePrice = " << vehiclePrice << endl;
}

void Vehicle::setVehiclePrice(float price) {
	vehiclePrice = price;
}

