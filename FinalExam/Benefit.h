#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <thread>
#include <chrono>

using namespace std;

class Benefit
{
private:
	string name_benefit;
	double price_benefit;
public:
	Benefit();
	Benefit(const string&, const double& );

	string getNameBenefit();
	void setNameBenefit(const string&);
	double getPriceBenefit();
	void setPriceBenefit(const double&);

	friend istream& operator >> (istream&, Benefit&);
	friend ostream& operator << (ostream&, const Benefit&);
};

