#pragma once
class Vehicle
{
private:
	int vehicleID;
	char vehicleBrand[20];
	char vehicleType[20];
	float vehiclePrice;

public:
	Vehicle();
	Vehicle(int id, const char brand[], const char type[], float price);
	void setVehicleDetails(int id, const char brand[], const char type[], float price);
	void displayVehicleDetails();
	void setVehiclePrice(float price);

};

