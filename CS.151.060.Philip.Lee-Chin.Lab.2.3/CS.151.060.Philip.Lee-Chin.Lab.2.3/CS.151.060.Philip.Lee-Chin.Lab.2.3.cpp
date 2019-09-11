// CS.151.060.Philip.Lee-Chin.Lab.2.3.cpp : Defines the entry point for the console application.
// This program will output the perimeter and area
// of the rectangle with given length and width
// Philip Lee-Chin

#include <iostream>
using namespace std;
const double len = 8;			// Defines a constant length = 8
const double wid = 3;			// Defines a constant width = 3
void main()
{
	double area;				// Defines the variable area (of a rectangle)
	float perimeter;			// Defines the variable perimeter (of a rectangle)
	perimeter = 2 * (len + wid);	// Computes perimeter
	area = len * wid;			// Computes area
	
	cout << "The area of the rectangle is " << area << endl;
	cout << "The perimeter of a rectangle is " << perimeter << endl;

}
