/*
IT210 Business Applications with C++
Programmer: Michael Ragsdale
Date: August 28, 2014
Calculate sales tax
*/

// Preprocessor directives
#include <iostream>
using namespace std;

// Global constants, global variables, function prototypes

// Function definitions
int main()
{
	// Declarations
	float price, taxRate, salesTax;
	
	// Prompt and read the input
	cout << "Please enter the price: ";
	cin >> price;
	
	cout << "Please enter the tax rate as a decimal: ";
	cin >> taxRate;
	
	// Calculate sales tax
	salesTax = price * taxRate;
	
	// Output the result
	cout << "The sales tax is $" << salesTax << endl;
	
	//system("pause"); // Not needed in "New" Bloodshed, included ONLY for completeness
	return 0;
} // End of Main
