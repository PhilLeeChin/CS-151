// CS.151.060.Philip.Lee-Chin.lab.2.2.cpp : Defines the entry point for the console application.
// This program will output the circumference and area
// of the circle with a given radius. 
// Philip Lee-Chin 
#include <iostream> 
using namespace std;
const double PI = 3.14;           // Define a constant PI=3.14
const double RADIUS = 5.4;        // Define a constant RADIUS = 5.4
int main()
{
	// Fill in a variable type in the blank space below (replace the underlined blank with a proper keyword)
	double area;                  // define the variable area (of circle)
	float circumference;              // define the variable circumference(of circle)
	circumference = 2 * PI * RADIUS; // computes circumference
	// Fill in the code in the blank space below to calculate the area of the circle
	area = RADIUS*RADIUS*PI;                  // computes area 
	// Fill in the code for the cout statement below that will output(with description) the circumference
	cout << "The circumference of the circle is " << circumference << endl;
	// Fill in the code for the cout statement below that will output(with description) the area of the circle
	cout << "The are aof the circle is " << area << endl;
	return 0;
}