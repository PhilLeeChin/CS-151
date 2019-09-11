// CS.151.060.Philip.Lee-Chin.HW.3.cpp : Defines the entry point for the console application.
// This program will read te name of a movie, amount of tickets sold for adults and children
// It will then priint out the total Gross profit, Net profit, and amount paid to Distributor
// The input wil come from the keyboard and the output on the screen

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void main()
{
	string movieName;
	int adultTickcost = 6;
	int childTickcost = 3;
	int adultTick, childTick;
	float grossProfit, netProfit;
	float percent = 0.20;
	float paidDistributors;
	float tickpriceAdult, tickpriceChild;

	cout << "Enter the name of the movie: ";
	getline(cin, movieName);

	cout << "Enter # of adult tickets sold: ";
	cin >> adultTick;

	cout << "Enter # of child tickets sold: ";
	cin >> childTick;
	cout << endl;

	tickpriceAdult = adultTick * adultTickcost;
	tickpriceChild = childTick * childTickcost;

	cout << setprecision(2) << fixed << showpoint;
	grossProfit = tickpriceAdult + tickpriceChild;
	netProfit = grossProfit * percent;
	paidDistributors = grossProfit - netProfit;

	
	cout << left << setw(31) << "Movie Name: " << left << setw(1) << "\"" << movieName << "\"" << "\n";
	cout << left << setw(20) << "Adult Tickets Sold: " << right << setw(16) << adultTick << "\n";
	cout << left << setw(20) << "Child Tickets Sold: " << right << setw(16) << childTick << "\n";
	cout << left << setw(25) << "Gross Box Office Profit: " << right << setw(8) << "$ " << grossProfit << "\n";
	cout << left << setw(25) << "Net Box Office Profit: " << right << setw(9) << "$  " << netProfit << "\n";
	cout << left << setw(25) << "Amount Paid to Distributor: " << right << setw(5) << "$ " << paidDistributors << "\n";

}

