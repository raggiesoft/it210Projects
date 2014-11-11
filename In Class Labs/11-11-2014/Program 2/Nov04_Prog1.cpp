// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 11/11/2014
// Objective: Calling Functions

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <fstream>

// Custom Headers (all Prototypes are here)
// Imagine these as a collection of
// dictionary entries.  You'd learn in IT 310
// I learned it at TCC's ITP 134 C++ class
#include "rsfunct.h"
#include "rslib.h"

// Function Definitions
int main()
{	
	// Color-Inverse the Terminal
	system("color f0");
	
	// Reserve a Block of Memory
	// for an output log
	ofstream fout;
	
	// Open an Output Log
	// Let's erase the current contents
	// to start things over from scratch
	fout.open("foutlog.txt");
	
	// Unable to create output log
	// in a Non-Writable Directory?
	// Exit with ERROR_DIR_READ_ONLY
	if (!fout)
	{
		cout << "UNABLE TO CREATE OUTPUT LOG!  NOW EXITING!\n";
		system("pause");
		return 1;
	}
	
	// Erase the contents of the existing log
	fout << "";
	
	// Close the Log
	fout.close();
	
	// Show the Header
	buildHeader(1, 2, 2, 11, 10, 2014, "foutlog.txt");
	
	string firstName, lastName;
	userName(firstName, lastName, "foutlog.txt");
	
	cout << "Your name is " << firstName << " " << lastName << "\n";
	fout.open("foutlog.txt", ios::app);
	fout << "Your name is " << firstName << " " << lastName << "\n";
	fout.close();
	
	// Pause the Terminal
	system("pause");
	
	// Return control to the OS
	return 0;
}

void userName(string& firstName, string& lastName, char* outputLog)
{
	ofstream fout;
	fout.open(outputLog, ios::app);
	
	cout << "Enter your first and last name: ";
	fout << "Enter your first and last name: \n";
	cin >> firstName >> lastName;
	
	fout.close();
}
