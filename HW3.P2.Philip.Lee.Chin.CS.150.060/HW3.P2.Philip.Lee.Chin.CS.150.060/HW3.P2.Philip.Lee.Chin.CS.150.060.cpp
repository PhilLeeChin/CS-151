// HW3.P2.Philip.Lee.Chin.CS.150.060.cpp : Defines the entry point for the console application.
// This program will read the amount of t-shirts purchased
// It will print out the cost per shirt and the total cost
// The input will come from the keyboard and the output on the screen

#include <iostream>
#include <iomanip>
using namespace std;


void main()
{
	int numtShirts;
	double tshirtPrice;
	float costofShirt;
	float totalCost;
	float discount1;
	float discount2;
	float discount3;
	float discount4;
	float discount5;
	tshirtPrice = 12;
	discount1 = 0.0;
	discount2 = 0.10;
	discount3 = 0.15;
	discount4 = 0.20;
	discount5 = 0.25;

	cout << "How many shirts would you like?" << endl;
	cin >> numtShirts;

	costofShirt = 12 * 0.0;
	cout << setprecision(2) << fixed << showpoint;

	cout << "The cost per shirt is $" << costofShirt << " and the total cost is $" << totalCost << endl;
	{
		if (numtShirts <= 4)
			cout << "the cost of shirt is:" << costofShirt << "the total is:" << totalCost << endl;

	}
    
}

