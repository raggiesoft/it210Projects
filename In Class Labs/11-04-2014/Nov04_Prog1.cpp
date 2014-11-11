// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 11/04/2014
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
	// Variable for the User Name
	string userName;
	
	// Let's hold our number average
	float average;
	
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
	buildHeader(1, 1, 1, 4, 10, 2014, "foutlog.txt");
	
	// Let's show the user name
	userName = getUserName();
	
	// Display it in the Terminal
	cout << "Your name is " << userName << "\n";
	
	// Reopen the Log, and APPend whatever comes next
	fout.open("foutlog.txt", ios::app);
	
	// Let's Log the user's name
	fout << "Your name is " << userName << "\n";
	
	// Let's get the average of two numbers
	average = getAvgOfNum(userName);
	
	// Show to user and Write to Log
	cout << userName << ", the average of your two numbers is " << average << "\n";
	fout << userName << ", the average of your two numbers is " << average << "\n";
	
	// Close the Log
	fout.close();
	
	// Pause the Terminal
	system("pause");
	
	// Return control to the OS
	return 0;
}

// Returns the user's full name
string getUserName()
{
	string firstName;
	cout << "Please enter your first name: ";
	cin >> firstName;
	
	return firstName;
	
}

float getAvgOfNum(string userName)
{
	float num1, num2;
	cout << userName << ", please enter two numbers, separated by spaces: ";
	cin >> num1 >> num2;
	
	return (num1 + num2) / 2;
}


