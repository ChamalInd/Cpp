#include "functions.h"

int main()
{
	std::cout << "Welcome to Self Banking" << std::endl;
	std::cout << "c: Create Account" << std::endl;
	std::cout << "s: Display Account" << std::endl;
	std::cout << "d: Deposit Money" << std::endl;
	std::cout << "w: Withdraw Money" << std::endl;
	std::cout << "e: Exit" << std::endl;

	while (true)
	{
		static bool accountPresent = false;
		static BankAccount account;
	
		char choice;
		std::string name;
		float initialBalance;
		float amount;

		std::cout << std::endl << ": ";
		std::cin >> choice;

		switch (choice)
		{
			case 'c':
				if (!accountPresent)
				{
					std::cout << "Enter you name: ";
					std::cin >> name;

					std::cout << "Enter the initial balance: ";
					std::cin >> initialBalance;

					account = BankAccount(name, initialBalance);
					std::cout << "Hello " << name << ", your account have been successfully created." << std::endl;
					accountPresent = true;
				} else
				{
					std::cout << "Account is already created." << std::endl;
				}
				break;

			case 's':
				if (accountPresent) 
				{
					account.displayAccount();
				} else 
				{
					std::cout << "No account found to display." << std::endl; 
				}
				break;

			case 'd':
				if (accountPresent) 
				{
					std::cout << "Enter the amount you wish to deposit: ";
					std::cin >> amount;
					account.deposit(amount);
				} else
				{
					std::cout << "No account found for this transaction." << std::endl;
				}
				break;
			
			case 'w':
				if (accountPresent) 
				{
					std::cout << "Enter the amount you wish to withdraw: ";
					std::cin >> amount;
					account.withdraw(amount);
				} else
				{
					std::cout << "No account found for this transaction." << std::endl;
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
