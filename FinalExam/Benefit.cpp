#include "Benefit.h"

Benefit::Benefit() : name_benefit(""), price_benefit(0.0) {}
Benefit::Benefit(const string& name, const double& price) : name_benefit(name), price_benefit(price) {}

string Benefit::getNameBenefit()
{
	return name_benefit;
}
void Benefit::setNameBenefit(const string& name)
{
	name_benefit = name;
}
double Benefit::getPriceBenefit()
{
	return price_benefit;
}
void Benefit::setPriceBenefit(const double& price)
{
	price_benefit = price;
}

istream& operator >> (istream& is, Benefit& target)
{
	cout << "Name of benefit : ";
	getline(is, target.name_benefit);
	cout << "Price of benefit : ";
	cin >> target.price_benefit;
	is.ignore();

	return is;
}
ostream& operator << (ostream& os, const Benefit& target)
{
	os << "Name of benefit : " << target.name_benefit << '\n';
	os << "Price of benefit : " << target.price_benefit << '\n';

	return os;
}

