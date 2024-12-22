#pragma once
#include "Client.h"
#include "Ticket.h"
#include "TheRide.h"

class StatisticalReport 
{
private:
    static vector<Ticket> tickets; // Danh sach ve da ban
    static vector<Client> clients; // Danh sach khach hang

public:

    // Thong ke doang thu theo ngay
    static double revenueByDate(const string& );

    // Thong ke so luong ve ban ra theo ngay
    static int ticketsSoldByDate(const string& );

    // Thong ke so luong khach hang da su dung he thong
    static int totalCustomers();

    // Thong ke doanh thu theo thang
    static double revenueByMonth(const string&);

    // Thong ke so luong ve ban ra theo thang
    static int ticketsSoldByMonth(const string& );

    // Thong ke doanh thu theo nam
    static double revenueByYear(const string&);

    // Thong ke so luong ve ban ra theo nam
    static int ticketsSoldByYear(const string&);

    // Thong ke doanh thu theo chuyen xe
    static double revenueByRide(const string&);
   
    // Thong ke so luong ve ban ra theo chuyen xe
    static int ticketsSoldByRide(const string&);

    //System
    static void SystemStatisticalReport();
};

