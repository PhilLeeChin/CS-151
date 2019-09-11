// CS.150.060.Philip.Lee-Chin.HW.2.2.cpp : Defines the entry point for the console application.
// This program is to calculate Kathryn amount paid for stocks, amount of commission, and total paid

#include <iostream>
#include <string>
using namespace std;

int main()
{
	float sharesofStock = 600;			// Defines a constant variable share of stock
	float amountpaidStock = 21.77;		// Defines a constant variable amount paid for stock
	float commission = 2.0 / 100;		// Defines percentage of commission
	int totalcostStock = sharesofStock * amountpaidStock;		// Total cost of stock
	int totalCommission = totalcostStock * commission;			// Total commission
	int totalamount = totalcostStock + totalCommission;			// Total amount

	cout << "Kathryn bought " << sharesofStock << " for $" << totalcostStock << "." << endl;
	cout << "She got $" << totalCommission << " commission." << endl;
	cout << "She earned a total of $" << totalamount << "." << endl;

return 0;
}

