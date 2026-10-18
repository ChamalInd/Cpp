#include <iostream>

class Engine
{
public:
	void start()
	{
		std::cout << "Engine starting..." << std::endl;
	}
};

class Car
{
private:
	Engine engine;
public:
	void drive()
	{
		engine.start();
		std::cout << "Car is moving..." << std::endl;
	}
};

int main()
{
	Car car;
	car.drive();
}
