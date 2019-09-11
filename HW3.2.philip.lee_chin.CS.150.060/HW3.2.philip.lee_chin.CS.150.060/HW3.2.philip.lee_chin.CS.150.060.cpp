// HW3.2.philip.lee_chin.CS.150.060.cpp : Defines the entry point for the console application.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int shirts, cost = 12, shirtPrice;
	double discount, totalPrice;

	cout << "How many shirts would you like?" << endl;
	cin >> shirts;  // inputs amount of shirts bought

	if (shirts < 0)
	{
		cout << "Invalid Input: Please enter a nonnegative integer" << endl; // outputs when a negative figure is input
	}

	else 
	{
		if (shirts <= 4) 
			discount = 0;
		else if (shirts <= 10) 
			discount = .10;
		else if (shirts <= 20)  
			discount = .15;
		else if (shirts <= 30)
			discount = .20;
		else if (shirts >= 31)
			discount = .25;

	shirtPrice = cost - (cost * discount); // calculates the discount for amount of shirts bought
	totalPrice =  shirtPrice * shirts; // calculates the total price after discount

	cout << "The cost per shirt is $" << shirtPrice << " and the total cost is $" << totalPrice << endl;
	}
}