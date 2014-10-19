// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/25/2014
// Objective: Read the Time

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants, global variables

// Function definitions
int main()
{
	// Start of Main
	
	// Let's enter the time, as a whole hour
	// In the real world, there would be a
	// function used to read the System Clock
	int time;
	system("color f0");
	cout << "Enter the time: ";
	cin >> time;
	
	
	// If it's after 10 (let's say 10 PM in this case)
	if (time > 10)
	{
		cout << "sleep\n";
	}
	
	// Let's say it's before 10 PM
	else
	{
		cout << "play\n";
	}
	
	if (time < 3)
	{
		cout << "Time for lunch.\n";
		cout << "I crave for Seafood from Abbey's "
			 << "Red Lobster!\n";	
	}
	else
	{
		cout << "Time for Starbucks.\n";
	}
	
	// Pause the Terminal
	system("pause");

	
	return 0;
} // End of main
