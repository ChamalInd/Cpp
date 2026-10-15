#include <iostream>
using namespace std;

class Rectangle 
{
	int width, length;
	
	public:
		// Constructors
		Rectangle():width(0),length(0) {}
		/***{
			width = 0;
			length = 0;
		}***/

		Rectangle(int w, int l):width(w),length(l) {}
		/***{
			width = w;
			length = l;
		}***/

		Rectangle(int l):width(l),length(l) {}

		Rectangle(Rectangle &other):width(other.width),length(other.length) {}
		/***{
			width = other.width;
			length = other.length;
		}***/
		
		// Destructors
		~Rectangle()
		{
			cout << "Destruction of the object" << endl;
		}
		
		// Function signatures
		int area();
};

int Rectangle::area()
{
	return width * length;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(10, 20);
	Rectangle rect3 = rect2;
	Rectangle square(20);

	cout << "Rectangle 1 area: " << rect1.area() << endl;
	cout << "Rectangle 2 area: " << rect2.area() << endl;
	cout << "Rectangle 3 area: " << rect3.area() << endl;
	cout << "Square area: " << square.area() << endl;
}
