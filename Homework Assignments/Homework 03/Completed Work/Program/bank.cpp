// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <fstream>

// Custom Headers
#include "rslib.h"
#include "rsfunct.h"
#include "bank.h"

using namespace std;



char* outputFile;
ifstream fin;
ofstream fout;

// This returns the correct interest rate depending on the
// average daily balance

float getAPR(float averageDailyBalance)
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



// This reads customer data from the requested
// dataset and sends it to the output log:
// both the Terminal and an output file
void readCustomerData(char* inputRecordSet, char* outputLog)
{
	// Local Variables to hold everything
	// from the Records
	
	// Yes, the card number is a string
	// because I don't want any rounding
	string firstName, lastName, cardNumber;
	float cardBalance, paymentMade, averageDailyBalance;
	int daysInPaymentCycle, daysPaymentMadeBeforeCycle;
	
	// This is the total amount owed to the bank
	float totalInterestOwedToBank;
	
	// Let's open the input and output logs
	fin.open(inputRecordSet);
	fout.open(outputLog);
	
	// Let's build the Spacing Chart NUmbers
	buildLine('*', 59);
	fout << "************************************************************\n";
	cout << "123456789012345678901234567890123456789012345678901234567890\n";
	fout << "123456789012345678901234567890123456789012345678901234567890\n";
	buildLine('*', 59);
	fout << "************************************************************\n";
	
	// Write the Table Header
	cout << setw(20) << left << "FULL NAME";
	cout << setw(10) << left << "CARD #";
	cout << setw(10) << right << "BALANCE";
	cout << setw(10) << right << "APR (%)";
	cout << setw(11) << right << "INTEREST\n";
	fout << setw(20) << left << "FULL NAME";
	fout << setw(10) << left << "CARD #";
	fout << setw(10) << right << "BALANCE";
	fout << setw(10) << right << "APR (%)";
	fout << setw(11) << right << "INTEREST\n";
	buildLine('-', 59);
	fout << "------------------------------------------------------------\n";
	
	// Now, let's read the entries from
	// the inputRecordSet one by one until EOF
	
	// Use fin.peek() to make sure we don't duplicate
	// the final record
	
	while(fin)
	{
		// Read from our Record
		fin >> firstName >> lastName >> cardNumber >> cardBalance
			>> paymentMade >> daysInPaymentCycle >> daysPaymentMadeBeforeCycle;
			
		// Let's do some math
		// Start with the Average Daily Balance
		averageDailyBalance = (cardBalance * daysInPaymentCycle - paymentMade * daysPaymentMadeBeforeCycle) / daysInPaymentCycle;
		
		// Show that to the user
		cout << setw(20) << left << firstName + " " + lastName;
		cout << setw(10) << left << cardNumber;
		cout << setw(10) << right << setprecision(2)
		     << fixed << cardBalance;
		
		     
		cout << setw(10) << right << setprecision(2)
		     << fixed << getAPR(averageDailyBalance) * 100;
		     
		cout << setw(10) << right << setprecision(2)
		     << fixed << getInterest(averageDailyBalance);
		     
		// Write to our Log
		fout << setw(20) << left << firstName + " " + lastName;
		fout << setw(10) << left << cardNumber;
		fout << setw(10) << right << setprecision(2)
		     << fixed << cardBalance;
		
		     
		fout << setw(10) << right << setprecision(2)
		     << fixed << getAPR(averageDailyBalance) * 100;
		     
		fout << setw(10) << right << setprecision(2)
		     << fixed << getInterest(averageDailyBalance);
		     
		// Let's add this to the TOTAL interest
		// owed to the bank
		totalInterestOwedToBank += getInterest(averageDailyBalance);
		     
		// New Line     
		cout << "\n";
		fout << "\n";     
		
		// Stops us from seeing the last record
		// a second time
		if (fin.peek() == '\n')
		{
			fin.ignore();
		}
		
	// End of the Loop
	}
	
	// Show the Total Interest owed to the Bank
	cout << "\n";
	buildLine('*', 49);
	cout << "\n";
	cout << "Total interest owed to the bank is $";
	cout << fixed << setprecision(2) << totalInterestOwedToBank;
	cout << "\n\n";
	buildLine('*', 49);
	
	// Write that to our Log
	fout << "\n";
	fout << "************************************************************\n";
	fout << "\n";
	fout << "Total interest owed to the bank is $";
	fout << fixed << setprecision(2) << totalInterestOwedToBank;
	fout << "\n\n";
	fout << "************************************************************\n";
	
	// Close our Files
	fin.close();
	fout.close();
	
}
