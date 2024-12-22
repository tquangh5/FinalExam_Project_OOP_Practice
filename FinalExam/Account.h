#pragma once
#include "Client.h"

class Account 
{
protected:
    Client user_client;
    string address;
    string birthday;
    string username;
    string password;
public:
    Account();
    Account( const Client&, const string&, const string&, const string& , const string&);

    // Getter
    Client getUserClient();
    string getAddress();
    string getBirthday();
    string getUsername();
    string getPassword();

    // Setter
    void setUserClient(const Client&);
    void setAddress(const string&);
    void setBirthday(const string&);
    void setUsername(const string&);
    void setPassword(const string&);

    friend istream& operator>>(istream&, Account&);
    friend ostream& operator<<(ostream&, const Account&);

    void editAccount();
    void changePassword();
    void deleteAccount();
};

