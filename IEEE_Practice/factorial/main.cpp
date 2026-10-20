#include <iostream>
using namespace std;

int factorial(int num)
{
	if (num == 1) return num;
	return num * factorial(num - 1);
}

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << number << "! = " << factorial(number) << endl;
}
