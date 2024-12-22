#pragma once
#include "TheRide.h"

class TheRideManagement
{
//private:
//    static vector<TheRide> rides;
public:
    static vector<TheRide> rides;
    // Add
    static void addRide(const TheRide&);

    // Edit
    static void editRide(const string&, const string&, const string&, const double&, const int&,  Car);

    // Delete 
    static void removeRide(const string&);

    // Set up.
    static void readFileToRides();
    static void writeRidesToFile();

    //System
    static void SystemTheRideManagement();
};

