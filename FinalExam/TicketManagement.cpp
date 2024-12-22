#include "TicketManagement.h"

vector<Ticket> TicketManagement::tickets;
void TicketManagement::addTicket(const Ticket& ticket) 
{
    TicketManagement::tickets.push_back(ticket);
}
void TicketManagement::viewAllTickets() 
{
    if (TicketManagement::tickets.empty())
    {
        cout << "No tickets available." << endl;
        return;
    }
    for (auto ticket : TicketManagement::tickets)
    {
        cout << "Ticket ID: " << ticket.getIdTicket() << endl; 
        cout << "Status: " << ticket.getStatusTicket() << endl; 
        cout << "------------------------" << endl;
    }
}
void TicketManagement::editTicket(const string& id_ticket, const string& new_status, const Client& new_client) 
{
    for (auto& ticket : TicketManagement::tickets)
    {
        if (ticket.getIdTicket() == id_ticket) 
        { 
            ticket.setStatusTicket(new_status);
            ticket.setClient(new_client);
            cout << "Ticket updated successfully!" << endl;
            return;
        }
    }
    cout << "Ticket not found!" << endl;
}

void TicketManagement::cancelTicket(const string& id_ticket) 
{
    for (auto it = TicketManagement::tickets.begin(); it != TicketManagement::tickets.end(); ++it)
    {
        if (it->getIdTicket() == id_ticket) 
        { 
            TicketManagement::tickets.erase(it);
            //it->setStatusTicket("CANCELED");
            cout << "Ticket canceled successfully!" << endl;
            return;
        }
    }
    cout << "Ticket not found!" << endl;
}

void TicketManagement::readFileToTickets()
{ 
    ifstream ifs("FolderContainFilesSupport/ListTickets.txt");
    if (!ifs)
    {
        cout << "NOT OPEN FILE.\n";
        return;
    }
    while (!ifs.eof())
    {

        string id_ticket;
        getline(ifs, id_ticket);
        string status_ticket;
        getline(ifs, status_ticket);

        //Client.
        string name_client;
        getline(ifs, name_client);
        string hotline_client;
        getline(ifs, hotline_client);
        string email_client;
        getline(ifs, email_client);
        Client x(name_client, hotline_client, email_client);
        //
        
        //TheRide the_ride;
        string id_the_ride;
        getline(ifs, id_the_ride);
        string start_the_ride;
        getline(ifs, start_the_ride);
        string end_the_ride;
        getline(ifs, end_the_ride);
        string day_start;
        getline(ifs, day_start);
        double price_base;
        ifs >> price_base;
        ifs.ignore();
        int ticket_remain;
        ifs >> ticket_remain;
        ifs.ignore();


        string license_plate;
        getline(ifs, license_plate);
        string type;
        getline(ifs, type);

        int number_of_seats;
        ifs >> number_of_seats;
        ifs.ignore();

        vector<Benefit> temp_benefit;

        int size_benefit;
        ifs >> size_benefit;
        ifs.ignore();

        for (int i = 0; i < size_benefit; i++)
        {
            string name_benefit;
            getline(ifs, name_benefit);
            double price_benefit;
            ifs >> price_benefit;
            ifs.ignore();

            Benefit x(name_benefit, price_benefit);
            temp_benefit.push_back(x);
        }
        Car X(license_plate, type, number_of_seats, temp_benefit);
        TheRide temp(id_the_ride, start_the_ride, end_the_ride, day_start, price_base, ticket_remain, X);

        double price_ticket;
        ifs >> price_ticket;
        ifs.ignore();

        vector<Benefit> temp_benefit_user;

        int size_benefit_user;
        ifs >> size_benefit_user;
        ifs.ignore();

        for (int i = 0; i < size_benefit_user; i++)
        {
            string name_benefit;
            getline(ifs, name_benefit);
            double price_benefit;
            ifs >> price_benefit;
            ifs.ignore();

            Benefit x(name_benefit, price_benefit);
            temp_benefit_user.push_back(x);
        }
        Ticket tic(id_ticket, status_ticket, x, temp, price_ticket, temp_benefit_user);
        TicketManagement::tickets.push_back(tic);
    }
    ifs.close();
}

