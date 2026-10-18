#pragma once

#include "types.h"

void BankAccount::deposit(float amount)
{
	balance += amount;
	std::cout << "LKR " << amount << " is deposited in the account." << std::endl;
}

void BankAccount::withdraw(float amount)
{
	if (balance > amount)
	{
		balance -= amount;
		std::cout << "LKR " << amount << " is withdrawn from the account." << std::endl;
	} else 
	{
		std::cout << "The amount entered is greater than the current available balance." << std::endl;
	}
}

void BankAccount::inquireBalance()
{
	std::cout << "The current bank balance: LKR " << balance << std::endl;
}

void BankAccount::displayAccount()
{
	std::cout << "Owner of the Account: " << ownerName << std::endl;
	std::cout << "Bank Balance: LKR " << balance << std::endl;
}
