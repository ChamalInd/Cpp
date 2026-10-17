#include <iostream>
using namespace std;

class Vehicle
{
public:
	string regNo;
	int manuYear;
	string color;
	float remainingFuel;
	float acceleration;
	
	Vehicle():regNo("No registration"),manuYear(0),color("No color"),remainingFuel(0),acceleration(0) {};
	Vehicle(string r, int m, string c, float f, float a):regNo(r),manuYear(m),color(c),remainingFuel(f),acceleration(a) {};
	void accelerate();
	void displayFuel();
};

class Car : public Vehicle
{
public:
	string type = "Car";
	Car(string r, int m, string c, float f, float a):Vehicle(r, m, c, f, a) {};
};

class Van : public Vehicle
{
public:
	string type = "Van";
	Van(string r, int m, string c, float f, float a):Vehicle(r, m, c, f, a) {};
};

class Bike : public Vehicle
{
public:
	string type = "Bike"; 
	Bike(string r, int m, string c, float f, float a):Vehicle(r, m, c, f, a) {};
};

void Vehicle::accelerate()
{
	cout << "Vehicle with registration no. " << regNo << " is accelerating." << endl; 
	remainingFuel -= acceleration;
}

void Vehicle::displayFuel()
{
	cout << "Remaining Fuel amount of " << regNo << " : " << remainingFuel << " l" << endl;
}

int main()
{
	Car car_1("CAT-6199", 2021, "Blue", 25.3, 1.45);
	car_1.displayFuel();
	car_1.accelerate();
	car_1.displayFuel();

	cout << endl;
	
	Van van_1("CAB-6299", 2017, "White", 15, 1.05);
	van_1.displayFuel();
	van_1.accelerate();
	van_1.displayFuel();
}
