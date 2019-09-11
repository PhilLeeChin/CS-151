// waterbill.cpp : Defines the entry point for the console application.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quart1, quart2, quart3, quart4;
	double avg;

	cout << "Please input your water bill for quarter 1:\n";
	cin >> quart1;
	cout << "Please input your water bill for quarter 2:\n";
	cin >> quart2;
	cout << "Please input your water bill for quarter 3:\n";
	cin >> quart3;
	cout << "Please input your water bill for quarter 4:\n";
	cin >> quart4;

	cout << setprecision(2) << fixed << showpoint;
	avg = (quart1 + quart2 + quart3 + quart4) / 12.0;
	if (avg >= 75)
		cout << "Your average monthly bill is $" << avg << ". "
		<< "You are using excessive amounts of water" << endl;
	else if (avg >= 25 && avg <= 75)
		cout << "Your average monthly bill is $" << avg << ". "
		<< "You are using a typical amount of water" << endl;
	else
		cout << "Your average monthly bill is $" << avg << ". "
			 << "Thanks for conserving water" << endl;

return 0;
}

