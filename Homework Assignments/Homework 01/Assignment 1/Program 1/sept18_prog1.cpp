// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/18/2014
// Objective: Mass & Density Calculator

// Preprocessor Directives
#include <iostream>
#include <iomanip>
// Custom Library which has prototypes for
// constructing the welcome header
// 
// For details on these functions,
// please view rslib.cpp
#include "rslib.h"
using namespace std;

// Global constants, global variables
// The item's mass - input from the user
double massInGrams;

// Density, in cubic centimeters - input from the user
double densityInCC;

// This is the calculated value of the object's volume
double volumeInCC;

// Function prototypes
void printInstructions();
void setMass(double);
double getMass();
void setDensity(double);
double getDensity();

// Function definitions
int main()
{
	// Let's set up some variables to hold everything
	double massGrams, densityCC, volumeInCC;
	
	// Let's start change the Terminal to white on black
	// text, useful for saving Printer ink
	system("color f0");
	
	// Let's build a header
	buildHeader(1, 1, 2, 18, 8, 2014);
		
	// Let's make a space between our header and instructions
	cout << endl;
	
	// Let's print out the insructions
	printInstructions();
	
	// Spaces
	cout << endl << endl;
	
	// Get the mass, in grams
	cout << "Please enter the mass in grams: ";
	cin >> massGrams;
	
	// Send it to the Global variable
	setMass(massGrams);
	
	// Get the density, in cubic centimeters
	cout << "Please enter the density in grams per cc: ";
	cin >> densityCC;
	
	// Send it to the Global Variable
	setDensity(densityCC);
	
	// Let's get the volume of the object
	volumeInCC = getMass() / getDensity();
	
	// Let's format this for the end user
	cout << "********************************************" << endl;
	cout << "12345678901234567890123456789012345679012345" << endl;
	cout << "********************************************" << endl;
	cout << left << setw(25) << setfill('.') << "Mass of the material"
	<< right << setw(9) << setfill(' ') << fixed << setprecision(2)
	<< getMass() << " grams" << endl;
	cout << left << setw(25) << setfill('.') << "Density of the material"
	<< right << setw(9) << setfill(' ') << fixed << setprecision(2)
	<< getDensity() << " grams/cc" << endl;
	cout << left << setw(25) << setfill('.') << "Volume of the material"
	<< right << setw(9) << setfill (' ') << fixed << setprecision(2)
	<< volumeInCC << " cc" << endl;
	cout << "********************************************" << endl;
	
	// Pauses the Terminal.
	// Works like the days of Old Bloodshed
	// Even in New Bloodshed
	system("pause");
}

// This builds our Header


// This prints the unstructions to the Terminal
void printInstructions()
{
	cout << "This program determines the volume given" << endl;
	cout << "the mass and density of the material." << endl;
}

// Let's set up the Mass of the object
void setMass(double objectMass)
{
	massInGrams = objectMass;
}

// Let's return the Mass of the object
double getMass()
{
	return massInGrams;
}

// Let's set up the Density of the object
void setDensity(double objectDensity)
{
	densityInCC = objectDensity;
}

// Let's return the Density of the object
double getDensity()
{
	return densityInCC;
}
