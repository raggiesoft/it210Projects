// Preprocessor Directives
#include <iostream>
#include <iomanip>

#include "rslib.h"
#include "rsfunc.h"
using namespace std;
// Global constants, global variables

// The user's first and last name
string userFirstName, userLastName;

// The user's credit card number
// We are using a String because there
// will be NO math used on the card number
string cardNumber;

// Function Prototypes

// Function definitions

// This prints out the instructions for using the program
void printInstructions()
{
	cout << "\n";
	cout << "This program calculates the interest on unpaid\n";
	cout << "credit card balances using the average daily balance\n";
	cout << "\n";
}

// These getters & setters let us access the users
// first & last name
//
// Carried over from TCC's ITP 120 (Intro to Java)
string getUserFirstName()
{
	return userFirstName;
}

void setUserFirstName(string theUserFirstName)
{
	userFirstName = theUserFirstName;
}

string getUserLastName()
{
	return userLastName;
}

void setUserLastName(string theUserLastName)
{
	userLastName = theUserLastName;
}

// Let's mess with the credit card number
// Demonstrating an alternative way to use
// a function, as opposed to the Getter &
// Setters shown above
string getCardNumber()
{
	// Let's set up a Sentinal Value integer
	// which will cause us to exit the Loop
	// Start with a weird number
	int cardSentinal = -1;
	
	
	
	// Loop until the user is satisfied they entered
	// the correct card number
	while (cardSentinal != 0)
	{
		// Double Space if the user tries again
		if (cardSentinal == 1)
		{
			cout << "\n";
		}
		cout << "Please enter the credit card number: ";
		cin >> cardNumber;
		cout << "\nYou entered " << cardNumber << "\n";
		cout << "\nIf this is correct, press 0 or press 1 to try again: ";
		cin >> cardSentinal;
	}
	
	// Return that number as a string
	return cardNumber;
}

