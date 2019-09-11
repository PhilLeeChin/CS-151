// exam2.cpp : Defines the entry point for the console application.

#include <iostream>
#include <string>
using namespace std;

void main()
{
	string fisName, lasName;
	string email;
	int birtYear;
	int age;

	cout << "Enter your first name: ";
	cin >> fisName;
	cout << endl;

	cout << "Enter your last name: ";
	cin >> lasName;
	cout << endl;

	cout << "Enter your year of birth: ";
	cin >> birtYear;
	cout << endl;

	cout << "Enter your email: ";
	cin >> email;
	cout << endl;

	cout << "\n\n";

	age = 2017 - birtYear;
	cout << fisName << ", " << lasName << " " << age << "\n\n";
	cout << email << endl;
}