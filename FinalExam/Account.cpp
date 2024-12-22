#include "Account.h"

Account::Account()
    : user_client(Client()), address(""), birthday(""), username(""), password("") {}

Account::Account(const Client& client, const string& addr, const string& bday, const string& user, const string& pass)
    : user_client(client), address(addr), birthday(bday), username(user), password(pass) {}

Client Account::getUserClient() 
{
    return user_client;
}

string Account::getAddress() 
{
    return address;
}

string Account::getBirthday() 
{
    return birthday;
}

string Account::getUsername() 
{
    return username;
}

string Account::getPassword() 
{
    return password;
}

void Account::setUserClient(const Client& client)
{
    user_client = client;
}

void Account::setAddress(const string& addr)
{
    address = addr;
}

void Account::setBirthday(const string& bday)
{
    birthday = bday;
}

void Account::setUsername(const string& user)
{
    username = user;
}
void Account::setPassword(const string& pass)
{
    password = pass;
}

istream& operator>>(istream& in, Account& account) 
{
    cout << "Enter your information.\n";
    in >> account.user_client;
    cout << "Enter address: ";
    in >> account.address;
    cout << "Enter birthday: ";
    in >> account.birthday;
    cout << "Enter username: ";
    in >> account.username;
    cout << "Enter password: ";
    in >> account.password;
    return in;
}

ostream& operator<<(ostream& out, const Account& account) 
{
    out << "You : " << account.user_client << '\n';
    out << "Address: " << account.address << '\n';
    out << "Birthday: " << account.birthday << '\n';
    out << "Username: " << account.username << '\n';
    out << "Password: " << account.password << '\n';
    return out;
}

void Account::editAccount()
{
    cout << "Enter new name.\n";
    string s;
    getline(cin, s);
    cout << "Enter new hotline.\n";
    string f;
    getline(cin, f);
    cout << "Enter new email.\n";
    string g;
    getline(cin, g);
    cout << "Enter new address.\n";
    string p;
    getline(cin, p);

    this->user_client.setName(s);
    this->user_client.setHotline(f);
    this->user_client.setEmail(f);
    this->setAddress(p);
    cout << "Change sucessully.\n";
}
void Account::changePassword()
{
    cout << "Enter old password. \n";
    string oldpass;
    getline(cin, oldpass);

    cout << "Enter new password. \n";
    string newpass;
    getline(cin, newpass);
    cout << "Enter new password repeat. \n";
    string temp;
    getline(cin, temp);

    while (temp != newpass)
    {
        cout << "Try again...\n";
        getline(cin, newpass);
        getline(cin, temp);
    }
    this->setPassword(temp);
    this_thread::sleep_for(chrono::milliseconds(1800));
    cout << "Change sucessfully.\n";
}
void Account::deleteAccount()
{
    cout << "DELETE SUCESSFULLY.\n";
    return;
}