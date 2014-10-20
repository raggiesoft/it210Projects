// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 10/09/2014
// Objective: Credit Card Interest Calculator
//
// This file takes the credit card info given
// and formats it into a nice little table

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include "rslib.h"
#include "rsfunc.h"
using namespace std;

// Global constants, global variables

// Function Prototypes

// Function definitions

// displayStatement takes everything that the user entered
// and formats it into a nice little DOS table
// It does the calculations for the user
void displayStatement(string cardNumber, float cardBalance, float paymentMade, 
int daysInCycle, int daysPaidBeforeCycle)
{
	// Some local variables to hold our numbers
	float averageDailyBalance;
	float APR, cardInterest, displayAPR;
	
	// Build the Spacer Chart
	buildLine('*', 49);
	cout << "12345678901234567890123456789012345678901234567890\n";
	buildLine('*', 49);
	cout << "\n";
	
	// Show the first and last name
	cout << setw(25) << left << getUserFirstName();
	cout << setw(14) << left << getUserLastName();
	cout << setw(10) << left << cardNumber << "\n";
	
	// Separator
	buildLine('-', 49);
	
	// Print the Header
	cout << setw(25) << left << "FIRST NAME";
	cout << setw(14) << left << "LAST NAME";
	cout << setw(10) << left << "CARD NUMBER\n";
	
	// Print out another Separator
	buildLine('=', 49);
	
	// Let's show the credit card balance'
	averageDailyBalance = (cardBalance * daysInCycle - paymentMade * daysPaidBeforeCycle) / daysInCycle;
	
	// Let's get the correct APR
	// 5%, 10%, or 15% depending on balance
	APR = getAPR(averageDailyBalance);
	
	// Let's finish writing the table
	cout << setw(40) << setfill('.') << left << "Credit Card Balance";
	cout << setw(10) << setfill(' ') << right << fixed
		 << setprecision(2) << cardBalance << "\n\n";
	
	// Let's display the APR as a human readable percent
	displayAPR = APR * 100;
	
	// Let's write the APR to our table
	cout << setw(40) << setfill('.') << left << "Annual Interest Rate";
	cout << setw(10) << setfill(' ') << right << fixed
		 << setprecision(2) << displayAPR << "\n\n";
	
	// This is the payment made
	cout << setw(40) << setfill('.') << left << "Payment Made";
	cout << setw(10) << setfill(' ') << right << fixed
		 << setprecision(2) << paymentMade << "\n\n";
		 
	// Days in the Billing Cycle
	cout << setw(40) << setfill('.') << left << "Number of Days in Billing Cycle";
	cout << setw(10) << setfill(' ') << right << fixed
		 << setprecision(0) << daysInCycle << "\n\n";
		 
	// Days before the billing cycle
	cout << setw(40) << setfill('.') << left << "Number of Days Before Billing Cycle";
	cout << setw(10) << setfill(' ') << right << fixed
		 << setprecision(0) << daysPaidBeforeCycle << "\n\n";
		 
	// Average Daily Balance
	cout << setw(40) << setfill('.') << left << "Average Daily Balance";
	cout << setw(10) << setfill(' ') << right << fixed
		 << setprecision(2) << averageDailyBalance << "\n\n";
		 
	// Let's get the interest on the Average Daily Balance
	cout << setw(40) << setfill('.') << left << "Interest on Unpaid Balance";
	cout << setw(10) << setfill(' ') << right << fixed
		 << setprecision(2) << getInterest(averageDailyBalance) << "\n\n";
	
	// Build one last line
	buildLine('*', 49);
}

// This returns the correct interest rate depending on the
// average daily balance
float getAPR(int averageDailyBalance)
{
	// The APR is different depending on how
	// much debt you have: 5%, 10%, or 15%
	float localAPR;
	
	// Less than $100 = 5%
	if (averageDailyBalance < 100)
	{
		localAPR = 0.05;
	}
	
	// $100 to $1000 = 10%
	else if ((averageDailyBalance >= 100) && (averageDailyBalance <= 1000))
	{
		localAPR = 0.1;
	}
	
	// $1001 and above = 15%
	else
	{
		localAPR = 0.15;
	}
	
	// Return that APR
	return localAPR;
}

// This gets the amount of interest due
float getInterest(float averageDailyBalance)
{
	float interest;
	float APR;
	interest = averageDailyBalance * getAPR(averageDailyBalance) / 12;
	
	return interest;
}
