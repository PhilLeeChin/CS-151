// HW2.2.Philip.Lee.Chin.CS151.060.cpp : Defines the entry point for the console application.
// This program calculates the total annual earnings of an employee for a year

// PHILIP LEE-CHIN

#include <iostream> 
#include <string> 
using namespace std;

// Definition of Variables
float payAmount = 1700.25;		// Defines a constant payAmount = 1700.25
int payPeriods = 26;					// Total times paid in the year
int annualPay = payAmount * payPeriods; // Total annual pay

int main()
{
	cout << "An employee gets paid every two weeks"
			" and earns $" << payAmount << " each pay period " << endl;
	cout <<	"In a year the employee gets paid " << payPeriods << " times" << endl;

	cout << "The employee annual pay for the year is $" << annualPay << endl;

	return 0;
}