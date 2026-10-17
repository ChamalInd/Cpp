#include <iostream>
using namespace std;

class Base 
{
public:
	virtual void func()
	{
		cout << "Base function is executed" << endl;
	}
};

class Derived : public Base
{
public:
	// with override keyword, compiler makes sure the functions follow the same signature.
	void func() override
	{
		cout << "Derived function is executed" << endl;
	}
};

int main()
{
	Base b;
	Derived d;
	
	b.func();
	d.func();

	cout << "Execution is complete" << endl;
}
