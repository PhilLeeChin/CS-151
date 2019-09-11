// lab4.4.philip.lee-chin.CS.150.060.cpp : Defines the entry point for the console application.
// This program illustrates the use of the switch statement.
// PLACE YOUR NAME HERE
#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;
	switch (grade)
	{
		case 'A': case 'a':
		case 'B': case 'b':
		case 'C': case 'c':
		case 'D': case 'd':
			cout << "YOU PASSED!\n";
			break;
		case 'F': case 'f':
			cout << "YOU FAILED!\n";
		default:

		break;
	}



	switch (grade) // This is where the switch statement begins
	{
	case 'A': cout << "an A - excellent work !" << endl;
		break;
	case 'B': cout << "you got a B - good job" << endl;
		break;
	case 'C': cout << "earning a C is satisfactory" << endl;
		break;
	case 'D': cout << "while D is passing, there is a problem" << endl;
		break;
	case 'F': cout << "you failed - better luck next time" << endl;
		break;
	default: cout << "You did not enter an A, B, C, D, or F" << endl;
	}
	return 0;
}
