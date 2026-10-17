#include <iostream>
using namespace std;

class Person
{
public:
	Person() 
	{
		cout << "Person constructor is called" << endl;
	}
};

class Student : virtual public Person
{
public:
	Student()
	{
		cout << "Student constructor is called" << endl;
	}
};

class Faculty : virtual public Person
{
public:
	Faculty()
	{
		cout << "Faculty constructor is called" << endl;
	}
};

class TA : public Student, public Faculty
{
public:
	TA()
	{
		cout << "TA constructor is called" << endl; 
	}
};

int main()
{
	TA t1;
}
