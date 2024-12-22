#pragma once
#include "TheRideManagement.h"

class CustomerTripLookup
{
//private:
//	static vector<TheRide> lookpup_customer;
public:
	static bool compare(TheRide, TheRide);
	static int lower_bound(vector<TheRide>, double);
	static int upper_bound(vector<TheRide>, double);
	static void LoopUp();
	static vector<TheRide> lookpup_customer;
};

