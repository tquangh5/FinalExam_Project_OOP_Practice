#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

class Client
{
private:
	string name;
	string hotline;
	string email;
public:
	Client();
	Client(const string&, const string&, const string&);

    string getName();
    void setName(const string& );

    string getHotline();
    void setHotline(const string&);

    string getEmail();
    void setEmail(const string&);

	friend istream& operator >> (istream&, Client&);
	friend ostream& operator << (ostream&, const Client&);
	Client& operator=(const Client&);
	friend bool operator==(const Client& , const Client&);
};