void TicketManagement::writeTicketsToFile()
{
    ofstream ofs("FolderContainFilesSupport/ListTickets.txt", ios :: app);
    if (!ofs)
    {
        cout << "NOT OPEN FILE.\n";
        return;
    }
    for (int i = 0; i < TicketManagement::tickets.size(); i++)
    {
        ofs << TicketManagement::tickets[i].getIdTicket() << "\n";
        ofs << TicketManagement::tickets[i].getStatusTicket() << "\n";
        //Client;
        ofs << TicketManagement::tickets[i].getClient().getName() << "\n";
        ofs << TicketManagement::tickets[i].getClient().getHotline() << "\n";
        ofs << TicketManagement::tickets[i].getClient().getEmail() << "\n";
        //The Ride
        ofs << TicketManagement::tickets[i].getTheRide().getId_the_ride() << "\n";
        ofs << TicketManagement::tickets[i].getTheRide().getStart_the_ride() << "\n";
        ofs << TicketManagement::tickets[i].getTheRide().getEnd_the_ride() << "\n";
        ofs << TicketManagement::tickets[i].getTheRide().getDay_start() << "\n";
        ofs << TicketManagement::tickets[i].getTheRide().getPriceBase() << "\n";
        ofs << TicketManagement::tickets[i].getTheRide().getTicketRemain() << "\n";

        ofs << TicketManagement::tickets[i].getTheRide().getCar().getLicense_plate() << "\n";
        ofs << TicketManagement::tickets[i].getTheRide().getCar().getType() << "\n";
        ofs << TicketManagement::tickets[i].getTheRide().getCar().getNumber_of_seats() << "\n";

        int size_benefit = TicketManagement::tickets[i].getTheRide().getCar().getBenefit().size();
        ofs << size_benefit << "\n";
        for (int i = 0; i < size_benefit; i++)
        {
            ofs << TicketManagement::tickets[i].getTheRide().getCar().getBenefit()[i].getNameBenefit() << "\n";
            ofs << TicketManagement::tickets[i].getTheRide().getCar().getBenefit()[i].getPriceBenefit() << "\n";
        }
        // price_ticket
        ofs << TicketManagement::tickets[i].getPriceTicket() << "\n";
        // vector<Benefit> benefit_user;
        int _size = TicketManagement::tickets[i].getBenefitUser().size();
        ofs << _size << "\n";
        for (int j = 0; j < _size; j++)
        {
            ofs << TicketManagement::tickets[i].getBenefitUser()[j].getNameBenefit() << "\n";
            ofs << TicketManagement::tickets[i].getBenefitUser()[j].getPriceBenefit() << "\n";
        }
    }
    ofs.close();
}

void TicketManagement::SystemTicketManagement()
{
    if (TicketManagement::tickets.size() == 0)
    {
        //TicketManagement::readFileToTickets();
    }
    while (true)
    {
        cout << "Your options : \n";
        cout << "Enter 1 to add a ticket.\n";
        cout << "Enter 2 to display all the tickets.\n";
        cout << "Enter 3 to edit a ticket.\n";
        cout << "Enter 4 to delete a ticket.\n";
        cout << "Enter 5 to stop here.\n";

        int choose_ticket_management;
        cin >> choose_ticket_management;
        cin.ignore();

        if (choose_ticket_management == 1)
        {
            cout << "Enter information of the ticket you want to add.\n";
            Ticket x;
            cin >> x;
            TicketManagement::addTicket(x);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "Add sucessfully.\n";
        }
        if (choose_ticket_management == 2)
        {
            cout << "Below list the ticket.\n";
            this_thread::sleep_for(chrono::milliseconds(1800));
            TicketManagement::viewAllTickets();
        }
        if (choose_ticket_management == 3)
        {
            cout << "Enter new id of ticket you want to edit.\n";
            string id;
            getline(cin, id);
            cout << "Enter new status.\n";
            string status;
            getline(cin, status);
            cout << "Enter new client.\n";
            Client x;
            cin >> x;
            this_thread::sleep_for(chrono::milliseconds(1800));
            TicketManagement::editTicket(id, status, x);
        }
        if (choose_ticket_management == 4)
        {
            cout << "Enter id of ticket you want to delete.\n";
            string id;
            getline(cin, id);

            this_thread::sleep_for(chrono::milliseconds(1800));
            TicketManagement::cancelTicket(id);
        }
        if (choose_ticket_management == 5)
        {
            cout << "SEE YOU AGAIN.\n";

            this_thread::sleep_for(chrono::milliseconds(1800));
            //TicketManagement::writeTicketsToFile();
            return;
        }
    }
}