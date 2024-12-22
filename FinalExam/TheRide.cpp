#include "TheRide.h"

TheRide::TheRide() : id_the_ride(""), start_the_ride(""), end_the_ride(""), day_start(""), price_base(0.0), ticket_remain(0), car() {}
TheRide::TheRide(const string& id, const string& start, const string& end, const string& day, const double& price, const int& tickets, const Car& ride_car)
    : id_the_ride(id), start_the_ride(start), end_the_ride(end), day_start(day), price_base(price), ticket_remain(tickets), car(ride_car) {
}

string TheRide::getId_the_ride() { return id_the_ride; }
void TheRide::setId_the_ride(const string& id) { id_the_ride = id; }

string TheRide::getStart_the_ride() { return start_the_ride; }
void TheRide::setStart_the_ride(const string& start) { start_the_ride = start; }

string TheRide::getEnd_the_ride() { return end_the_ride; }
void TheRide::setEnd_the_ride(const string& end) { end_the_ride = end; }

string TheRide::getDay_start() { return day_start; }
void TheRide::setDay_start(const string& day) { day_start = day; }

double TheRide::getPriceBase() { return price_base; }
void TheRide::setPriceBase(const double& price) { price_base = price; }

int TheRide::getTicketRemain() { return ticket_remain; }
void TheRide::setTicketRemain(const int& ticket) { ticket_remain = ticket; }

Car TheRide::getCar() { return car;  }
void TheRide::setCar( Car _car)
{
    car.setLicense_plate(_car.getLicense_plate());
    car.setType(_car.getType());
    car.setNumber_of_seats(_car.getNumber_of_seats());
    car.setBenefit(_car.getBenefit());
}

istream& operator>>(istream& is, TheRide& ride) 
{
    cout << "Enter ride ID: ";
    getline(is, ride.id_the_ride);
    cout << "Enter start location: ";
    getline(is, ride.start_the_ride);
    cout << "Enter end location: ";
    getline(is, ride.end_the_ride);
    cout << "Enter day to start : ";
    getline(is, ride.day_start);
    cout << "Enter base price: ";
    is >> ride.price_base;
    is.ignore();
    cout << "Enter tickets remaining: ";
    is >> ride.ticket_remain;
    is.ignore();
    cout << "Enter car details:\n";
    is >> ride.car;

    return is;
}

ostream& operator<<(ostream& os, const TheRide& ride) 
{
    os << "Ride ID: " << ride.id_the_ride << "\n";
    os << "Start Location: " << ride.start_the_ride << "\n";
    os << "End Location: " << ride.end_the_ride << "\n";
    os << "Day to start : " << ride.day_start << '\n';
    os << "Base Price: " << ride.price_base << "\n";
    os << "Tickets Remaining: " << ride.ticket_remain << "\n";
    os << "Car details : \n";
    os << ride.car;

    return os;
}
