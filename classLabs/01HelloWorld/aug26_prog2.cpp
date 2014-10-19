// IT210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: August 26, 2014
// My second program

// Preprocessor directives
#include<iostream>
using namespace std;

// Function definitions
int main()
{
	// Variable to hold the student's first name
	// This is the first program, so NO error checking
	string firstName;
	
	// Ask for the first name
	cout << "Please enter you first name: ";
	
	// Let the user enter their name
	cin >> firstName;
	
	// Output the name to the console
	cout << firstName << ", you are an A student" << endl;
	//system("pause"); // NOT needed in the New Bloodshed, but included for completeness
	return 0;
} // End of Main
