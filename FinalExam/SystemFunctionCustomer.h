#pragma once
#include "CustomerTripLookup.h"
#include "CustomerDisplayTheRide.h"
#include "DisplayPayment.h"
#include "BookTickets.h"
#include "TicketManagementCustomer.h"
#include "Account.h"

class SystemFunctionCustomer : public CustomerTripLookup, public CustomerDisplayTheRide, public DisplayPayment, public BookTickets, public TicketManagementCustomer, public Account
{
private:
	static SystemFunctionCustomer* instance_customer;
public:
	static SystemFunctionCustomer* GetInstanceCustomer();
	static void DeleteInstanceCustomer();
	
	void FunctionsCustomer();
};

