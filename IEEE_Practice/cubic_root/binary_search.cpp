#include <iostream>
using namespace std;

int cubic_root(int n)
{
	int left, right, mid, cube;
	left = 0;
	right = n;
	
	while (true)
	{
		mid = (left + right) / 2;
		cube = mid * mid * mid;

		if (cube == n)
		{
			return mid;
		} 
		else if (cube > n)
		{
			right = mid - 1;
		} 
		else
		{
			left = mid + 1;
		}
	}

	return -1;
}

int main()
{
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << "Cubic root is: " << cubic_root(n) << endl;
}
