// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 10/09/2014
// Objective: Credit Card Interest Calculator

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include "rslib.h"
#include "rsfunc.h"
using namespace std;

// Global constants, global variables

// Function Prototypes

// Function definitions
int main()
{
	// Start of Main
	
	// Variables
	string localUserFirstName, localUserLastName;
	string localCardNumber;
	float cardBalance, paymentMade;
	int daysInCycle, daysPaymentMadeBeforeCycle;
	
	// This is our Big Sentinal variable
	// which lets us loop until the user
	// wants to exit the program
	// I will start it off with a weird number
	int bigSentinal = -1;
	
	// Let's start change the Terminal to white on black
	// text, useful for saving Printer ink
	system("color f0");
	
	
	// Let's loop.  A Do While so that
	// we run the program AT LEAST one time
	do
	{
		// Let's build a header.  Parameters Taken:
		// * Assignment Number
		// * Program Number
		// * Total number of Assignments
		// * Due Day
		// * Due Month (ZERO-based index)
		// * Due Year
		buildHeader(1, 1, 1, 9, 9, 2014);
		
		// Now, we will do our Credit Card
		// Interest Program
		
		// Let's give instruction to the user
		printInstructions();
		
		cout << "Please enter your first and last name: ";
		cin >> localUserFirstName >> localUserLastName;
		
		// Let's send the first & last name to the
		// global variable using the Setter
		setUserFirstName(localUserFirstName);
		setUserLastName(localUserLastName);
		
		// Verify that they are there using the Getter
		cout << "\nYou entered " << getUserFirstName() << " "
			 << getUserLastName() << "\n\n";
			 
		// Let's enter the credit card number
		// Return a string that is the card number
		localCardNumber = getCardNumber();
		
		// Spacer
		cout << "\n";
		
		// Get the Card Balance
		cout << "Please enter the balance shown in the credit card bill: ";
		cin >> cardBalance;
		cout << "\n";
		
		// Let's display that number
		cout << "You entered $" << cardBalance;
		cout << "\n";
		
		// Payment Made
		cout << "\nPlease enter the payment you made: ";
		cin >> paymentMade;
		
		cout << "\nYou entered $" << paymentMade << "\n";
		cout << "\n";
		 
		// Days in the Billing Cycle
		cout << "Please enter the number of days in the billing cycle: ";
		cin >> daysInCycle;
		
		cout << "\nYou entered " << daysInCycle;
		
		cout << "\n";
		
		// Days Payment is made before the cycle
		cout << "\nPlease enter the number of days payment was made before billing cycle: ";
		cin >> daysPaymentMadeBeforeCycle;
		
		cout << "\nYou entered " << daysPaymentMadeBeforeCycle << "\n";
		
		// Let's print this out to a nice table
		// CAST the card balance and payment made
		// to a Float so that setpercision will
		// correctly do its thing
		displayStatement(localCardNumber, float(cardBalance), float(paymentMade), daysInCycle, daysPaymentMadeBeforeCycle);
		
		// Ask if we want to enter more data
		cout << "\n";
		cout << "Please enter 0 to exit or 1 for another "
			 << "customer: ";
		cin >> bigSentinal;
		
		// Wipe the screen.  While not strictly
		// necessary, it is done here to simulate
		// privacy concerns so that the next user
		// would not see the previous user's credit
		// card information
		system("cls");
	} while (bigSentinal != 0); // End of our Do While
	// We looped once, then we tested our condition
	
	// Thank the user
	cout << "Thank you for using my Average Daily Balance Calculator!\n"; 
	
	// Pause the Terminal before exiting, so they can see
	// the thank-you message
	system("pause");
	
	// Returns Zero (ERR_PROG_COMPLETED_SUCCESSFULLY)
	return 0;
}
