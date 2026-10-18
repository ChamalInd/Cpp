#include <iostream>
#include <vector>

int main()
{
	char choice;
	std::vector<int> array;

	std::cout << "Enter a choice from below" << std::endl;
	std::cout << "p: Print the array" << std::endl;
	std::cout << "i: Insert into the array" << std::endl;
	std::cout << "d: Delete from the array" << std::endl;
	std::cout << "s: Print specific index" << std::endl;
	std::cout << "e: Exit" << std::endl;

	while (true)
	{
		std::cout << std::endl << ": ";
		std::cin >> choice;

		switch (choice)
		{
			case 'p':
				for (int val : array)
				{
					std::cout << val << " ";
				}
				std::cout << std::endl;
				break;

			case 'i':
				int number;
				std::cout << "Enter the value: ";
				std::cin >> number;
				array.push_back(number);
				std::cout << "Number " << number << " added to the end of the array." << std::endl;
				break;

			case 'd':
				if (array.size() > 0)
				{
					std::cout << "Number " << array.at(array.size() - 1) << " deleted from the end of the array." << std::endl;
					array.pop_back();
				} else
				{
					std::cout << "Nothing to delete." << std::endl; 
				}
				break;
			
			case 's':
				int index;
				std::cout << "Enter the index: ";
				std::cin >> index;
				if (index < array.size())
				{
					std::cout << "Number at index " << index << " is " << array.at(index) << std::endl;
				} else 
				{
					std::cout << "Invalid index. The index is larger than the array size." << std::endl;
				}
				break;

			case 'e':
				std::cout << "Exiting..." << std::endl;
				return 0;

			default:
				std::cout << "Invalid input. Try again!" << std::endl;
				break;
		}
	}
}
