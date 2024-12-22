#include "Access.h"

int main()
{
	/*SystemManagement* object = SystemManagement::GetInstance();
	object->Functions();
	SystemManagement::DeleteInstance();*/

	/*SystemFunctionCustomer* object = SystemFunctionCustomer::GetInstanceCustomer();
	object->FunctionsCustomer();
	SystemFunctionCustomer::DeleteInstanceCustomer();*/

	while (true)
	{
		cout << "Enter 1 to Register.\n";
		cout << "Enter 1 to Login.\n";
		cout << "Enter 3 to out program.\n";

		int X;
		cin >> X;
		cin.ignore();

		if (X == 1)
		{
			Access::Register();
		}
		if (X == 2)
		{
			Access::Login();
		}
		if (X == 3)
		{
			cout << "GOODBYE.\n";
			return 0;
		}
	} 

	return 0;
}