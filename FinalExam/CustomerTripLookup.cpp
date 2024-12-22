#include "CustomerTripLookup.h"

vector<TheRide> CustomerTripLookup::lookpup_customer;
/*
void CustomerTripLookup::LoopUp()
{
    if (TheRideManagement::rides.size() == 0)
    {
        cout << "LIST EMPTY\n";
        return;
    }
    string departure, destination, date;
    double minPrice, maxPrice;
    string vehicleType;
    vector<string> selectedAmenities;

    cout << "Enter start location : ";
    getline(cin, departure);

    cout << "Enter end location : ";
    getline(cin, destination);

    cout << "Enter day start (dd/mm/yyyy): ";
    getline(cin, date);

    cout << "Enter distance price (min-max): ";
    string priceRange;
    getline(cin, priceRange);
    stringstream ss(priceRange);
    string minStr, maxStr;
    getline(ss, minStr, '-');
    getline(ss, maxStr);
    minPrice = stod(minStr);
    maxPrice = stod(maxStr);

    cout << "Type car (1: Seater, 2: Sleeper, 3: Limousine): ";
    int typeChoice;
    cin >> typeChoice;
    cin.ignore();

    // Type
    switch (typeChoice) 
    {
    case 1: vehicleType = "Seater"; break;
    case 2: vehicleType = "Sleeper"; break;
    case 3: vehicleType = "Limousine"; break;
    default: vehicleType = ""; break;
    }

    // Find the ride.
    for (auto ride : TheRideManagement::rides) 
    {
        bool matches = true;

        if (!departure.empty() && ride.getStart_the_ride() != departure) matches = false;
        if (!destination.empty() && ride.getEnd_the_ride() != destination) matches = false;
        if (!date.empty() && ride.getDay_start() != date) matches = false;
        if (ride.getPriceBase() < minPrice || ride.getPriceBase() > maxPrice) matches = false;
        if (!vehicleType.empty() && ride.getCar().getType() != vehicleType) matches = false;

        if (matches) 
        {
            CustomerTripLookup::lookpup_customer.push_back(ride);
        }
    }

    // Display result.
    cout << "Result :\n";
    cout << "|Numerical order|  ID The Ride |   Day Start    |  Type Car  | Price Ticket | Ticket Remain |\n";
    cout << "|---------------|--------------|----------------|------------|--------------|---------------|\n";

    if (CustomerTripLookup::lookpup_customer.size() == 0)
    {
        cout << "Does not find the ride satified your request.\n";
        return;
    }

    for (size_t i = 0; i < CustomerTripLookup::lookpup_customer.size(); i++) 
    {
        cout << "| " << (i + 1) << "               | "
            << CustomerTripLookup::lookpup_customer[i].getId_the_ride() << "      | "
            << CustomerTripLookup::lookpup_customer[i].getDay_start() << "    | "
            << CustomerTripLookup::lookpup_customer[i].getCar().getType() << "     | "
            << CustomerTripLookup::lookpup_customer[i].getPriceBase() << "        | "
            << CustomerTripLookup::lookpup_customer[i].getTicketRemain() << "          |\n";
    }
}*/

