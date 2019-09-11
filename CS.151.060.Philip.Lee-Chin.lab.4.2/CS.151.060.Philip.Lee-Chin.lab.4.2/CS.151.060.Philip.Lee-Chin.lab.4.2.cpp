// CS.151.060.Philip.Lee-Chin.lab.4.2.cpp : Defines the entry point for the console application.
// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise 

#include <iostream> 
using namespace std;

int main()
{
	float average;                    // holds the grade average 

	cout << "Input your average:" << endl;
	cin >> average;

	if (average < 0 || average > 100)
			cout << "Invalid data" << endl;
		
	else if (average >= 90 && average <= 100)
			cout << "A" << endl;
	
	else if (average >= 80 && average <= 89)
			cout << "B" << endl;
	
	else if (average >= 60 && average <= 79)
			cout << "You Pass" << endl;

	else
		cout << "You Fail" << endl;

	return 0;
}