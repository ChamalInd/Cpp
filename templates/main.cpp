#include <iostream>

template <typename T>
class Box
{
private:
	T item;
public:
	void set(T x)
	{
		item = x;
	}

	T get()
	{
		return item;
	}
};

int main()
{
	Box<int> b1;
	b1.set(123);
	std::cout << b1.get() << std::endl;

	Box<char> b2;
	b2.set('c');
	std::cout << b2.get() << std::endl;

	Box<std::string> b3;
	b3.set("Hello Chamal");
	std::cout << b3.get() << std::endl;
}
