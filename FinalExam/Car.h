#pragma once
#include "Benefit.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>
#include "algorithm"
#include <time.h>
#include <stdlib.h>
#include <thread>
#include <chrono>

class Car
{
private:
	string license_plate; 
	string type;
	int number_of_seats;
	vector<Benefit> benefit; // available on vehicle
public:
	Car();
	Car(const string&, const string&, const int&, const vector<Benefit>&);

	string getLicense_plate();
	void setLicense_plate(const string&);

	string getType();
	void setType(const string&);

	int getNumber_of_seats();
	void setNumber_of_seats(const int&);

	vector<Benefit> getBenefit();
	void setBenefit(const vector<Benefit>&);

	friend istream& operator >>(istream&, Car&);
	friend ostream& operator <<(ostream&, const Car&);

	Car& operator=(const Car&);
};

