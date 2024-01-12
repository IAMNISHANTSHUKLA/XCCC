// C++ Program to create
// Trading application
#include <bits/stdc++.h>
using namespace std;

// Class created for binding
// all account details together
class Account {
	// Basic Variables declared
	int dogecoin, balance;
	int bitcoin;
	int deposit, withdraw;
	int total_equity = 100;
	int predict;
	int dogecoin_value;
	int bitcoin_value;
int crypto_invest;
int crypto_return;

	// Vector declared
	vector<pair<string, int> > transactions;

public:
	// Deposit Cash
	bool Deposit(int money)
	{
		deposit += money;
		balance += money;
		transactions.push_back({ "Deposit:", money });
	}

	// Get account Details
	void Get_account_information()
	{

		cout << "Money Details:\n";
		cout << "Bank Balance:" << balance << endl;
		cout << "Dogecoin:" << dogecoin << endl;
		cout << "Bitcoin:" << bitcoin << endl;
	}

	// Withdraw Cash
	bool Withdraw(int money)
	{
		if (money > balance) {
			return false;
		}

		withdraw += money;
		balance -= money;
		transactions.push_back({ "Withdraw:", money });
		return true;
	}

	// Buy Crypto function
	
int main()
{
	Account person;
	int amount, choice;
	bool check;
	
		cin >> choice;
		int ans;

		
		}
	}
}
