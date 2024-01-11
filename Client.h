#pragma once
#include<vector>
#include "Person.h"

class Client : public Person
{
private:
	// Attributes:	
	double balance;

public:
	// constructors:
	Client() : Person(){
		this->balance = 0.0;
	}
	Client(int id, string name, string pass, double balance) : Person(id, name, pass) {
		//this->balance = balance;
		setBalance(balance);
	}
	//seters
	void setBalance(double balance) {
		if(Validation::Validate_Balance(balance))
			this->balance = balance;
	}
	//getters
	double getBalance() {
		return this->balance;
	}

	void display() {
		Person::display();
		cout << "Balance: " << this->balance << endl;
	}

	//Methods:

	void deposit(double amount) {
		if (amount > 0)
			this->balance += amount;
		cout << "\nSuccessful transaction.\n";
	}

	double withdraw(double amount) {
		if (amount <= this->balance && amount > 0) {
			this->balance -= amount;
			cout << "\nSuccessful transaction.\n";
		}
		else
			cout << "\n Amount Exceeded.\n";
	}

	void transfereTo(double amount, Client& recipient) {
		if (amount <= balance) {
			this->balance -= amount;
			recipient.balance += amount;
			cout << "\nSuccessful transaction.\n";
		}
		else {
			cout << "Amount exceeded";
		}
	}
	void checkBalance() {
		cout << "Balance: " << this->balance << endl;
	}
	
	/*double credit(double amount) {
		balance += amount;
	}*/

};

static vector<Client> allClients;
static vector<Client>::iterator clIt;

