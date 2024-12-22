#include "SystemFunctionCustomer.h"

SystemFunctionCustomer* SystemFunctionCustomer::instance_customer = nullptr;
SystemFunctionCustomer* SystemFunctionCustomer::GetInstanceCustomer()
{
	if (instance_customer == NULL)
	{
		instance_customer = new SystemFunctionCustomer();
	}
	return instance_customer;
}
void SystemFunctionCustomer::DeleteInstanceCustomer()
{
	if (instance_customer)
	{
		delete instance_customer;
		instance_customer = NULL;
	}
}
void SystemFunctionCustomer::FunctionsCustomer()
{
	cout << "Welcome to functions of customer.\n";
	SystemFunctionCustomer* object = SystemFunctionCustomer::GetInstanceCustomer();
	while (true)
	{
		cout << "Function Of Customer.\n";
		cout << "Enter 1 to loop up and display the ride and booking ticket.\n";
		cout << "Enter 2 to payment.\n";
		cout << "Enter 3 to display all ticket.\n";
		cout << "Enter 4 to watch details a ticket.\n";
		cout << "Enter 5 to edit information account.\n";
		cout << "Enter 6 to change password.\n";
		cout << "Enter 7 to delete account.\n";
		cout << "Enter 8 to stop here.\n";

		int customer_choose;
		cin >> customer_choose;
		cin.ignore();

		if (customer_choose == 1)
		{
			object->CustomerTripLookup::LoopUp();
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->CustomerDisplayTheRide::customer_display_the_ride();
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->BookTickets::booking();
		}
		if (customer_choose == 2)
		{
			object->PAYS();
		}
		if (customer_choose == 3)
		{
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->TicketManagementCustomer::displayAllTickets();
		}
		if (customer_choose == 4)
		{
			object->TicketManagementCustomer::SystemDetailsTicket();
		}
		if (customer_choose == 5)
		{
			object->Account::editAccount();
		}
		if (customer_choose == 6)
		{
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->Account::changePassword();
		}
		if (customer_choose == 7)
		{
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->Account::deleteAccount();
		}
		if (customer_choose == 8)
		{
			cout << "GOODBYE.\n";
			return;
		}
	}
}