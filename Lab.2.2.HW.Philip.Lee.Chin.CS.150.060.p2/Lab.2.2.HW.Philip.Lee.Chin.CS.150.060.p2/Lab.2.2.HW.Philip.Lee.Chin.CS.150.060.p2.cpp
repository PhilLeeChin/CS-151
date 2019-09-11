// Lab.2.2.HW.Philip.Lee.Chin.CS.150.060.p2.cpp : Defines the entry point for the console application.
// This program is to calculate Kathryn amount paid for stocks, amount of commission, and toal paid

// PHILIP LEE-CHIN

#include <iostream>
#include <string>
using namespace std;

// Definition of variables
float sharesofStock = 600;	// Defines a constant variable shareofStock
float amountpaidStock = 21.77;	// Defines a constant variable amountpaidStock
float commission = 2.0/100;
int totalcostStock = sharesofStock * amountpaidStock;	// Total cost of stock
int totalCommission = totalcostStock * commission;	// Total commission
int totalamount = totalcostStock + totalCommission;			// Total amount

int main()
{

	cout << "Kathryn bought " << sharesofStock << " for " << totalcostStock << endl;

	cout << "She got " << totalCommission << " commission" << endl;

	cout << "she earned a total of $" << totalamount << endl;

	return 0;
}
