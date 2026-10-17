#include <iostream>
using namespace std;

class Time 
{
private:
	int minutes, hours;

public:
	Time():hours(0),minutes(0){}
	Time(int h, int m):hours(h),minutes(m){}
	Time(int t);
	operator int();
	void displayTime();
};

Time::Time(int t)
{
	minutes = t % 60;
	hours = t / 60;
}

Time::operator int()
{
	return (hours * 60 + minutes);
}

void Time::displayTime()
{
	cout << "Hours: " << hours << " Minutes: " << minutes << endl;
}

int main()
{
	Time t1(124);
	t1.displayTime();
	int t = t1;
	cout << t << endl;

	Time t2(4,21);
	t2.displayTime();
	t = t2;
	cout << t << endl;
}
