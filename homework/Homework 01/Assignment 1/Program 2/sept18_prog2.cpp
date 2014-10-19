// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/18/2014
// Objective: Credit Card Balance Calculator

// Preprocessor Directives
#include <iostream>
#include <iomanip>

// Custom Library which has prototypes for
// constructing the welcome header
// 
// For details on these functions,
// please view rslib.cpp
#include "rslib.h"
using namespace std;

// Function prototypes
void giveInstructions();

// Function definitions
int main()
{
	// Variables to hold everything
	string firstName, lastName;
	string cardNumber;
	float apr, unpaidAPR, cardBalance, lastPayment;
	int daysPaymentBeforeCycle;
	int daysInBillingCycle;
	
	// Your card's average daily balance
	float avgDailyBalance;
	
	// Let's start by changing the Terminal color
	system("color f0");
	
	// Let's print the header
	buildHeader(1, 2, 2, 18, 8, 2014);
	
	// Spacing things out
	cout << endl;
	
	// Let's print out the instuctions
	giveInstructions();
	
	// For spacing
	cout << endl;
	
	// Let's gather information
	// Start with the User Name
	cout << "Please enter your first name: ";
	cin >> firstName;
	
	// For more spacing
	cout << endl;
	
	cout << "Please enter your last name: ";
	cin >> lastName;
	
	cout << endl;
	
	// Credit Card Number
	cout << "Please enter the card number: ";
	cin >> cardNumber;
	cout << endl;
	
	// APR
	cout << "Please enter the annual interest rate %: ";
	cin >> apr;
	cout << endl;
	
	// Balance on Bill
	cout << "Please enter the balance on the credit card bill: ";
	cin >> cardBalance;
	cout << endl;
	
	// Last payment made
	cout << "Please enter the payment you made: ";
	cin >> lastPayment;
	cout << endl;
	
	// Number of days in the Billing Cycle
	cout << "Please enter the number of days in the billing cycle: ";
	cin >> daysInBillingCycle;
	cout << endl;
	
	// Number of days payment was made before the billing cycle
	cout << "Please enter the number of days payment was made"
	<< " before the billing cycle: ";
	cin >> daysPaymentBeforeCycle;
	cout << endl;
	
	// Now, let's do some math
	avgDailyBalance = (cardBalance * daysInBillingCycle - lastPayment
	* daysPaymentBeforeCycle) / daysInBillingCycle;
	unpaidAPR = avgDailyBalance * apr / (12 * 100);
	
	// Show it to the user
	cout << "**************************************************" << endl;
	cout << "12345678901234567890123456789012345678901234567890" << endl;
	cout << "**************************************************" << endl;
	
	cout << setw(15) << setfill(' ') << left << firstName;
	cout << setw(15) << setfill(' ') << left << lastName;
	cout << setw(20) << setfill(' ') << left << cardNumber << endl;
	cout << "--------------------------------------------------" << endl;
	cout << setw(15) << setfill(' ') << left << "FIRST NAME";
	cout << setw(15) << setfill(' ') << left << "LAST NAME";
	cout << setw(20) << setfill(' ') << left << "CARD NUMBER" << endl;
	cout << "==================================================" << endl;
	cout << endl;
	
	// Credit Card Balance
	cout << setw(40) << setfill('.') << left << "Credit Card Balance";
	cout << setw(10) << setfill(' ') << right << fixed
	<< setprecision(2) << cardBalance << endl << endl;
	
	// Annual interest rate
	cout << setw(40) << setfill('.') << left << "Annual interest rate";
	cout << setw(10) << setfill(' ') << right << fixed
	<< setprecision(2) << apr << endl << endl;
	
	// Payment made
	cout << setw(40) << setfill('.') << left << "Payment made";
	cout << setw(10) << setfill(' ') << right << fixed
	<< setprecision(2) << lastPayment << endl << endl;
	
	// Days in the Billing Cycle
	cout << setw(40) << setfill('.') << left << "Number of Days in Billing Cycle";
	cout << setw(10) << setfill(' ') << right << fixed
	<< daysInBillingCycle << endl << endl;
	
	// Days before the Billing Cycle
	cout << setw(40) << setfill('.') << left << "Number of Days before Billing Cycle";
	cout << setw(10) << setfill(' ') << right << fixed
	<< daysPaymentBeforeCycle << endl << endl;
	
	// Average Daily Balance
	cout << setw(40) << setfill('.') << left << "Average Daily Balance";
	cout << setw(10) << setfill(' ') << right << fixed
	<< setprecision(2) << avgDailyBalance << endl << endl;
	
	// Unpaid Interest
	cout << setw(40) << setfill('.') << left << "Interest on Unpaid Balance";
	cout << setw(10) << setfill(' ') << right << fixed
	<< setprecision(2) << unpaidAPR << endl << endl;
	
	// Pauses the Terminal.
	// Now used, even in New Bloodshed
	system("pause");
}


// This gives instructions to the user
void giveInstructions()
{
	cout << "This program calculates the interest on unpaid" << endl
	     << "credit card balances using the average daily balance." << endl;
}

