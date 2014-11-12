// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 11/20/2014
// Objective: Credit Card Interest Calculator 2.0

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
	
	// Let's go on and clear out the old data
	// in the output log
	fout.open("foutlog4.txt");
	fout << "";
	fout.close();
	
	// Let's see if we can open the Recordset
	if (!doesFileExist(true,"input4.txt"))
	{
		cout << "Could not find the requested file: input4.txt\n";
		system("pause");
		return 1;
	}
	
	// Let's see if we can create the Log
	if (!doesFileExist(false, "foutlog4.txt"))
	{
		cout << "Unable to create requested file: foutlog4.txt\n";
		system("pause");
		return 2;
	}
	
	// Let's build a header.  Parameters Taken:
	// * Assignment Number
	// * Program Number
	// * Total number of Assignments
	// * Due Day
	// * Due Month (ZERO-based index)
	// * Due Year
	buildHeader(1, 1, 1, 20, 10, 2014, "foutlog4.txt");
	
	// Let's reopen the output log
	// and let's APPend everything to the End
	fout.open("foutlog4.txt", ios::app);
	
	
	// Files requested are available.  Inform the user
	cout << "\nINPUT AND OUTPUT TEXT FILES WERE OPENED SUCCESSFULLY!\n\n";
	fout << "\nINPUT AND OUTPUT TEXT FILES WERE OPENED SUCCESSFULLY!\n\n";
	
	// The log needs to be closed EVERY TIME you call
	// a function that uses the Log
	fout.close();
	
	
	// Print instructions to the user
	printInstructions("foutlog4.txt");
	
	// Let's have some spacing for Readability
	cout << "\n\n";
	fout.close();
	// Let's have a look at our recordset
	// and display it to the user
	readCustomerData("input4.txt", "foutlog4.txt");
	fout.close();
	system("pause");
	return 0;
}
