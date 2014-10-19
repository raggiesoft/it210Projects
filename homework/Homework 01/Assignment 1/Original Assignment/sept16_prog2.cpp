// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/15/2014
// Objective: Credit Card Balance Calculator

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void buildHeader(int, int, int);
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
	buildHeader(1, 2, 2);
	
	// Spacing things out
	cout << endl;
	
	// Let's print out the instuctions
	giveInstructions();
	
	// Let's gather information
	// Start with the User Name
	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Please enter your last name: ";
	cin >> lastName;
	
	
	// Credit Card Number
	cout << "Please enter the card number: ";
	cin >> cardNumber;
	
	// APR
	cout << "Please enter the annual interest rate %: ";
	cin >> apr;
	
	// Balance on Bill
	cout << "Please enter the balance on the credit card bill: ";
	cin >> cardBalance;
	
	// Last payment made
	cout << "Please enter the payment you made: ";
	cin >> lastPayment;
	
	// Number of days in the Billing Cycle
	cout << "Please enter the number of days in the billing cycle: ";
	cin >> daysInBillingCycle;
	
	// Number of days payment was made before the billing cycle
	cout << "Please enter the number of days payment was made"
	<< " before the billing cycle: ";
	cin >> daysPaymentBeforeCycle;
	
	
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
	
	// Pauses the Terminal.  Remember: not needed in New Bloodshed
	// Included for the sake of completeness
	//system("pause");
}

// This builds our Header
void buildHeader(int assignNum, int progNum, int progTot)
{
	cout << "********************************************" << endl;
	cout << "*   IT210 Business Applications with C++   *" << endl;
	cout << "*   Programmer: Michael Ragsdale           *" << endl;
	cout << "*   Date: September 16, 2014               *" << endl;
	cout << "*   Assignment " << assignNum << " - Program "
	     << progNum << " of " << progTot << "          *" << endl;
	cout << "********************************************" << endl;
}

// This gives instructions to the user
void giveInstructions()
{
	cout << "This program calculates the interest on unpaid" << endl
	<< "credit card balances using the average daily balance." << endl;
}

