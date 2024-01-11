#pragma once
#include<iostream>
#include<string>
using namespace std;

class Validation
{
public:
	static bool Validate_Name(string name) {
		for (unsigned int i = 0; i < name.size(); i++) {
			if (!isalpha(name[i]) || name.size() < 5 || name.size() > 20) {
				return false;
			}
		}
		return true;
	}

	static string enterName()
	{
		string name;
		system("cls");
		cout << "Enter name: ";
		cin >> name;
		while (!Validate_Name(name)) {
			system("cls");
			cout << "Invalid name!\n";
			cout << "Name must be 5 to 20 alphabetic.\n" << endl;
			cout << "Enter name: ";
			cin >> name;
		}
		return name;
	}

	static bool Validate_Password(string pass) {
		for (int i = 0; i < pass.size(); i++) {
			if (pass[i] == ' ' || pass.size() < 8 || pass.size() > 20) {
				return false;
			}
		}
		return true;
	}

	static string enterPassword()
	{
		string password;
		system("cls");
		cout << "Enter password: ";
		cin >> password;
		while (!Validate_Password(password)) {
			system("cls");
			cout << "Invalid password!\n";
			cout << "Password must be 8 to 20 characters.\n" << endl;
			cout << "Enter password: ";
			cin >> password;
		}
		return password;
	}

	static bool Validate_Balance(double balance){
		if (balance < 1500) {
			return false;
		}
		return true;
	}

	static double enterBalance()
	{
		double balance;
		system("cls");
		cout << "Enter balance: ";
		cin >> balance;
		while (!Validate_Balance(balance)) {
			system("cls");
			cout << "Invalid balance!\n";
			cout << "Password must be bigger than 1500.\n" << endl;
			cout << "Enter balance: ";
			cin >> balance;
		}
		return balance;
	}

	static bool Validate_Salary(double salary) {
		if (salary < 5000) {
			return false;
		}
		return true;
	}

	static double enterSalary()
	{
		double salary;
		system("cls");
		cout << "Enter password: ";
		cin >> salary;
		while (!Validate_Salary(salary)) {
			system("cls");
			cout << "Invalid salary!\n";
			cout << "salary must be above 5000.\n" << endl;
			cout << "Enter salary: ";
			cin >> salary;
		}
		return salary;
	}

};

