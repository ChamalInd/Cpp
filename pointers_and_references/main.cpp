#include <iostream>
using namespace std;

void new_func() 
{
	int var = 20;
	int *ptr = &var;

	cout << "Value of var: " << var << endl;
	cout << "Value of ptr: " << ptr << endl;
	cout << "Value of *ptr: " << *ptr << endl;

	int &ref = var;
	cout << "Value of ref: " << ref << endl;
	cout << "Value of &ref : " << &ref << endl;
	cout << "Value of &var : " << &var << endl;

	ref = 40;
	cout << "Value of var : " << var << endl;
}

int main()
{
	new_func();
}
