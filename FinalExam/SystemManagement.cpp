#include "SystemManagement.h"

SystemManagement* SystemManagement::instance = nullptr;
SystemManagement* SystemManagement::GetInstance()
{
	if (instance == NULL)
	{
		instance = new SystemManagement();
	}
	return instance;
}
void SystemManagement::DeleteInstance()
{
	if (instance)
	{
		delete instance;
		instance = NULL;
	}
}
void SystemManagement::Functions()
{
	cout << "Welcome to system management.\n";
	SystemManagement* object = SystemManagement::GetInstance();
	while (true)
	{
		cout << "Functions management.\n";
		cout << "Enter 1 to use The Ride Management.\n";
		cout << "Enter 2 to use Car Management.\n";
		cout << "Enter 3 to use Ticket Management.\n";
		cout << "Enter 4 to use Statistical Report.\n";
		cout << "Enter 5 to stop here.\n";
		/*cout << "Enter 5 to use file.\n";
		> Chon(1 - 6) : 5
        > Chon loai thong tin muon doc :
        > 1. Chuyen xe
        > 2. Xe
        > 3. Ve
        > Chon(1 - 3) : 1
        > Nhap duong dan den file : data / chuyen_xe.csv
        > Doc thong tin thanh cong!*/

		int choose_management;
		cin >> choose_management;
		cin.ignore();

		if (choose_management == 1)
		{
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->SystemTheRideManagement();
		}
		if (choose_management == 2)
		{
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->SystemCarManagement();
		}
		if (choose_management == 3)
		{
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->SystemTicketManagement();
		}
		if (choose_management == 4)
		{
			cout << "Please wait a moment ...\n";
			this_thread::sleep_for(chrono::milliseconds(1800));
			object->SystemStatisticalReport();
		}
		if (choose_management == 5)
		{
			cout << "GOODBYE.\n";
			return;
		}
	}
}