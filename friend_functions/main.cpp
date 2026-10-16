#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width, height;

public:
	Rectangle():width(0),height(0){}
	Rectangle(int w, int h):width(w),height(h){}
	friend void displayDimensions(Rectangle &rect);
	void calculateArea();
};

void displayDimensions(Rectangle &rect)
{
	cout << "Width: " << rect.width << endl;
	cout << "Height: " << rect.height << endl;
}

void Rectangle::calculateArea()
{
	cout << "Area: " << width * height << endl;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(12, 45);

	rect1.calculateArea();
	rect2.calculateArea();

	displayDimensions(rect1);
	displayDimensions(rect2);
}
