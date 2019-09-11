// Lab HW 4.CS.150.060.Philip.Lee-Chin.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


void main()
{
	int Coffee = 1;
	int Tea = 1;
	int Coke = 1;
	int orangeJuice = 1;
	int beverages = Coffee; Tea; Coke; orangeJuice;
	int person;

	cout << "1.Coffee\n";
	cout << "2.Tea\n";
	cout << "3.Coke\n";
	cout << "4.Orange Juice\n";
	cin >> person;
	
	for (int num = 1; num >= person; num++)
	{
		cout << "Please input the favorite beverage of person #" << num << "\n";
		cout << "Choose 1,2,3, or 4 from the above menu or -1 to exit the program" << endl;
	}



}

