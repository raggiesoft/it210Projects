// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 11/20/2014
// Objective: Credit Card Interest Calculator 2.0

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <fstream>

// Custom Headers
#include "rslib.h"
#include "rsfunct.h"

using namespace std;

void printInstructions(char* outputLog)
{
	// We need our Output Log
	ofstream fout;
	fout.open(outputLog, ios::app);
	
	cout << "This program calculates the interest on unpaid\n";
	cout << "credit card balances using the average daily balance\n";
	cout << "and the total interest owed to the Bank.\n";
	
	fout << "This program calculates the interest on unpaid\n";
	fout << "credit card balances using the average daily balance\n";
	fout << "and the total interest owed to the Bank.\n";
	
	fout.close();

}

// This is just a "Friendly Name" way to
// encapsulate fin's file checker
bool doesFileExist(bool isInput,char* fileName)
{
	// Reserve a block of memory
	ifstream fin;
	ofstream fout;
	
	if (isInput)
	{
		// Open the requested file
		fin.open(fileName);
		
		// Does the file exist?
		if (!fin)
		{
			
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		// Open the requested file
		fout.open(fileName);
		
		// Are we able to output to
		// the requested file?
		if (!fout)
		{
			return false;
		}
		else
		{
			return true;
		}	
	}
	
}
