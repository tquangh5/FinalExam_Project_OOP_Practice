#include "Ticket.h"

Ticket::Ticket() : id_ticket(""), status_ticket(""), client(), the_ride(), price_ticket(0.0), benefit_user() {}
Ticket::Ticket(const string& id, const string& status, const Client& ticket_client, const TheRide& ride, const double& price, const vector<Benefit>& benefits)
    : id_ticket(id), status_ticket(status), client(ticket_client), the_ride(ride), price_ticket(price), benefit_user(benefits) {
}
string Ticket::getIdTicket()
{
    return id_ticket;
}
void Ticket::setIdTicket(const string& id) 
{
    id_ticket = id;
}

string Ticket::getStatusTicket() 
{
    return status_ticket;
}

void Ticket::setStatusTicket(const string& status) 
{
    status_ticket = status;
}

Client Ticket::getClient() 
{
    return client;
}

void Ticket::setClient(const Client& c) 
{
    client = c;
}

TheRide Ticket::getTheRide() 
{
    return the_ride;
}

void Ticket::setTheRide(const TheRide& ride) 
{
    the_ride = ride;
}

double Ticket::getPriceTicket() 
{
    return price_ticket;
}

void Ticket::setPriceTicket(double price) 
{
    price_ticket = price;
}

vector<Benefit> Ticket::getBenefitUser() 
{
    return benefit_user;
}
void Ticket::setBenefitUser(const vector<Benefit>& benefits) 
{
    benefit_user = benefits;
}

void Ticket::total_price_ticket()
{
	double total = the_ride.getPriceBase();
    if (benefit_user.size() != 0)
    {
        for (Benefit ti : benefit_user)
        {
            total += ti.getPriceBenefit();
        }
    }
	this->price_ticket = total;
}
void Ticket::pushBenefit(const Benefit& ben)
{
	benefit_user.push_back(ben);
}

istream& operator>>(istream& is, Ticket& ticket) 
{
    cout << "Enter Ticket ID: ";
    getline(is, ticket.id_ticket);
    cout << "Enter Ticket Status: ";
    getline(is, ticket.status_ticket);

    cout << "Enter Client Information:\n";
    is >> ticket.client;

    cout << "Enter Ride Information:\n";
    is >> ticket.the_ride;

    cout << "Enter Ticket Price: ";
    is >> ticket.price_ticket;
    is.ignore();

    int benefitCount;
    cout << "Enter number of Benefits: ";
    is >> benefitCount;
    ticket.benefit_user.clear(); // Clear any existing benefits
    for (int i = 0; i < benefitCount; ++i) 
    {
        Benefit benefit;
        cout << "Enter Benefit " << i + 1 << ":\n";
        is >> benefit;
        ticket.benefit_user.push_back(benefit);
    }

    return is;
}

ostream& operator<<(ostream& os, const Ticket& ticket) 
{
    os << "Ticket ID: " << ticket.id_ticket << endl;
    os << "Ticket Status: " << ticket.status_ticket << endl;
    os << "Client Information:\n" << ticket.client;
    os << "Ride Information:\n" << ticket.the_ride;
    os << "Ticket Price: " << ticket.price_ticket << endl;

    os << "Benefits:\n";
    for (size_t i = 0; i < ticket.benefit_user.size(); ++i) 
    {
        os << "  Benefit " << i + 1 << ": " << ticket.benefit_user[i] << endl;
    }

    return os;
}