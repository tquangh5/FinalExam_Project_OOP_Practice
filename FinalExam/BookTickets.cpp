#include "BookTickets.h"
#include "CustomerDisplayTheRide.h"
#include "TicketManagement.h"

void BookTickets::booking()
{
	cout << "Enter number of ticket : ";
	int number_ticket;
	cin >> number_ticket;
	cin.ignore();

	for (int i = 0; i < number_ticket; i++)
	{
		Ticket newTicket;

		cout << "Information customer " << i + 1 << "-th : \n";
		Client client_x;
		cin >> client_x;

		cout << "Choose your seat : \n";
		ifstream ifs("FolderContainFilesSupport/Seating.txt");
		if (!ifs)
		{
			cout << "NOT OPEN FILE.\n";
			return;
		}
		while (!ifs.eof())
		{
			string temp;
			getline(ifs, temp);
			
			stringstream ss(temp);
			string word;
			while (ss >> word)
			{
				cout << word << " ";
			}
			cout << '\n';
		}
		cout << "Based on the list of seats, enter the seat you want to sit in.\n";
		string seat;
		cout << "Choose a seat for passengers " << i + 1 << " : ";
		getline(cin, seat);
		cout << "Choose sucessfully.\n";

		cout << "Select utility : \n";
		vector<Benefit> newBenefit;
		while (true)
		{
			cout << "Enter 1 to use WIFI(100000VND).\n";
			cout << "Enter 2 to use COLD WATER(70000VND).\n";
			cout << "Enter 3 to use HOT WATER(50000VND).\n";
			cout << "Enter 4 to exit additional system utilities.\n";

			int choose;
			cin >> choose;
			if (choose == 1)
			{
				Benefit x("WIFI", 100000);
				newBenefit.push_back(x);
				newTicket.pushBenefit(x);
				cout << "Select sucessfully.\n";
			}
			if (choose == 2)
			{
				Benefit x("COLD WATER", 70000);
				newBenefit.push_back(x);
				newTicket.pushBenefit(x);
				cout << "Select sucessfully.\n";
			}
			if (choose == 3)
			{
				Benefit x("HOT WATER", 50000);
				newBenefit.push_back(x);
				newTicket.pushBenefit(x);
				cout << "Select sucessfully.\n";
			}
			if (choose == 4)
			{
				break;
			}
		}
		newTicket.total_price_ticket();

		// Compile;
		if (CustomerDisplayTheRide::save_choose_user.size() != 0)
		{
			newTicket.setIdTicket(seat);
			newTicket.setStatusTicket("BOOKED");
			newTicket.setClient(client_x);
			newTicket.setTheRide(CustomerDisplayTheRide::save_choose_user[0]);
		}

		if (CustomerDisplayTheRide::save_choose_user.size() != 0)
		{
			cout << "VERTIFY TICKET.\n";
			cout << "The ride : \n" << CustomerDisplayTheRide::save_choose_user[0];
			cout << CustomerDisplayTheRide::save_choose_user[0].getStart_the_ride() << " - ";
			cout << CustomerDisplayTheRide::save_choose_user[0].getEnd_the_ride() << " - ";
			cout << CustomerDisplayTheRide::save_choose_user[0].getDay_start() << '\n';
		}

		cout << "Passenger " << i + 1 << ":\n";
		cout << client_x;
		cout << "Seat " << seat << '\n';

		cout << "Benefits choose : \n";
		for (int j = 0; j < newBenefit.size(); j++)
		{
			cout << newBenefit[i].getNameBenefit() << "\n";
		}
		cout << "Total money : " << newTicket.getPriceTicket() << "VND\n";

		cout << "Vertify ? (Y/N) : ";
		char ver;
		cin >> ver;
		cin.ignore();
		if (ver == 'Y')
		{
			cout << "BOOKED SUCESSFULLY.\n";
			TicketManagement::tickets.push_back(newTicket);

		}
		else
		{
			cout << "CANCELD.\n";
		}
	}
}
