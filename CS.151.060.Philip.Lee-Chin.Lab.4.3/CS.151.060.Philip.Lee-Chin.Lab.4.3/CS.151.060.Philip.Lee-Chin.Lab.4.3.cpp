// CS.151.060.Philip.Lee-Chin.Lab.4.3.cpp : Defines the entry point for the console application.
// This program illustrates the use of logical operators
#include <iostream>
using namespace std;

int main()
{
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior ), or 4 (senior)"  
		<< endl << endl;
	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;

	// Add decision (if) statements below to display "It is time to graduate soon"  
	// if the student is a senior and the gpa is greater than or equal to 2.0.
	// If the student is not a senior or the gpa is less than 2.0,
	// display "You need more schooling".

	if (year == 4 && gpa >= 2.0)
		cout << "It is time to graduate soon." << endl;

	else if (year != 4 && gpa < 2.0)
		cout << "You need more schooling." << endl;

	else
		cout << "Invalid data. Try again" << endl;
	return 0;
}
