#include "Access.h"

void Access::Register()
{
	cout << "Type your account ? 1.Manager - 2.Customer\n";
	int choice;
	cin >> choice;
	cin.ignore();
	
	if (choice == 1)
	{
		Account* account = new Account();
		cin >> *account;

		ofstream ofs("FolderContainFilesSupport/AccountManager.txt");

		ofs << account->getUserClient().getName() << " ";
		ofs << account->getUserClient().getHotline() << " ";
		ofs << account->getUserClient().getEmail() << " ";

		ofs << account->getBirthday() << " ";
		ofs << account->getAddress() << " ";
		ofs << account->getUsername() << " ";
		ofs << account->getPassword() << " ";

		SystemManagement* object = SystemManagement::GetInstance();
		object->Functions();
		SystemManagement::DeleteInstance();
	}
	else if (choice == 2)
	{
		Account* account = new Account();
		cin >> *account;

		ofstream ofs("FolderContainFilesSupport/AccountCustomer.txt");

		ofs << account->getUserClient().getName() << " ";
		ofs << account->getUserClient().getHotline() << " ";
		ofs << account->getUserClient().getEmail() << " ";

		ofs << account->getBirthday() << " ";
		ofs << account->getAddress() << " ";
		ofs << account->getUsername() << " ";
		ofs << account->getPassword() << " ";

		SystemFunctionCustomer* object = SystemFunctionCustomer::GetInstanceCustomer();
		object->FunctionsCustomer();
		SystemFunctionCustomer::DeleteInstanceCustomer();
	}
	else
	{
		cout << "Try again!Because invalid.\n";
		return;
	}
}
void Access::Login()
{
	cout << "Enter user name : ";
	string user;
	getline(cin, user);

	cout << "Enter your password : ";
	string pass;
	getline(cin, pass);

	bool file1 = false, file2 = true;
	ifstream ifs1("FolderContainFilesSupport/AccountManager.txt");
	ifstream ifs2("FolderContainFilesSupport/AccountCustomer.txt");

	while (!ifs1.eof())
	{
		string temp;
		getline(ifs1, temp);

		vector<string> ans1;
		stringstream ss(temp);
		string w;
		while (ss >> w)
		{
			ans1.push_back(w);
		}
		if (ans1.size() != 0)
		{
			int n = ans1.size() - 1;
			if (ans1[n] == pass && ans1[n - 1] == user)
			{
				file1 = true;
			}
		}
	}
	while (!ifs2.eof())
	{
		string temp;
		getline(ifs2, temp);

		vector<string> ans2;
		stringstream ss(temp);
		string w;
		while (ss >> w)
		{
			ans2.push_back(w);
		}
		int n = ans2.size() - 1;
		if (ans2.size() != 0)
		{
			if (ans2[n] == pass && ans2[n - 1] == user)
			{
				file2 = true;
			}
		}
	}
	if (file1)
	{
		SystemManagement* object = SystemManagement::GetInstance();
		object->Functions();
		SystemManagement::DeleteInstance();
	}
	if (file2)
	{
		SystemFunctionCustomer* object = SystemFunctionCustomer::GetInstanceCustomer();
		object->FunctionsCustomer();
		SystemFunctionCustomer::DeleteInstanceCustomer();
	}
	cout << "Login sucessfully.\n";
}