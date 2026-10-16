#include <iostream>
using namespace std;

int absolute(int i)
{
	cout << "Integer: ";
	return i < 0 ? -i : i;
}

double absolute(double i)
{
	cout << "Double: ";
	return i < 0 ? -i : i;
}

long absolute(long i)
{
	cout << "Long Integer: ";
	return i < 0 ? -i : i;
}

int main()
{
	cout << absolute(-4) << endl;
	cout << absolute(-3.512) << endl;
	cout << absolute(-41231412314124) << endl;
}
