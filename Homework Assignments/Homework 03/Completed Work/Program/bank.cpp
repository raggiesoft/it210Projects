// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 10/21/2014
// Objective: Credit Card Interest Calculator

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
	

	// Let's build the Spacing Chart NUmbers
	buildLine('*', 59, "output3.txt");
	cout << "123456789012345678901234567890123456789012345678901234567890\n";
	
	fout.open(outputLog, ios::app);
	fout << "123456789012345678901234567890123456789012345678901234567890\n";
	
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
	fout.close();
	buildLine('-', 59, "output3.txt");
	
	
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
		fout.open(outputLog, ios::app);
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
		fout.close();
		// Stops us from seeing the last record
		// a second time
		if (fin.peek() == '\n')
		{
			fin.ignore();
		}
		
	// End of the Loop
	}
	fout.open(outputLog, ios::app);
	// Show the Total Interest owed to the Bank
	cout << "\n";
	fout << "\n";
	
	buildLine('*', 49, "output3.txt");
	cout << "\n";
	fout << "\n";
	
	cout << "Total interest owed to the bank is $";
	fout << "Total interest owed to the bank is $";
	
	cout << fixed << setprecision(2) << totalInterestOwedToBank;
	cout << "\n\n";
	
	
	
	fout << fixed << setprecision(2) << totalInterestOwedToBank;
	fout << "\n\n";
	fout.close();
	buildLine('*', 49, "output3.txt");
	
	// Close our Files
	fin.close();
	fout.close();
	
}
