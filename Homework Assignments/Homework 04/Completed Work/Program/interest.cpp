#include "bank.h"


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
