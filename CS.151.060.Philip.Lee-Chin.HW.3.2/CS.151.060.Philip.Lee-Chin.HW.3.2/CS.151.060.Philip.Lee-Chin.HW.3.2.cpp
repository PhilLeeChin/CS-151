// CS.151.060.Philip.Lee-Chin.HW.3.2.cpp : Defines the entry point for the console application.
// This program will read the principal of the saving account, the rate of interest
// and the number of times the interest is compounded for a year.
// It will print out the rate of interest, times compound, principal
// interest, and amount in saving.
// The input will come from the keyboard, and the output will show on the screen.

// PHILIP LEE-CHIN

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	float intRate;
	int timCom;
	float Princ;
	float Inter;
	float amoSav;

	cout << "Please input the principal: ";
	cin >> Princ;

	cout << "Please input the interest rate: ";
	cin >> intRate;

	cout << "Please input the number of times interest is compounded: ";
	cin >> timCom;
	cout << endl;

	amoSav = Princ*pow((1 + (intRate/100) / timCom), timCom);
	Inter = amoSav - Princ;

	cout << left << setw(15) << "Interest Rate:" << right << setw(15) << intRate << "%\n";
	cout << left << setw(15) << "Times Compounded:" << right << setw(13) << timCom << "\n";
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(15) << "Principal:" << right << setw(8) << "$ " << Princ << "\n";
	cout << left << setw(15) << "Interest:" << right << setw(10) << "$   " << Inter << "\n";
	cout << left << setw(15) << "Amount in Saving:" << right << setw(6) << "$ " << amoSav << "\n";
}