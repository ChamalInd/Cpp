#include <iostream>
using namespace std;

class Vehicle
{
public:
	virtual string getName()
	{
		return "This is a vehicle class";
	}

	void printName()
	{
		cout << getName() << endl;
	}
};

class Car : public Vehicle
{
public:
	string getName() override
	{
		return "This is a car";
	}
};

int main()
{
	Vehicle v1;
	Car v2;

	v1.printName();
	v2.printName();
}
