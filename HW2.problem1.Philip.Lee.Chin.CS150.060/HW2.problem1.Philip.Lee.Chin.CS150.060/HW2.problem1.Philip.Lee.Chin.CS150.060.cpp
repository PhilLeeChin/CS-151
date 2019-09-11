// HW2.problem1.Philip.Lee.Chin.CS150.060.cpp : Defines the entry point for the console application.
// This program will read the name of a movie amount of tickects sold for adults and child
// It will then print out the total Gross profit, Net profit, and amont paid to Distributor
// The input will come from the keyboard and the out put on the screen.

// PHILIP LEE-CHIN

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char movieName[16];			// contains the name of the movie
	int adultTickets;			// contains the amount of adult tickets sold
	int childTickets;			// contains the amount of child tickets sold
	float grossProfit;			// contains the gross profit of all tickets sold
	float netProfit;			// contains 20% of the gross profit
	float paidDistributors;		// contains the amount paid to distributors
	float ticketpriceAdult;		// contains the cost of all adult tickets sold
	float ticketpriceChild;		// contains the cost of all child tickets sold

	cout << "Please input the name of the moive" << endl;
	cin.getline (movieName, 16);

	cout << "Please input the amount of adult tickets sold" << endl;
	cin >> adultTickets;
	
	cout << "Please input the amount of child tickets sold" << endl;
	cin >> childTickets;

	ticketpriceAdult = adultTickets * 6;
	ticketpriceChild = childTickets * 3;
	cout << setprecision(2) << fixed << showpoint;
	grossProfit = ticketpriceAdult + ticketpriceChild;
	netProfit = grossProfit * 20/100;
	paidDistributors = grossProfit - netProfit;

	cout << setw(10) << "Movie Name:" << setw(35) << movieName << "\n";
	cout << setw(10) << "Adult Tickets Sold:" << setw(16) << adultTickets << "\n";
	cout << setw(10) << "Child Tickets Sold:" << setw(16) << childTickets << "\n";
	cout << setw(10) << "Gross Box Office Profit:" << setw(11) << "$  " << grossProfit << "\n";
	cout << setw(10) << "Net Box Office Profit:" << setw(13) << "$  " << netProfit << "\n";
	cout << setw(10) << "Amount Paid to Distributor:" << setw(8) << "$  " << paidDistributors << "\n";

	return(0);
}
