// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/25/2014
// Objective: Let's demo Loops

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants, global variables

// Function Prototypes
void whileLoopDemo();
void doWhileLoopDemo();
void forLoopDemo();
void oddNumberDemo();

// Function definitions
int main()
{
	// Start of Main
	
	// Let's show off some While Loops
	whileLoopDemo();
	
	// For Loop Demo
	forLoopDemo();
	
	// Odd Number Demo
	oddNumberDemo();
	
	// Do While Loop Demo
	doWhileLoopDemo();

	
	// Pause the Terminal
	system("pause");

	
	return 0;
} // End of main

void whileLoopDemo()
{
	// A demo of While Loops
	// Let's declare a counter
	int firstCounter = 0;
	
	// Let's count 10 cows jumping over the moon
	while (firstCounter < 10)
	{
		
		// For the heck of it: "1 cow"
		if (firstCounter == 1)
		{
			cout << firstCounter << " cow jumped over the moon\n";
		}
		// CAUTION: "if (firstCounter = 1)" produces
		// an INFINITE loop because of the difference
		// between == (equals) and = (assignment)
		// BE CAREFUL when coming over from
		// Visual Basic, where that code would
		// be LEGAL
		
		// For the rest of the cows
		else
		{
			cout << firstCounter << " cows jumped over the moon\n";
		}
		// Let's increase the Counter
		firstCounter++;
		
	}
	
	// Let's count down
	while (firstCounter > 0)
	{
		cout << firstCounter << " sheep jumped the fence\n";
		// Let's decrease the Counter
		firstCounter--;
	}
	
	// Flat Controlled While Loop
	
	// Guess the Lucky Number
	bool found = false;
	int luckyNumber;
	while (!found)
	{
		cout << "Guess my lucky number: ";
		cin >> luckyNumber;
		
		// The number is 7
		if (luckyNumber == 7)
		{
			cout << "Got it!\n";
			found == true;
			
			// break out of the loop
			break;
		}
		else
		{
			cout << "Try again!\n";
		}
	}
	
	// Sentinal Control While Loop
	// (does a value equal something?)
	
	int testScore = 0;
	cout << "Enter a score, or -1 to exit: ";
	cin >> testScore;
	while (testScore != -1)
	{
		cout << "You entered " << testScore << "\n";	
		cout << "Enter a score, or -1 to exit: ";
		cin >> testScore;
	}
}

// Let's demonstrate for loops
void forLoopDemo()
{
	for (int pets = 0; pets < 15; pets++)
	{
		if (pets < 9)
		{
			cout << "0";
		}
		if (pets == 0)
		{
			cout << (pets + 1) << " kitten in this litter\n";
		}
		else
		{
			cout << (pets + 1) << " kittens in this litter\n";
		}
		
	}
}

// Let's demonstrate a few Do Whiles
// Loops first, checks condition,
// loops again as necessary
void doWhileLoopDemo()
{
	cout << "[DEBUG] Done Loops!\n";
	cout << "[DEBUG] He did not teach us Do While yet.\n";
}

// Odd Numbers ONLY
void oddNumberDemo()
{
	int oddNumber = 1;
	cout << "ODD NUMBER DEMO\n";
	cout << "While\n";
	while (oddNumber <= 21)
	{
		cout << oddNumber << "\n";
		oddNumber += 2;
	}
	
	cout << "For Loop\n";
	for (int oddNumber2 = 1; oddNumber2 <= 21; oddNumber2 += 2)
	{
		cout << oddNumber2 << "\n";
	}
}
