// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 10/30/2014
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

using namespace std;

int main()
{
	// Inverse Video
	system("color f0");
	
	// Reserve a Block of Memory
	// for an output log
	ofstream fout;
	
	// String to hold the username
	string userName;
	float userIncome, userRate;
	
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
	
	
	fout << "";
	
	// Close the Log
	fout.close();
	
	// Let's build a header.  Parameters Taken:
	// * Assignment Number
	// * Program Number
	// * Total number of Assignments
	// * Due Day
	// * Due Month (ZERO-based index)
	// * Due Year
	// * Output Log File
	buildHeader(1, 1, 1, 30, 9, 2014, "foutlog.txt");
	
	// Let's get the user to enter their
	// first and last name
	userName = getUserName();
	
	// We need the User's Income
	userIncome = getIncome();
	
	// We need to get the Rate
	userRate = getRate(userIncome);
	
	// Display it to the User
	showOutput(userName, userIncome, userRate, "foutlog.txt");
	
	// Pause the Terminal
	system("pause");
	
	// Let's tell the OS that
	// everything is OK
	return 0;
}


// Let's get the user to enter their
// first and last name
// Return as a String
string getUserName()
{
	string firstName, lastName;
	cout << "Please enter your first and last name: ";
	cin >> firstName >> lastName;
	return firstName + " " + lastName;
}

// Let's get the User's icome
// and return as a Float
float getIncome()
{
	float income;
	cout << "Please enter the income: ";
	cin >> income;
	return income;
}

float getRate(float income)
{
	float rate;
	if (income > 50000)
	{
		rate = 0.2;
	}
	else
	{
		rate = 0.1;
	}
	return rate;
}

// Let's send the user data to both the Terminal
// and Output Log
void showOutput(string userName, float userIncome, float userRate, char* outputLog)
{
	// Now, we output it to both the terminal
	// and the Log
	
	// Reserve a Block of Memory
	// for an output log
	ofstream fout;
	
	// The log needs to be opened
	// The cursor needs to be
	// * At The End of the file
	// * APPend the line to the file (NOT overwrite)
	fout.open(outputLog, ios::ate | ios::app);
	
	// Output the name to the Terminal
	cout << "Your name is " << userName << "\n";
	
	// Write to our log
	fout << "Your name is " << userName << "\n";
	
	// Let's get the user's income
	cout << "Income = $" << fixed << setprecision(2) << userIncome << "\n";
	fout << "Income = $" << fixed << setprecision(2) << userIncome << "\n";
	
	// Let's get the Rate
	cout << "Rate = " << (userRate * 100) << "%\n";
	fout << "Rate = " << (userRate * 100) << "%\n";
	
	// Close the Log
	fout.close();
}
