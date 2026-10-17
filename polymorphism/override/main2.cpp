#include <iostream>
using namespace std;

class Animal
{
public:	
	virtual void speak()
	{
		cout << "This is the animal class" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak() override
	{
		cout << "This is the dog class" << endl;
	}
};

int main()
{
	Animal *a = new Dog();
	a->speak();
}

