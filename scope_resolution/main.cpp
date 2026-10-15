#include <iostream>
using namespace std;

int a = 20;

void func() 
{
	int a = 10;
	cout << "Value of local a in func: " << a << endl;
	cout << "Value of global a in func: " << ::a << endl;
}

int main()
{
	int a = 100;
	cout << "Value of local a in main: " << a << endl;
	cout << "Value of global a in main: " << ::a << endl;
	func();
}
