#include <iostream>
using namespace std;
                           //my bank acc system
class bankAccount
{
private:
	string name;
	int accountNo;
	double balance;
public:
	void myinfoo()
	{
		cout << "Enter your name:" << endl;
		cin >> name;
		cout << "Enter your account number:" << endl;

		cin >> accountNo;
		cout << "Enter your balance:" << endl;
		cin >> balance;
	}
	void deposit()
	{
		double amount;
		cout << "Enter the amount you want to deposit:" << endl;
		cin >> amount;
		balance += amount;
	}void withdraw()
	{
		double amount;
		cout << "Enter the amount you want to withdraw:" << endl;
		cin >> amount;
		if (amount > balance)
		{
	cout << "Insufficient balance!" << endl;
		}
		else
			balance -= amount;
	}
	void display()
	{
		cout << "Name:" << name << endl;
		cout << "Account Number: " << accountNo << endl;
		cout << "Balance: " << balance << endl;
	}
	};
int main()
{
	bankAccount acc;
	acc.myinfoo();
	acc.deposit();
	acc.withdraw();
	acc.display();

	return 0;
}