#include "TheRideManagement.h"

vector<TheRide> TheRideManagement::rides;
// Add
void TheRideManagement::addRide(const TheRide& ride)
{
    TheRideManagement::rides.push_back(ride);
    cout << "Add Sucessfully.\n";
}

// Editor
void TheRideManagement::editRide(const string& rideId, const string& start, const string& end, const double& price, const int& ticketRemain,  Car car)
{
    for (int i = 0; i < TheRideManagement::rides.size(); i++)
    {
        if (TheRideManagement::rides[i].getId_the_ride() == rideId)
        {
            TheRideManagement::rides[i].setId_the_ride(rideId);
            TheRideManagement::rides[i].setStart_the_ride(start);
            TheRideManagement::rides[i].setEnd_the_ride(end);
            TheRideManagement::rides[i].setPriceBase(price);
            TheRideManagement::rides[i].setTicketRemain(ticketRemain);
            TheRideManagement::rides[i].setCar(car);
            cout << "Edit sucessfully.\n";
            return;
        }
    }
    cout << "The car does not exist in list.\n";
}

// Delete
void TheRideManagement::removeRide(const string& rideId)
{
    for (size_t i = 0; i < TheRideManagement::rides.size(); i++)
    {
        if (TheRideManagement::rides[i].getId_the_ride() == rideId)
        {
            TheRideManagement::rides.erase(TheRideManagement::rides.begin() + i);
            cout << "Deleted a the ride with ID: " << rideId << endl;
            return;
        }
    }
    cout << "Dose not find the ride with ID: " << rideId << endl;
    return;
}

void TheRideManagement::readFileToRides()
{
    ifstream ifs("FolderContainFilesSupport/ListTheRides.txt");
    if (!ifs)
    {
        cout << "NOT OPEN FILE.\n";
        return;
    }
    while (!ifs.eof())
    {
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
        ifs.ignore();

        // Car.
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
        TheRide theride(id_the_ride, start_the_ride, end_the_ride, day_start, price_base, ticket_remain, X);
        TheRideManagement::rides.push_back(theride);
    }
    ifs.close();
}
void TheRideManagement::writeRidesToFile()
{
    ofstream ofs("FolderContainFilesSupport/ListTheRides.txt");
    if (!ofs)
    {
        cout << "NOT OPEN FILE.\n";
        return;
    }
    for (int i = 0; i < TheRideManagement::rides.size(); i++)
    {
        ofs << TheRideManagement::rides[i].getId_the_ride() << "\n";
        ofs << TheRideManagement::rides[i].getStart_the_ride() << "\n";
        ofs << TheRideManagement::rides[i].getEnd_the_ride() << "\n";
        ofs << TheRideManagement::rides[i].getDay_start() << "\n";
        ofs << TheRideManagement::rides[i].getPriceBase() << "\n";
        ofs << TheRideManagement::rides[i].getTicketRemain() << "\n";

        ofs << TheRideManagement::rides[i].getCar().getLicense_plate() << "\n";
        ofs << TheRideManagement::rides[i].getCar().getType() << "\n";
        ofs << TheRideManagement::rides[i].getCar().getNumber_of_seats() << "\n";

        int _size = TheRideManagement::rides[i].getCar().getBenefit().size();
        ofs << _size << "\n";
        for (int j = 0; j < _size; j++)
        {
            ofs << TheRideManagement::rides[i].getCar().getBenefit()[j].getNameBenefit() << "\n";
            ofs << TheRideManagement::rides[i].getCar().getBenefit()[j].getPriceBenefit() << "\n";
        }
    }
    ofs.close();
}
void  TheRideManagement::SystemTheRideManagement()
{
    if (TheRideManagement::rides.size() == 0)
    {
        //TheRideManagement::readFileToRides();
    }
    while (true)
    {
        cout << "Your options : \n";
        cout << "Enter 1 to add the ride.\n";
        cout << "Enter 2 to edit the ride.\n";
        cout << "Enter 3 to delete the ride.\n";
        cout << "Enter 4 to stop here.\n";

        int choose_the_ride_management;
        cin >> choose_the_ride_management;
        cin.ignore();

        if (choose_the_ride_management == 1)
        {
            cout << "Enter information the ride you want to add.\n";
            TheRide x;
            cin >> x;

            this_thread::sleep_for(chrono::milliseconds(1800));
            TheRideManagement::addRide(x);
        }
       if (choose_the_ride_management == 2)
        {
            cout << "Enter id of car you want to edit.\n";
            string rideId;
            getline(cin, rideId);
            cout << "Enter start location : ";
            string start;
            getline(cin, start);
            cout << "Enter end location : ";
            string end;
            getline(cin, end);

            cout << "Enter price : ";
            double price;
            cin >> price;
            cin.ignore();

            cout << "Enter tickets remaining : \n";
            int ticketRemain;
            cin >> ticketRemain;
            cin.ignore();

            cout << "Enter car information that will be used to replace other cars in the list.\n";
            Car x;
            cin >> x;

           this_thread::sleep_for(chrono::milliseconds(1800));
           TheRideManagement::editRide(rideId, start, end, price, ticketRemain, x);
        }
        if (choose_the_ride_management == 3)
        {
            cout << "Enter a the ride's id you want to delete.\n";
            string rideId;
            getline(cin, rideId);

            this_thread::sleep_for(chrono::milliseconds(1800));
            TheRideManagement::removeRide(rideId);
        }
        if (choose_the_ride_management == 4)
        {
            cout << "SEE YOU AGAIN.\n";

            this_thread::sleep_for(chrono::milliseconds(1800));
            //TheRideManagement::writeRidesToFile();
            return;
        }
    }
}