bool CustomerTripLookup::compare(TheRide a, TheRide b)
{
    return a.getPriceBase() < b.getPriceBase();
}
int CustomerTripLookup::upper_bound(vector<TheRide> rides, double maxPrice)
{
    int left = 0;
    int right = rides.size();
    while (left < right) 
    {
        int mid = left + (right - left) / 2;
        if (rides[mid].getPriceBase() <= maxPrice) 
        {
            left = mid + 1;
        }
        else 
        {
            right = mid;
        }
    }
    return left;
}
int CustomerTripLookup::lower_bound(vector<TheRide> rides, double minPrice)
{
    int left = 0;
    int right = rides.size();
    while (left < right) 
    {
        int mid = left + (right - left) / 2;
        if (rides[mid].getPriceBase() < minPrice) 
        {
            left = mid + 1;
        }
        else 
        {
            right = mid;
        }
    }
    return left;
}
void CustomerTripLookup::LoopUp() 
{
    string departure, destination, date;
    double minPrice, maxPrice;
    string vehicleType;
    vector<string> selectedAmenities;

    cout << "Enter start location : ";
    getline(cin, departure);

    cout << "Enter end location : ";
    getline(cin, destination);

    cout << "Enter day start (dd/mm/yyyy): ";
    getline(cin, date);

    cout << "Enter distance price (min-max): ";
    string priceRange;
    getline(cin, priceRange);
    stringstream ss(priceRange);
    string minStr, maxStr;
    getline(ss, minStr, '-');
    getline(ss, maxStr);
    minPrice = stod(minStr);
    maxPrice = stod(maxStr);

    cout << "Type car (1: Seater, 2: Sleeper, 3: Limousine): ";
    int typeChoice;
    cin >> typeChoice;
    cin.ignore();

    string sedan = "";
    // Type
    switch (typeChoice) {
    case 1: vehicleType = "Seater";  sedan = "Seater"; break;
    case 2: vehicleType = "Sleeper"; sedan = "Sleeper";  break;
    case 3: vehicleType = "Limousine"; sedan = "Limousine";  break;
    default: vehicleType = ""; break;
    }
    if (TheRideManagement::rides.size() == 0)
    {
        Benefit benefit1("GPS", 100.0);
        Benefit benefit2("Insurance", 200.0);
        vector<Benefit> benefits = { benefit1, benefit2 };

        string licensePlate = "123-ABC";
        string type = sedan;
        int numberOfSeats = 5;

        Car myCar(licensePlate, type, numberOfSeats, benefits);
        TheRide myRide("RIDE001", "Location A", "Location B", "11/12/2024", 50.0, 10, myCar);
        TheRideManagement::rides.push_back(myRide);
    }

    if (TheRideManagement::rides.size() != 0)
    {
        sort(TheRideManagement::rides.begin(), TheRideManagement::rides.end(), compare);
        int lower = CustomerTripLookup::lower_bound(TheRideManagement::rides, minPrice);
        int upper = CustomerTripLookup::upper_bound(TheRideManagement::rides, maxPrice);

        // Find the ride.
        for (int i = lower; i < upper; ++i)
        {
            bool matches = true;

            if (!departure.empty() && TheRideManagement::rides[i].getStart_the_ride() != departure) matches = false;
            if (!destination.empty() && TheRideManagement::rides[i].getEnd_the_ride() != destination) matches = false;
            if (!date.empty() && TheRideManagement::rides[i].getDay_start() != date) matches = false;
            if (!vehicleType.empty() && TheRideManagement::rides[i].getCar().getType() != vehicleType) matches = false;

            if (matches)
            {
                CustomerTripLookup::lookpup_customer.push_back(TheRideManagement::rides[i]);
            }
        }
    }

    // Display result.
    cout << "Result :\n";
    cout << "|Numerical order|  ID The Ride |   Day Start    |  Type Car  | Price Ticket | Ticket Remain |\n";
    cout << "|---------------|--------------|----------------|------------|--------------|---------------|\n";

    if (CustomerTripLookup::lookpup_customer.size() * TheRideManagement::rides.size() == 0) 
    {
        cout << "Does not find the ride satisfied your request.\n";
        return;
    }

    for (size_t i = 0; i < CustomerTripLookup::lookpup_customer.size(); i++) {
        cout << "| " << (i + 1) << "               | "
            << CustomerTripLookup::lookpup_customer[i].getId_the_ride() << "      | "
            << CustomerTripLookup::lookpup_customer[i].getDay_start() << "    | "
            << CustomerTripLookup::lookpup_customer[i].getCar().getType() << "     | "
            << CustomerTripLookup::lookpup_customer[i].getPriceBase() << "        | "
            << CustomerTripLookup::lookpup_customer[i].getTicketRemain() << "          |\n";
    }
}