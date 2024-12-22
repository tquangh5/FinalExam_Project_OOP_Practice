#include "Car.h"

Car::Car() : license_plate(""), type(""), number_of_seats(0), benefit() {}
Car::Car(const string& plate, const string& car_type, const int& seats, const vector<Benefit>& benefits)
    : license_plate(plate), type(car_type), number_of_seats(seats), benefit(benefits) {
}

// Getters and setters
string Car::getLicense_plate() 
{
    return license_plate;
}

void Car::setLicense_plate(const string& lp) {

    license_plate = lp;
}

string Car::getType() {
    return type;
}

void Car::setType(const string& t) 
{
    type = t;
}

int Car::getNumber_of_seats() 
{
    return number_of_seats;
}

void Car::setNumber_of_seats(const int& nos) 
{
    number_of_seats = nos;
}

vector<Benefit> Car::getBenefit() 
{
    return benefit;
}

void Car::setBenefit(const vector<Benefit>& b) 
{
    benefit = b;
}

istream& operator>>(istream& is, Car& car) 
{
    cout << "Enter license plate: ";
    getline(is, car.license_plate);
    cout << "Enter type: ";
    getline(is, car.type);
    cout << "Enter number of seats: ";
    is >> car.number_of_seats;
    is.ignore();
    int n;
    cout << "Enter number of benefits: ";
    is >> n;
    is.ignore();

    car.benefit.clear();
    for (int i = 0; i < n; ++i) 
    {
        Benefit b;
        cout << "Enter benefit " << i + 1 << ": \n";
        is >> b;
        car.benefit.push_back(b);
    }
    return is;
}

ostream& operator<<(ostream& os, const Car& car) 
{
    os << "License Plate: " << car.license_plate << '\n';
    os << "Type: " << car.type << '\n';
    os << "Number of Seats: " << car.number_of_seats << '\n';
    os << "Benefits: \n";
    for (size_t i = 0; i < car.benefit.size(); ++i) 
    {
        os << "Benefit " << i + 1 << "-th\n";
        os << car.benefit[i];
    }
    os << '\n';
    return os;
}
Car& Car::operator=(const Car& other)
{
    if (this != &other)
    {
        license_plate = other.license_plate;
        type = other.type;
        number_of_seats = other.number_of_seats;
        benefit = other.benefit;
    }
    return *this;
}
