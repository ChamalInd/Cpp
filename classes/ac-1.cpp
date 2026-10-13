#include <iostream>
using namespace std;

class Day 
{
	int day;
	string month;
	int year;

	public: 
	/*** Defining functions inside a class
	void setDate(int D, string M, int Y) 
	{
		day = D;
		month = M;
		year = Y;
	}

	void getDate()
	{
		cout << day << "/" << month << "/" << year << endl;
	}***/
	void setDate(int D, string M, int Y);
	void getDate();

};

// defining functions outside the class using scope resolution
void Day::setDate(int D, string M, int Y)
{
	day = D;
	month = M;
	year = Y;
}

void Day::getDate()
{
	cout << day << "/" << month << "/" << year << endl;
}

int main() 
{
	Day today;
	today.setDate(12, "October", 2026);
	today.getDate();

	Day *ptrDate = &today;
	ptrDate->setDate(29, "June", 2005);
	ptrDate->getDate();
}
