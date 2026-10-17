#include <iostream>
using namespace std;

class New
{
	int num;
	
	public:
		New():num(0){}

		void display()
		{
			cout << num << endl;
		}

		// prefix operations
		void operator--() 
		{
			--num; 
		}
	
		void operator++()
		{
			++num;
		}
		
		// postfix operations
		void operator--(int)
		{
			--num; 
		}

		void operator++(int)
		{
			++num;
		}

		bool operator==(New &other)
		{
			return num == other.num;
		}
};

int main()
{
	New n1;
	New n2;

	++n1;
	++n1;
	n1++;
	n1++;
	n1.display();
	--n1;
	n1--;
	n1.display();

	++n2;
	++n2;
	if (n1 == n2)
	{
		cout << "Equal" << endl;
	} else 
	{
		cout << "Not equal" << endl;
	}
}
