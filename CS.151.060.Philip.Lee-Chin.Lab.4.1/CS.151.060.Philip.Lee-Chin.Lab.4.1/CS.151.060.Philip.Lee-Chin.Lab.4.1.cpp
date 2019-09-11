// CS.151.060.Philip.Lee-Chin.Lab.4.1.cpp : Defines the entry point for the console application.
// This program tests whether or not an initialized value of num2
// is equal to a value of num1 input by the user. 

#include <iostream> 
using namespace std;

int main()
{
	int num1,                         // num1 is not initialized 
	num2;                         // num2 has been initialized to 5 
	cout << "Please enter the first #" << endl;
	cin >> num1;
	cout << "Please enter the second #" << endl;
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	if (num1 == num2)
	{ 
		cout << "The values are the same." << endl;
		cout << "Hey, that's a coincidence!" << endl;  
	}
	else
		cout << "The values are not the same" << endl;
	return 0;
}