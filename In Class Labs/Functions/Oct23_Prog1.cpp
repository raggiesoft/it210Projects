#include <iostream>
#include <iomanip>

float areaOfCircle(float);
void displayCircleArea();
void displayFName();

using namespace std;
int main()
{
	system("color f0");
	displayCircleArea();
	cout << "\n";
	displayFName();
	cout << "\n";
	system("pause");
	return 0;
}

// Assume Function is already prototyped
// We are going to calculate the area of the circle
// The user will give us the Radius
float areaOfCircle(float circleRadius)
{
	float area, pi;
	pi = 3.141592653589793; // OneNote insists on filling this in
	area = pi * circleRadius * circleRadius; // Let's get the area
	return area; // Returns the area as a float
}

// Assume this is already prototyped
// Build on what was done with areaOfCircle()
void displayCircleArea()
{
	float cirRadius;
	cout << "Please enter the radius of Circle: ";
	cin >> cirRadius;
	cout << areaOfCircle(cirRadius);
}

void displayFName()
{
	string fname;
	cout << "Please enter your first name: ";
	cin >> fname;
	cout << "Welcome " << fname << "\n";
}
