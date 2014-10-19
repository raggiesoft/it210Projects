// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
//
// This Library of functions is used to build the
// header of my C++ classwork applications

// Preprocessor Directives
#include <iostream>
#include <iomanip>

// rslib.h contains the function prototypes
// to construct the Header seen in my assignments
#include "rslib.h"
using namespace std;
// List of functions
// This builds our Header
void buildHeader(int assignNum, int progNum, int progTot,
int dueDay, int dueMonth, int dueYear)
{
	// Begin by building the basic header
	
	buildStarLine(43);
	cout << "*   IT210 Business Applications with C++   *" << endl;
	cout << "*   Programmer: Michael Ragsdale           *" << endl;
	
	// Print out the due date
	setDueDate(dueMonth, dueDay, dueYear);
	
	// Print out the Assignment Number
	cout << "*   Assignment " << assignNum << " - Program "
	<< progNum << " of " << progTot << "          *" << endl;
	
	// The closing Star Line
	buildStarLine(43);
}

// Builds a line of stars
void buildStarLine(int totalStars)
{
	// Let's build the first line of stars
	
	// First, we need an integer counter
	int i = 0;
	
	// Loop until we get to the total requested stars
	while (i >= totalStars)
	{
		// Last star to add
		// Print the star, then end the line
		if (i != totalStars)
		{
			cout << "*";
			i++; // Count up
		}
		
		// Let's print a star
		else
		{
			cout << "*" << endl;
			i++; // Count up
		}	
	}
}

// Writes out the Due Date line
void setDueDate(int dueMonth, int dueDay, int dueYear)
{
	// Print out the beginning of the line
	cout << "*    Date: ";
	
	// A switch for the month
	switch (dueMonth)
	{
		case 0:
			cout << "Jan";
			break;
		case 1:
			cout << "Feb";
			break;
		case 2:
			cout << "Mar";
			break;
		case 3:
			cout << "Apr";
			break;
		case 4:
			cout << "May";
			break;
		case 5:
			cout << "Jun";
			break;
		case 6:
			cout << "Jul";
			break;
		case 7:
			cout << "Aug";
			break;
		case 8:
			cout << "Sep";
			break;
		case 9:
			cout << "Oct";
			break;
		case 10:
			cout << "Nov";
			break;
		case 11:
			cout << "Dec";
			break;
	}
	
	// Switch for the day.  Add a 0
	// for spacing reasons if needed
	if (dueDay < 10)
	{
		cout << "0" << dueDay;
	}
	else
	{
		cout << dueDay;
	}
	cout << ", " << dueYear << "                     *" << endl;
	
	
}
