#include <iostream>
using namespace std;

#define PI 3.14

double area(double radius)
{
	return PI * radius * radius;
}

double area(double length, double breadth)
{
	return length * breadth;
}

double area(float base, double height)
{
	return 0.5 * base * height;
}

int main()
{
	while (true)
	{
		int choice;
		
		cout << "Enter you choice: " << endl;
		cout << "1: Circle\n2: Rectangle\n3: Triangle\n4: Exit\n" << endl << ": ";
		cin >> choice;

		switch (choice) 
		{
			case 1 :
				double radius;
				cout << "Enter the radius of the circle: ";
				cin >> radius;
				cout << "Area of the circle: " << area(radius) << endl << endl;
				break;

			case 2 :
				double breadth, length;
				cout << "Enter the breadth of the rectangle: ";
				cin >> breadth;
				cout << "Enter the length of the rectangle: ";
				cin >> length;
				cout << "Area of the rectangle: " << area(length, breadth) << endl << endl;
				break;

			case 3 :
				double height;
				float base;
				cout << "Enter the base of the triangle: ";
				cin >> base;
				cout << "Enter the height of the triangle: ";
				cin >> height;
				cout << "Area of the triangle: " << area(base, height) << endl << endl;
				break;

			case 4 :
				cout << "Exiting..." << endl;
				return 0;
			default :
				cout << "Invalid option" << endl << endl;
				continue;
		}
	}
}
