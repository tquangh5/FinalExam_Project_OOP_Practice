#include "Client.h"

Client::Client() : name(""), hotline(""), email("") {}
Client::Client(const string& client_name, const string& client_hotline, const string& client_email)
	: name(client_name), hotline(client_hotline), email(client_email) {
}

string Client::getName()  
{
    return name;
}
void Client::setName(const string& newName) 
{
    name = newName;
}

string Client::getHotline() 
{
    return hotline;
}
void Client::setHotline(const string& newHotline) 
{
    hotline = newHotline;
}

string Client::getEmail() 
{
    return email;
}
void Client::setEmail(const string& newEmail) 
{
    email = newEmail;
}

istream& operator >> (istream& is, Client& target)
{
	cout << "Enter your name : ";
	getline(is, target.name);
	cout << "Enter your hotline : ";
	getline(is, target.hotline);
	cout << "Enter your email : ";
	getline(is, target.email);

	return is;
}
ostream& operator << (ostream& os, const Client& target)
{
	os << "Your name : " << target.name << '\n';
	os << "Your hotline : " << target.hotline << '\n';
	os << "Your email : " << target.email << '\n';

	return os;
}
Client& Client::operator=(const Client& other) 
{
	if (this != &other) 
	{ 
		name = other.name;
		hotline = other.hotline;
		email = other.email;
	}
	return *this;
}
bool operator==(const Client& c1, const Client& c2)
{
	return c1.name == c2.name &&
		c1.hotline == c2.hotline &&
		c1.email == c2.email;
}