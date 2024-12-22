#pragma once
#include "CarManagement.h"
#include "TicketManagement.h"
#include "TheRideManagement.h"
#include "StatisticalReport.h"

class SystemManagement : public CarManagement, public TicketManagement, public TheRideManagement, public StatisticalReport
{
private:
	static SystemManagement* instance;
public:
	static SystemManagement* GetInstance();
	static void DeleteInstance();

	void Functions();
};

