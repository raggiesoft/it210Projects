// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/11/2014
// Objective: Loan Duration

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants, global variables

// Function definitions
int main()
{
	// We need the user's name.  First, Middle, and Last names
	// done one at a time.  To conserve memory space, the middle
	// name will be done as a character - however this would NOT
	// be necessary on a small program like this (it is only
	// so that I can get in the habit for BIG programs)
	string firstName, lastName;
	char middleName;
	
	// The loan amount, which the user will enter
	float loanAmount;
	
	// The life of the loan, in years
	int lifeOfLoan;
	
	// The interest rate of the loan
	float interestRate;
	
	// This is what the total interest will be
	float interestTotal;
	
	// Principle + Interest (grand total due)
	float totalAmountDue;
	
	// Let's change the Terminal to white on black
	// text, useful for saving Printer ink
	system("color f0");
	
	// Let's make a nice little header
	cout << "***************************" << endl;
	cout << "* NAME: Michael Ragsdale  *" << endl;
	cout << "* DATE: September 11, 2014*" << endl;
	cout << "* Calculate Loan Numbers  *" << endl;
	cout << "***************************" << endl;
	
	// Let's gather the user's name
	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Please enter your middle initial: ";
	cin >> middleName;
	cout << "Please enter your last name: ";
	cin >> lastName;
	
	// We will set the loan interest to 6%, that is to say, 0.06
	interestRate = 0.06;
	
	// Let's ask the user how much they wish to borrow
	cout << "Enter the Loan Amount: $";
	cin >> loanAmount;
	
	// Let's ask how many years they want
	cout << "Enter the length, in years: ";
	cin >> lifeOfLoan;
	
	// Remember: I = PRT is the Interest formula
	interestTotal = loanAmount * interestRate * lifeOfLoan;
	
	// Let's show the total amount due
	totalAmountDue = loanAmount + interestTotal;
	
	// Tell the user
	
	cout << "Hello, " << firstName << " "
	<< middleName << ". " << lastName << "!" << endl;
	
	cout << fixed << "The total interest is $" << setprecision(2) << showpoint << interestTotal << endl;
	cout << fixed << "You will owe a total of: $" << setprecision(2) << showpoint << totalAmountDue << endl;
	cout << "This will be over the course of " << lifeOfLoan << " years" << endl;
	
	// Proper Output
	// Print Spacing Chart
	cout << "12345678901234567890123456789012345678901234567890123456" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << left << setfill('.') << setw(20) << "Name" << right << setfill(' ') << setw(25)
	<< firstName << " " << middleName << " " << lastName << endl;
	cout << fixed << left << setfill('.') << setw(20) << "Loan Amount" << right << setfill(' ') << setw(25)
	<< loanAmount << endl;
	cout << fixed << left << setfill('.') << setw(20) << setprecision(2) << showpoint << "Interest Rate" << right << setfill(' ') << setw(25)
	<< interestRate << endl;
	cout << fixed << left << setfill('.') << setw(20) << setprecision(2) << showpoint << "Interest on Loan" << right << setfill(' ') << setw(25)
	<< interestTotal << endl;
	cout << left << setfill('.') << setw(20)  << setprecision(2) << showpoint<< "Amount Due" << right << setfill(' ') << setw(25)
	<< totalAmountDue << endl;
	
	
	// Including Pause for completeness
	// system("pause"); // Not required on New Bloodshed (in fact, it generates an Error)
		
	// We are done.  No errors
	return 0;
	
} // End of Main
