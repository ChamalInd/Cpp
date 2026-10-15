#include <iostream>
using namespace std;

int main()
{
	int *num = new int; // allocating memory

	*num = 10;
	cout << num << endl << *num << endl;
	delete num; // freeing memory
}
