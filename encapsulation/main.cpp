#include <iostream>
using namespace std;

class BankAccount
{
private:
	string ownerName;
	float balance;

public:
	BankAccount(string name, float initialBalance) : ownerName(name), balance(initialBalance) {}

	void deposit(float amount);
	void withdraw(float amount);
	void inquireBalance();
	void displayAccount();
};

void BankAccount::deposit(float amount)
{
	balance += amount;
	cout << "LKR " << amount << " is deposited in the account." << endl;
}

void BankAccount::withdraw(float amount)
{
	if (balance > amount)
	{
		balance -= amount;
		cout << "LKR " << amount << " is withdrawn from the account." << endl;
	} else 
	{
		cout << "The amount entered is greater than the current available balance." << endl;
	}
}

void BankAccount::inquireBalance()
{
	cout << "The current bank balance: LKR " << balance << endl;
}

void BankAccount::displayAccount()
{
	cout << "Owner of the Account: " << ownerName << endl;
	cout << "Bank Balance: LKR " << balance << endl;
}

int main()
{
	BankAccount b1("Chamal", 100000);
	b1.withdraw(120000);
	b1.deposit(30000);
	b1.withdraw(120000);
	b1.displayAccount();
}
