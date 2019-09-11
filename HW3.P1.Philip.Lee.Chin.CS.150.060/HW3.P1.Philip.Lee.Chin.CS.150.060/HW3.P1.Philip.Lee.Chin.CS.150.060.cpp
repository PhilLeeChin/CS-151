// HW3.P1.Philip.Lee.Chin.CS.150.060.cpp : Defines the entry point for the console application.
// This program will read the water bill for quater 1, 2, 3 and 44
// It will then print out the average monthly water bill
// The input will come from the keyboard and the output on the screen

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int quarter1;	// Contains the first quarterly bill
	int quarter2;	// Contains the second quarterly bill
	int quarter3;	// Contains the third quarterly bill
	int quarter4;	// Contains the fourth quarterly bill
	double avgWaterbill;	// Contains the average water bill for all four quarters

	cout << "Please input your water bill for quarter1:" << endl;
	cin >> quarter1;
	cout << "Please input your water bill for quarter2:" << endl;
	cin >> quarter2;
	cout << "PLease input your water bill for quarter3:" << endl;
	cin >> quarter3;
	cout << "Please input your water bill for quarter4:" << endl;
	cin >> quarter4;

	cout << setprecision(2) << fixed << showpoint;
	avgWaterbill = ((quarter1 + quarter2 + quarter3 + quarter4) / 12.0);

	cout << "Your average monthly bill is $" << avgWaterbill << endl;
	{
		if (avgWaterbill > 75)
			cout << "You are using excessive amounts of water." << endl;
		else if (avgWaterbill >= 25 && avgWaterbill <= 75)
			cout << "You are using a typical amount of water." << endl;
		else
			cout << "Thank you for conserving water." << endl;
	}

	return 0;
}

