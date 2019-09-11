// CS.151.060.HW.2.1.Philip.Lee-Chin.cpp : Defines the entry point for the console application.
// This program calculates the total annual earnings of an employee for a year

#include <iostream>
#include <string>
using namespace std;

void main()
{
	//Definition of Variables
	float payAmount = 1700.25;						// Defines a constant pay amount of $1700.25
	int payPeriods = 26;							// Total times paid in the year
	int annualPay = payAmount * payPeriods;			// Total annual pay

	cout << "An employee gets paid every two weeks"
		" and earns $" << payAmount << " each pay period." << endl;
	cout << "In a year the employee gets paid " << payPeriods << " times." << endl;

	cout << "The employee annual pay or the year is $" << annualPay << "." << endl;

}
