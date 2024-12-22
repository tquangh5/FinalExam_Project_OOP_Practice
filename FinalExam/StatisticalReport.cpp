#include "StatisticalReport.h"

vector<Ticket> StatisticalReport::tickets; 
vector<Client> StatisticalReport::clients;

// Thong ke doang thu theo ngay
double StatisticalReport::revenueByDate(const string& date) 
{
    double totalRevenue = 0.0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getDay_start() == date) 
        {
            totalRevenue += ticket.getPriceTicket();
        }
    }
    return totalRevenue;
}

// Thong ke so luong ve ban ra theo ngay
int StatisticalReport::ticketsSoldByDate(const string& date) 
{
    int count = 0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getDay_start() == date) 
        {
            count++;
        }
    }
    return count;
}

// Thong ke so luong khach hang da su dung he thong
int StatisticalReport::totalCustomers() 
{
    // avoid duplicate.
    map<string, bool> uniqueClients;
    for ( auto ticket : tickets) 
    {
        uniqueClients[ticket.getClient().getEmail()] = true;
    }
    return uniqueClients.size();
}

// Thong ke doanh thu theo thang
double StatisticalReport::revenueByMonth(const string& month) 
{
    double totalRevenue = 0.0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getDay_start().substr(3, 2) == month) 
        {
            totalRevenue += ticket.getPriceTicket();
        }
    }
    return totalRevenue;
}

// Thong ke so luong ve ban ra theo thang
int StatisticalReport::ticketsSoldByMonth(const string& month) 
{
    int count = 0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getDay_start().substr(3, 2) == month) 
        {
            count++;
        }
    }
    return count;
}

// Thong ke doanh thu theo nam
double StatisticalReport::revenueByYear(const string& year) 
{
    double totalRevenue = 0.0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getDay_start().substr(6, 4) == year) 
        {
            totalRevenue += ticket.getPriceTicket();
        }
    }
    return totalRevenue;
}

// Thong ke so luong ve ban ra theo nam
int StatisticalReport::ticketsSoldByYear(const string& year)
{
    int count = 0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getDay_start().substr(6, 4) == year) 
        {
            count++;
        }
    }
    return count;
}


// Thong ke doanh thu theo chuyen xe
double StatisticalReport::revenueByRide(const string& rideId) 
{
    double totalRevenue = 0.0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getId_the_ride() == rideId) 
        {
            totalRevenue += ticket.getPriceTicket();
        }
    }
    return totalRevenue;
}

// Thong ke so luong ve ban ra theo chuyen xe
int StatisticalReport::ticketsSoldByRide(const string& rideId) 
{
    int count = 0;
    for ( auto ticket : tickets) 
    {
        if (ticket.getTheRide().getId_the_ride() == rideId) 
        {
            count++;
        }
    }
    return count;
}

void StatisticalReport::SystemStatisticalReport()
{
    while (true)
    {
        cout << "Your options : \n";
        cout << "Enter 1 daily revenue statistics.\n";
        cout << "Enter 2 tatistics of number of tickets sold by day.\n";
        cout << "Enter 3 statistics of the number of customers using the system.\n";
        cout << "Enter 4 monthly revenue statistics.\n";
        cout << "Enter 5 monthly sales statistics.\n";
        cout << "Enter 6 revenue statistics by year.\n";
        cout << "Enter 7 statistics on the number of tickets sold by year.\n";
        cout << "Enter 8 revenue statistics by vehicle.\n";
        cout << "Enter 9 statistics on the number of tickets sold by trip.\n";
        cout << "Enter 10 to break here.\n";

        int choose_statistical_report;
        cin >> choose_statistical_report;
        cin.ignore();

        if (choose_statistical_report == 1)
        {
            cout << "Enter the date you want to revenue.\n";
            string date;
            getline(cin, date);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "On " << date << " : " << StatisticalReport::revenueByDate(date) << '\n';
        }
        if (choose_statistical_report == 2)
        {
            cout << "Enter the date you want to know the number of tickets sold.\n";
            string date;
            getline(cin, date);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "On " << date << " : " << StatisticalReport::ticketsSoldByDate(date) << '\n';
        }
        if (choose_statistical_report == 3)
        {
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "Number of client used system : " << StatisticalReport::totalCustomers() << '\n';
        }
        if (choose_statistical_report == 4)
        {

            cout << "Enter the month you want to revenue.\n";
            string month;
            getline(cin, month);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "On " << month << " : " << StatisticalReport::revenueByMonth(month) << '\n';
        }
        if (choose_statistical_report == 5)
        {
            cout << "Enter the month for which you want to know the number of drawings sold.\n";
            string month;
            getline(cin, month);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "On " << month << " : " << StatisticalReport::ticketsSoldByMonth(month) << '\n';
        }
        if (choose_statistical_report == 6)
        {
            cout << "Enter the year you want to revenue.\n";
            string year;
            getline(cin, year);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "On " << year << " : " << StatisticalReport::revenueByYear(year) << '\n';
        }
        if (choose_statistical_report == 7)
        {
            cout << "Enter the year for which you want to know the number of drawings sold.\n";
            string year;
            getline(cin, year);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "On " << year << " : " << StatisticalReport::ticketsSoldByYear(year) << '\n';
        }
        if (choose_statistical_report == 8)
        {
            cout << "Enter the ID of the trip you want to know the revenue for.\n";
            string rideId;
            getline(cin, rideId);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "Revenue of " << rideId << " : " << StatisticalReport::revenueByRide(rideId) << '\n';
        }
        if (choose_statistical_report == 9)
        {
            cout << "Enter the trip ID for which you want to know the number of tickets sold.\n";
            string rideId;
            getline(cin, rideId);
            this_thread::sleep_for(chrono::milliseconds(1800));
            cout << "Number of the ticket sold : " << StatisticalReport::ticketsSoldByRide(rideId) << '\n';
        }
        if (choose_statistical_report == 10)
        {
            cout << "SEE YOU AGAIN.\n";
            return;
        }

    }
}