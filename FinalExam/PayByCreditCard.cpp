#include "PayByCreditCard.h"

void PayByCreditCard::PaymentMethod()
{
	cout << "Enter number card : ";
	string number;
	getline(cin, number);
	cout << "Enter expiration date (mm/yy) : ";
	string date;
	getline(cin, date);
	cout << "Enter ID CVV : ";
	string CVV;
	getline(cin, CVV);

	cout << "RECEIVED, THANKS.\n";

}