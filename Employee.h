#pragma once
#include "Client.h"
class Employee : public Person
{
protected:
	double salary;
public:
	Employee() :Person() {
		this->salary = 0.0;
	}
	Employee(int id, string name, string pass, double salary) : Person(id, name, pass) {
		//this->salary = salary;
		setSalary(salary);
	}
	void setSalary(double salary) {
		if (Validation::Validate_Salary(salary))
			this->salary = salary;
		
	}
	double getSalary() {
		return this->salary;
	}
	void display() {
		Person::display();
		cout << "salary: " << this->salary << endl;
	}
	void addClient(Client& client)
	{
		allClients.push_back(client);
	}
	Client* searchClient(int id) {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			if (clIt->getId() == id)
				return clIt._Ptr;
		}
		return NULL;
	}
	void listClient()
	{
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			clIt->display();
			cout << "------------------------------------\n";
		}
	}
	void editClient(int id, string name, string password, double balance) {
		searchClient(id)->setName(name);
		searchClient(id)->setPass(password);
		searchClient(id)->setBalance(balance);
	}

};
static vector<Employee> allEmployees;
static vector<Employee>::iterator eIt;

