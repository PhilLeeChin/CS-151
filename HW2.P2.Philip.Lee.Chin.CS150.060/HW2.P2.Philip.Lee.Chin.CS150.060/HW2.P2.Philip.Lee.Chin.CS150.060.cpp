// HW2.P2.Philip.Lee.Chin.CS150.060.cpp : Defines the entry point for the console application.
// This program will read the principal of the saving account, the rate of interest, 
// and the number of times the interest is compounded for a year.
// It will print out the rate of interest, times compounded,
// principal, interest, and the amount in saving.
// The input will come from the keyboard , and the output will show on the sceen.

// PHILIP LEE-CHIN

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float rate;
	float interestRate;
	int timesCompounded;
	float Principal;
	float Interest;
	float amountSavings;
	
	cout << "Please input the principal" << endl;
	cin >> Principal;

	cout << "Please input the interest rate" << endl;
	cin >> interestRate;

	cout << "Please input the number of times interest is compounded" << endl;
	cin >> timesCompounded;

	rate = interestRate / 100;
	amountSavings = Principal*pow((1 + rate/timesCompounded),12);
	Interest = amountSavings - Principal;
	
	cout << setw(10) << "Interest Rate:" << setw(20) << interestRate << "%\n";
	cout << setw(10) << "Times Compounded:" << setw(18) << timesCompounded << "\n";
	cout << setprecision(2) << fixed << showpoint;
	cout << setw(10) << "Principal:" << setw(18) << "$  " << Principal << "\n";
	cout << setw(10) << "Interest:" << setw(20) << "$    " << Interest << "\n";
	cout << setw(10) << "Amount in Saving:" << setw(11) << "$  " << amountSavings << "\n";

	
	return 0;
}