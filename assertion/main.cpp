#include <iostream>
#include <cassert>
using namespace std;

int divide(int numerator, int denominator) 
{
	assert(denominator != 0);
	return numerator / denominator;
}

int main()
{
	cout << divide(5, 2) << endl; // no problems while running
	cout << divide(10, 0) << endl; // assertion fails
}
