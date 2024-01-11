#pragma once
#include <iostream>
#include"Validation.h"
using namespace std;

class Person
{
protected:
	int id = 0;
	string name;
	string pass;
public:

	Person() {
		this->name = " ";
		this->id = 0;
		this->pass = " ";
	}

	Person(int id, string name, string pass)
	{
		this->id = id;
		this->name = name;
		this->pass = pass;
	}

	//Setters
	void setId(int id) {
		this->id = id;
	}

	void setName(string name) {
		if (Validation::Validate_Name(name))
			this->name = name;
		else
			cout << "Invalid Name";
	}

	void setPass(string pass) {
		if (Validation::Validate_Password(pass)) {
			this->pass = pass;
		}
		else
			cout << "Invalid password";
	}

	//getters
	int getId() {
		return this->id;
	}

	string getName() {
		return this->name;
	}

	string getPass() {
		return this->pass;
	}

	//Methods
	void display() {
		cout << "ID: " << this->id << endl
			<< "Name: " << this->name << endl
			<< "Password: " << this->pass << endl;
	}

};

