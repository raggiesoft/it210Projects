// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 11/20/2014
// Objective: Credit Card Interest Calculator 2.0
//
// This Library of functions is used to build the
// header of my C++ classwork applications

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <fstream>

// rslib.h contains the function prototypes
// to construct the Header seen in my assignments
#include "rslib.h"
using namespace std;
// List of functions
// This builds our Header
void buildHeader(int assignNum, int progNum, int progTot,
int dueDay, int dueMonth, int dueYear, char* outputLog)
{
	// Begin by building the basic header
	
	
	// Open the output log, start the cursor At The End of the file,
	// and APPend this text to the end:
	
	buildLine('*', 43, outputLog);
	
	// We need our output log
	ofstream fout;
	
	fout.open(outputLog, ios::app);
	cout << "*   IT210 Business Applications with C++   *" << endl;
	cout << "*   Programmer: Michael Ragsdale           *" << endl;
	fout << "*   IT210 Business Applications with C++   *" << endl;
	fout << "*   Programmer: Michael Ragsdale           *" << endl;
	
	fout.close();
	// Print out the due date
	setDueDate(dueMonth, dueDay, dueYear, outputLog);
	
	// Print out the Assignment Number
	cout << "*   Assignment " << assignNum << " - Program "
	<< progNum << " of " << progTot << "          *" << endl;
	
	// Reopen the Log
	fout.open(outputLog, ios::app);
	fout << "*   Assignment " << assignNum << " - Program "
	<< progNum << " of " << progTot << "          *" << endl;

	fout.close();
	// The closing Star Line
	buildLine('*',43, outputLog);
}

// Builds a line of stars
void buildLine(char lineType, int totalStars, char* outputLog)
{
	// Let's build the first line of characters
	// Open the output log
	ofstream fout;
	fout.open(outputLog, ios::app);
	
	
	// First, we need an integer counter
	int i = 0;
	
	// Loop until we get to the total requested stars
	while (i <= totalStars)
	{
		// Let's print a Star
		if (i != totalStars)
		{
			cout << lineType;
			fout << lineType;
			i++; // Count up
		}
		
		// Print the star, then end the line
		// This is done ONLY on the last line
		else
		{
			cout << lineType << "\n";
			fout << lineType << "\n";
			i++; // Count up
		}	
	}
	
	fout.close();
}

// Writes out the Due Date line
void setDueDate(int dueMonth, int dueDay, int dueYear, char* outputLog)
{
	// Let's open the Output Log
	ofstream fout;
	fout.open(outputLog, ios::app);
	
	// Print out the beginning of the line
	cout << "*   Date: ";
	fout << "*   Date: ";
	// A switch for the month
	// Remember: indexes are
	// ZERO-based
	switch (dueMonth)
	{
		case 0:
			cout << "Jan";
			fout << "Jan";
			break;
		case 1:
			cout << "Feb";
			fout << "Feb";
			break;
		case 2:
			cout << "Mar";
			fout << "Mar";
			break;
		case 3:
			cout << "Apr";
			fout << "Apr";
			break;
		case 4:
			cout << "May";
			fout << "May";
			break;
		case 5:
			cout << "Jun";
			fout << "Jun";
			break;
		case 6:
			cout << "Jul";
			fout << "Jul";
			break;
		case 7:
			cout << "Aug";
			fout << "Aug";
			break;
		case 8:
			cout << "Sep";
			fout << "Sep";
			break;
		case 9:
			cout << "Oct";
			fout << "Oct";
			break;
		case 10:
			cout << "Nov";
			fout << "Nov";
			break;
		case 11:
			cout << "Dec";
			fout << "Dec";
			break;
		default:
			cout << "ERR";
			fout << "ERR";
			break;
	}
	
	// Space between the Month and the Day
	cout << " ";
	fout << " ";
	
	// Switch for the day.  Add a 0
	// for spacing reasons if needed
	if (dueDay < 10)
	{
		cout << "0" << dueDay;
		fout << "0" << dueDay;
	}
	else
	{
		cout << dueDay;
		fout << dueDay;
	}
	cout << ", " << dueYear << "                     *" << endl;
	fout << ", " << dueYear << "                     *" << endl;
	fout.close();
}
