#pragma once

#include <iostream>

class BankAccount
{
private:
	std::string ownerName;
	float balance;

public:
	BankAccount() : ownerName("Null Account"), balance(0) {}
	BankAccount(std::string name, float initialBalance) : ownerName(name), balance(initialBalance) {}

	void deposit(float amount);
	void withdraw(float amount);
	void inquireBalance();
	void displayAccount();
};
