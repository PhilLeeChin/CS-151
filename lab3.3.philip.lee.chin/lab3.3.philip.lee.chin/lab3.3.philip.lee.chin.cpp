// lab3.3.philip.lee.chin.cpp : Defines the entry point for the console application.
// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.
// PHILIP LEE-CHIN
#include <iostream> 
#include <string>
// Fill in the code to bring in the library for formatted output.
using namespace std;
int main()
{
	float price1, price2;                // The price of 2 items
		int   quantity1, quantity2;          // The quantity of 2 items
		cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the price and quantity of the first item" << endl; 
		// Fill in the input statement below that reads in price1 and quantity1 from the keyboard.
		// Fill in the output statement below that prints a	prompt for the second price and quantity.
		// Fill in the input statement below that reads in 	price2 and quantity2 from the keyboard.
		cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n"; 
		// Fill in the output statement below that prints the first price and quantity.
		// Be sure to use setw() statements. 
		// Fill in the output statement below that prints the second price and quantity.
		return 0;
}