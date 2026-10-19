#include <iostream>
#include <vector>
using namespace std;

int cubic_root(int n)
{
	if (n <= 0) return -1;
	if (n == 1) return n;

	vector<int> factors;
	int counter = 0;
	
	for (int i = 2; (i * i * i) <= n; i++) 
	{
		counter = 0;

		while (n % i == 0)
		{
			n /= i;
			counter += 1;
		}

		if (counter % 3 != 0) return -1;

		while (counter > 0)
		{
			factors.push_back(i);
			counter -= 3;
		}
	}

	if (n > 1) return -1;
	
	if (factors.size() > 0)
	{
		int root = 1;
		for (int factor : factors)
		{
			root *= factor;
		}
		return root;
	}

	return -1;
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Cubic root: " << cubic_root(n) << endl;
}
