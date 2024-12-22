#pragma once
#include "Car.h"
#include "Client.h"
#include "TheRide.h"
#include "Client.h"

class Ticket
{
private:
	string id_ticket;
	string status_ticket;
	Client client;
	TheRide the_ride;
	double price_ticket;
	vector<Benefit> benefit_user; // user choose.
public:
    Ticket();
    Ticket(const string&, const string&, const Client&, const TheRide&, const double&, const vector<Benefit>&);
  
    string getIdTicket();
    void setIdTicket(const string& );

    string getStatusTicket();
    void setStatusTicket(const string& );

    Client getClient();
    void setClient(const Client& );

    TheRide getTheRide();
    void setTheRide(const TheRide& );

    double getPriceTicket();
    void setPriceTicket(double );

    vector<Benefit> getBenefitUser();
    void setBenefitUser(const vector<Benefit>& );

	void total_price_ticket();
	void pushBenefit(const Benefit&);

    friend istream& operator>>(istream&, Ticket&);
    friend ostream& operator<<(ostream&, const Ticket&);
};

