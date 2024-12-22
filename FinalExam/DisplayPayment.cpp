#include "DisplayPayment.h"
#include "DesigneStrategy.h"

void DisplayPayment::PAYS()
{
	DesigneStrategy client;

	CashOnDelivery cashPayment;
	PayByCreditCard creditCardPayment;
	PaymentByBankTransfer bankTransferPayment;
	PaymentByEWallet eWalletPayment;

	while (true)
	{
		cout << "Your payments.\n";
		cout << "Enter 1 to use Credit card.\n";
		cout << "Enter 2 to use Bank transfer.\n";
		cout << "Enter 3 to use Electronic money.\n";
		cout << "Enter 4 to use Cash on delivery.\n";
		cout << "Enter 5 to close system payment\n";
		
		int choice;
		cin >> choice;
		cin.ignore();

		if (choice == 1)
		{
			/*PayByCreditCard* x = new PayByCreditCard();
			x->PaymentMethod();
			delete x;*/
			client.SetPaymentMethod(&creditCardPayment);
			this_thread::sleep_for(chrono::milliseconds(1800));
			client.ExecutePayment();
		}
		if (choice == 2)
		{
			/*PaymentByBankTransfer* x = new PaymentByBankTransfer();
			x->PaymentMethod();
			delete x;*/
			client.SetPaymentMethod(&bankTransferPayment);
			this_thread::sleep_for(chrono::milliseconds(1800));
			client.ExecutePayment();
		}
		if (choice == 3)
		{
			/*PaymentByEWallet* x = new PaymentByEWallet();
			x->PaymentMethod();
			delete x;*/
			client.SetPaymentMethod(&eWalletPayment);
			this_thread::sleep_for(chrono::milliseconds(1800));
			client.ExecutePayment();
		}
		if (choice == 4)
		{
			/*CashOnDelivery* x = new CashOnDelivery();
			x->PaymentMethod();
			delete x;*/
			client.SetPaymentMethod(&cashPayment);
			this_thread::sleep_for(chrono::milliseconds(1800));
			client.ExecutePayment();
		}
		if (choice == 5)
		{
			cout << "SEE YOU AGAIN.\n";
			return;
		}

	}
}
