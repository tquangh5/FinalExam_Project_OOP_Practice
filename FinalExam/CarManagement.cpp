#include "CarManagement.h"

vector<Car> CarManagement::cars;
void CarManagement::addVehicle(const Car& car)
{
    CarManagement::cars.push_back(car);
	cout << "Vehicle added successfully!" << endl;
}
void CarManagement::editVehicle(const string& license_plate, const Car& updatedCar)
{
    for (auto& car : CarManagement::cars)
    {
        if (car.getLicense_plate() == license_plate) 
        {
            car = updatedCar;
            cout << "Vehicle updated successfully!" << endl;
            return;
        }
    }
    cout << "Vehicle not found!" << endl;
}
void CarManagement::deleteVehicle(const string& license_plate)
{
    for (auto it = CarManagement::cars.begin(); it != CarManagement::cars.end(); ++it)
    {
        if (it->getLicense_plate() == license_plate) 
        {
            CarManagement::cars.erase(it);
            cout << "Vehicle deleted successfully!" << endl;
            return; 
        }
    }
    cout << "Vehicle not found!" << endl; 
}

void CarManagement::readFileToCars()
{
    ifstream ifs("FolderContainFilesSupport/ListCars.txt");
    if (!ifs)
    {
        cout << "NOT OPEN ListCars.txt.\n";
        return;
    }

    while (!ifs.eof())
    {
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
        Car x(license_plate, type, number_of_seats, temp_benefit);
        CarManagement::cars.push_back(x);
    }
    ifs.close();
}

void CarManagement::writeCarsToFile()
{
    ofstream ofs("FolderContainFilesSupport/ListCars.txt", ios::app);

    for (int i = 0; i < CarManagement::cars.size(); i++)
    {
        ofs << CarManagement::cars[i].getLicense_plate() << "\n";
        ofs << CarManagement::cars[i].getType() << "\n";
        ofs << CarManagement::cars[i].getNumber_of_seats() << "\n";

        int size_benefit = CarManagement::cars[i].getBenefit().size();
        ofs << size_benefit << "\n";
        for (int i = 0; i < size_benefit; i++)
        {
            ofs << CarManagement::cars[i].getBenefit()[i].getNameBenefit() << "\n";
            ofs << CarManagement::cars[i].getBenefit()[i].getPriceBenefit() << "\n";
        }
    }
    ofs.close();
}

void CarManagement::SystemCarManagement()
{
    if (CarManagement::cars.size() == 0)
    {
        //CarManagement::readFileToCars();
    }
    while (true)
    {
        cout << "Your options : \n";
        cout << "Enter 1 to add vehicle.\n";
        cout << "Enter 2 to edit vehicle.\n";
        cout << "Enter 3 to delete vehicle.\n";
        cout << "Enter 4 to break here.\n";

        int choose_car_management;
        cin >> choose_car_management;
        cin.ignore();
        
        if (choose_car_management == 1)
        {
            cout << "Enter information a car you want to add.\n";
            Car x;
            cin >> x;

            this_thread::sleep_for(chrono::milliseconds(1800));
            CarManagement::addVehicle(x);
        }
        if (choose_car_management == 2)
        {
            cout << "Enter car's license plate you want to add.\n";
            string license_plate;
            getline(cin, license_plate);
            cout << "Enter information a car you want to add.\n";
            Car x;
            cin >> x;

            this_thread::sleep_for(chrono::milliseconds(1800));
            CarManagement::editVehicle(license_plate, x);
        }
        if (choose_car_management == 3)
        {
            cout << "Enter car's license plate you want to delete.\n";
            string license_plate;
            getline(cin, license_plate);

            this_thread::sleep_for(chrono::milliseconds(1800));
            CarManagement::deleteVehicle(license_plate);
        }
        if (choose_car_management == 4)
        {
            cout << "SEE YOU AGAIN.\n";

            this_thread::sleep_for(chrono::milliseconds(1800));
            //CarManagement::writeCarsToFile();
            return;
        }
    }

}