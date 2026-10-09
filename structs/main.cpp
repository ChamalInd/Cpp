#include <iostream>
using namespace std;

struct Student
{
	string name = "";
	int age = 0;
	float height = 0;
	float weight = 0;
};

struct Date 
{
	int day;
	string month;
	private: 
	int year = 2026;
	
	public:
	void printYear()
	{
		cout << " Year: " << year << endl;
	}
};

int main()
{
	Student S1;
	S1.name = "Chamal";
	S1.age = 21;
	S1.height = 5.10;
	S1.weight = 78;
	
	cout << S1.name << " is of age " << S1.age << " whose height is " << S1.height << " feet and weight is " << S1.weight << " kg." << endl;

	Date today;
	today.day = 9;
	today.month = "October";

	cout << "Day: " << today.day << " Month: " << today.month;
	today.printYear();
}
