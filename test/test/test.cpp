// test.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

void main()
{
	const int SIZE = 12;
	int rainfalls[SIZE];
	int total = 0;
	double average;

	for (int i = 0; i < SIZE; i++)
	{
		do
		{
			cout << "Enter the rainfall (positive number) for month #" << i + 1 << ":	";
			cin >> rainfalls[i];
		} while (rainfalls[i] < 0);
		total += rainfalls[i];
	}
	cout << "The total rainfall or the year is " << total << endl;
	average = total / SIZE;
	cout << "The average rainfall is " << average << endl;
}