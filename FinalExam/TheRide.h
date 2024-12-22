#pragma once
#include "Car.h"

class TheRide
{
private:
	string id_the_ride;
	string start_the_ride;
	string end_the_ride;
	string day_start;
	double price_base;
	int ticket_remain;
	Car car;
public:
	TheRide();
	TheRide(const string&, const string&, const string&, const string&, const double&, const int&, const Car&);

	string getId_the_ride();
	void setId_the_ride(const string&);

	string getStart_the_ride();
	void setStart_the_ride(const string&);

	string getEnd_the_ride();
	void setEnd_the_ride(const string&);

	string getDay_start();
	void setDay_start(const string&);

	double getPriceBase();
	void setPriceBase(const double&);

	int getTicketRemain();
	void setTicketRemain(const int&);

	Car getCar();
	void setCar( Car);

	friend istream& operator >> (istream&, TheRide&);
	friend ostream& operator << (ostream&, const TheRide&);
};

