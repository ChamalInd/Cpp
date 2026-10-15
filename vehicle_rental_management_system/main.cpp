#include <iostream>
using namespace std;

class Vehicle 
{
	int VehicleID;
	string VehicleType;
	int RentPerDay;
	int NoDaysRented;

	public:
		Vehicle();
		Vehicle(int ID, string type, int rent, int days);
		Vehicle(Vehicle &existing);
		~Vehicle();
		void Display();
		void CalculateRent();
};

Vehicle::Vehicle() 
{
	VehicleID = 0;
	VehicleType = "Not Assigned";
	RentPerDay = 0;
	NoDaysRented = 0;
}

Vehicle::Vehicle(int ID, string type, int rent, int days)
{
	VehicleID = ID;
	VehicleType = type;
	RentPerDay = rent;
	NoDaysRented = days;
}

Vehicle::Vehicle(Vehicle &existing)
{
	VehicleID = existing.VehicleID;
	VehicleType = existing.VehicleType;
	RentPerDay = existing.RentPerDay;
	NoDaysRented = existing.NoDaysRented;

}

Vehicle::~Vehicle()
{
	cout << "Vehicle with ID " << VehicleID << " is destroyed." << endl; 
}

void Vehicle::Display()
{
	cout << "Vehicle Id: " << VehicleID << endl;
	cout << "Vehicle Type: " << VehicleType << endl;
	cout << "Rental Price per Day: " << RentPerDay << endl;
	cout << "Number of Days Rented: " << NoDaysRented << endl;
}

void Vehicle::CalculateRent()
{
	cout << "Total rent for vehicle with ID (" << VehicleID << ") is LKR " << RentPerDay * NoDaysRented << endl;
}

int main()
{
	Vehicle vehicle_1;
	Vehicle vehicle_2(1, "Car", 400, 2);
	Vehicle vehicle_3(2, "Van", 800, 3);
	Vehicle vehicle_4(vehicle_2);

	vehicle_1.Display();
	cout << endl;
	vehicle_2.Display();
	cout << endl;
	vehicle_3.Display();
	cout << endl;
	vehicle_4.Display();
	cout << endl;
	
	vehicle_1.CalculateRent();
	vehicle_2.CalculateRent();
	vehicle_3.CalculateRent();
	cout << endl;
}
