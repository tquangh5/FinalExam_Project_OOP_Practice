#include "TicketManagementCustomer.h"

void TicketManagementCustomer::displayAllTickets()
{
	if (TicketManagement::tickets.size() == 0)
	{
		cout << "LIST EMPTY\n";
		return;
	}
	for (auto x : TicketManagement::tickets)
	{
		cout << "ID : " << x.getIdTicket() << '\n';
		cout << "The ride : " << x.getTheRide() << '\n';
		cout << "Client : " << x.getClient() << '\n';
		cout << "Status : " << x.getStatusTicket() << '\n';
		cout << "Price : " << x.getPriceTicket() << '\n';
	}
}
void TicketManagementCustomer::supportDetails(Ticket x)
{
	cout << "ID : " << x.getIdTicket() << '\n';
	cout << "The ride : " << x.getTheRide() << '\n';
	cout << "Client : " << x.getClient() << '\n';
	cout << "Status : " << x.getStatusTicket() << '\n';
	cout << "Price : " << x.getPriceTicket() << '\n';
}
void TicketManagementCustomer::editClient(Client a)
{
	for (auto x : TicketManagement::tickets)
	{
		if (a == x.getClient())
		{
			cout << "Enter information client you want to use.\n";
			Client b;
			cin >> b;
			a = b;
			cout << "Edit sucessfully.\n";
			return;
		}
	}
	cout << "Does not exist.\n";
}
void TicketManagementCustomer::SystemDetailsTicket()
{
	if (TicketManagement::tickets.size() == 0)
	{
		cout << "LIST EMPTY\n";
		return;
	}
	this_thread::sleep_for(chrono::milliseconds(1800));
	cout << "List ticket : \n";
	cout << "|Numerical order|  ID The Ride |   Day Start    |  Type Car  | Price Ticket |\n";
	cout << "|---------------|--------------|----------------|------------|--------------|\n";
	for (size_t i = 0; i < TicketManagement::tickets.size(); i++)
	{
		cout << "| " << (i + 1) << "               | "
			<< TicketManagement::tickets[i].getIdTicket() << "      | "
			<< TicketManagement::tickets[i].getTheRide().getDay_start() << "    | "
			<< TicketManagement::tickets[i].getTheRide().getCar().getType() << "     | "
			<< TicketManagement::tickets[i].getPriceTicket() << "        | " << "\n";
	}

	cout << "Please select a ticket to be able to operate on it.\n";
	int idx;
	cin >> idx;
	cin.ignore();
	cout << "Infomation ticket which you choose : \n";
	TicketManagementCustomer::supportDetails(TicketManagement::tickets[idx - 1]);

	while (true)
	{
		cout << "Choose operation.\n";
		cout << "1. Cancel ticket.\n";
		cout << "2. Edit information.\n";
		cout << "3. Stop here.\n";

		int choose;
		cin >> choose;
		cin.ignore();

		if (choose == 1)
		{
			TicketManagement::cancelTicket(TicketManagement::tickets[idx - 1].getIdTicket());
		}
		if (choose == 2)
		{
			while (true)
			{
				cout << "What information do you want to change?.\n";
				cout << "4. Edit client.\n";
				cout << "5. Change seats (if applicable).\n";
				cout << "6. Add or remove add-ons.\n";
				cout << "7. Change payment method (if ticket has not been paid).\n";
				cout << "8. GO OUT.\n";

				int ch;
				cin >> ch;
				cin.ignore();

				if (ch == 4)
				{
					TicketManagementCustomer::editClient(TicketManagement::tickets[idx - 1].getClient());
				}
				if (ch == 5)
				{
					string name_seat;
					getline(cin, name_seat);
					cout << "Edit sucessfully.\n";
				}
				if (ch == 6)
				{
					int m;
					cin >> m;
					cin.ignore();
					cout << "Enter 9 to add benefit.\n";
					cout << "Enter 10 to remove benefit.\n";
					if (m == 9)
					{
						Benefit x;
						cin >> x;
						TicketManagement::tickets[idx - 1].getBenefitUser().push_back(x);
						cout << "Add sucessfully.\n";
					}
					else if (m == 10)
					{
						TicketManagement::tickets[idx - 1].getBenefitUser().pop_back();
					}
				}
				if (ch == 7)
				{
					cout << "Enter payment method you want to change.\n";
					string name;
					getline(cin, name);
					cout << "Change sucessfully.\n";
				}
				if (ch == 8)
				{
					cout << "SEE YOU AGAIN.\n";
					return;
				}
			}
		}
	}
}