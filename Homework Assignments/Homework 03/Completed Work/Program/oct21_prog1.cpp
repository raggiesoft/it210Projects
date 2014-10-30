// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 10/21/2014
// Objective: Credit Card Interest Calculator

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <fstream>

// Custom Headers
#include "rslib.h"
#include "rsfunct.h"
#include "bank.h"

using namespace std;

// Function Prototypes

// Main
int main()
{
	// Set up our Variables
	
	// Declare the file input/output variables
	ifstream fin;
	ofstream fout;
	
	// Color-Inverse the Terminal
	system("color f0");
	
	fout.open("output3.txt", ios::app);
	
	// Let's build a header.  Parameters Taken:
	// * Assignment Number
	// * Program Number
	// * Total number of Assignments
	// * Due Day
	// * Due Month (ZERO-based index)
	// * Due Year
	buildHeader(1, 1, 1, 21, 9, 2014, "output3.txt");
	
	// Let's see if we can open the Recordset
	if (!doesFileExist(true,"input3.txt"))
	{
		cout << "Could not find the requested file: input3.txt\n";
		system("pause");
		return 1;
	}
	
	// Let's see if we can create the Log
	if (!doesFileExist(false, "output3.txt"))
	{
		cout << "Unable to create requested file: output3.txt\n";
		system("pause");
		return 2;
	}
	fout.open("output3.txt", ios::app);
	// Files requested are available.  Inform the user
	cout << "\nINPUT AND OUTPUT TEXT FILES WERE OPENED SUCCESSFULLY!\n\n";
	fout << "\nINPUT AND OUTPUT TEXT FILES WERE OPENED SUCCESSFULLY!\n\n";
	fout.close();
	// Print instructions to the user
	printInstructions("output3.txt");
	
	// Let's have some spacing for Readability
	cout << "\n\n";
	fout.close();
	// Let's have a look at our recordset
	// and display it to the user
	readCustomerData("input3.txt", "output3.txt");
	fout.close();
	system("pause");
	return 0;
}
