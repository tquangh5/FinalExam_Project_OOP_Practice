#pragma once
#include "Car.h"

class CarManagement
{
private:
	static vector<Car> cars;
public:
	static void addVehicle(const Car&);
	static void editVehicle(const string&, const Car&);
	static void deleteVehicle(const string&);

	// Set up.
	static void readFileToCars();
	static void writeCarsToFile();

	//System
	static void SystemCarManagement();
};

