#pragma once
#include "Ticket.h"

class TicketManagement 
{
//private:
//    static vector<Ticket> tickets;
public:
    static vector<Ticket> tickets;
    // Add
    static void addTicket(const Ticket& );

    // Display
    static void viewAllTickets();

    // Editor
    static void editTicket(const string& , const string& , const Client&);

    // Cancel
    static void cancelTicket(const string&);

    // Set up.
    static void readFileToTickets();
    static void writeTicketsToFile();

    //System
    static void SystemTicketManagement();
};

