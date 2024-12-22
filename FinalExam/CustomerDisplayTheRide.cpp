#include "CustomerDisplayTheRide.h"

vector<TheRide> CustomerDisplayTheRide::save_choose_user;
void CustomerDisplayTheRide::customer_display_the_ride()
{
	if (TheRideManagement::rides.size() == 0)
	{
		Benefit benefit1("GPS", 100.0);
		Benefit benefit2("Insurance", 200.0);
		vector<Benefit> benefits = { benefit1, benefit2 };

		string licensePlate = "123-ABC";
		string type = "Sedan";
		int numberOfSeats = 5;

		Car myCar(licensePlate, type, numberOfSeats, benefits);
		TheRide myRide("RIDE001", "Location A", "Location B", "11/12/2024", 50.0, 10, myCar);
		TheRideManagement::rides.push_back(myRide);
	}
	cout << "Which the ride do you choose ? ";
	int your_choose;
	cin >> your_choose;
	cin.ignore();

	save_choose_user.push_back(CustomerTripLookup::lookpup_customer[your_choose - 1]);

	cout << "Information the ride " << CustomerTripLookup::lookpup_customer[your_choose - 1].getId_the_ride() << " : \n";
	cout << "1.Basic information : \n";
	cout << " ID the ride : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getId_the_ride() << "\n";
	cout << " Start location : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getStart_the_ride() << "\n";
	cout << " End location : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getEnd_the_ride() << "\n";
	cout << " Day start : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getDay_start() << " " << "22:00\n";
	cout << " Estimated date of arrival : " << "12/03/2024" << " " << "09:00\n";
	cout << " Basic price : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getPriceBase() << "\n";
	cout << " Ticket remain : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getTicketRemain() << "\n";

	cout << "2.Ticket information : \n";
	cout << " Type car : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getCar().getType() << "\n";
	cout << " License plate car : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getCar().getLicense_plate() << "\n";
	cout << " Number of seat : " << CustomerTripLookup::lookpup_customer[your_choose - 1].getCar().getNumber_of_seats() << "\n";
	cout << " Benefit : \n";
	for (auto x : CustomerTripLookup::lookpup_customer[your_choose - 1].getCar().getBenefit())
	{
		cout << "  - " << x.getNameBenefit() << "\n";
	}
	cout << "3.Other information : \n";
	cout << "  Trip itinerary : \n";
	cout << " - " << CustomerTripLookup::lookpup_customer[your_choose - 1].getStart_the_ride() << " 22:00\n";
	cout << " - " << "DA NANG " << "02:00(break time)\n";
	cout << " - " << "BINH DINH " << "07:00(break time)\n";
	cout << " - " << CustomerTripLookup::lookpup_customer[your_choose - 1].getEnd_the_ride() << " 09:00\n";
	cout << "Luggage regulations: Each passenger is allowed to bring up to 20kg of luggage.\n";
	cout << "Cancellation policy: Cancellation before 24 hours of departure: 50% refund of ticket price.\n";
	cout << "Contact information for the garage: 0965308445.\n";

	cout << "Book ticket " << CustomerTripLookup::lookpup_customer[your_choose - 1].getId_the_ride() << "\n";
}
