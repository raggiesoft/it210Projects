// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 11/11/2014
// Objective: Calling Functions

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <fstream>

// Custom Headers (all Prototypes are here)
// Imagine these as a collection of
// dictionary entries.  You'd learn in IT 310
// I learned it at TCC's ITP 134 C++ class
#include "rsfunct.h"
#include "rslib.h"

// Function Definitions
int main()
{
	// Variable for the String
	string someName = "Samantha";
	
	// Color-Inverse the Terminal
	system("color f0");
	
	// Reserve a Block of Memory
	// for an output log
	ofstream fout;
	
	// Open an Output Log
	// Let's erase the current contents
	// to start things over from scratch
	fout.open("foutlog.txt");
	
	// Unable to create output log
	// in a Non-Writable Directory?
	// Exit with ERROR_DIR_READ_ONLY
	if (!fout)
	{
		cout << "UNABLE TO CREATE OUTPUT LOG!  NOW EXITING!\n";
		system("pause");
		return 1;
	}
	
	// Erase the contents of the existing log
	fout << "";
	
	// Close the Log
	fout.close();
	
	// Show the Header
	buildHeader(1, 1, 1, 11, 10, 2014, "foutlog.txt");
	
	fout.open("foutlog.txt", ios::app);
	cout << "Value of someName in main = " << someName << "\n";
	cout << "Memory address of someName in main = " << &someName << "\n";
	cout << "--------------------------\n\n";
	
	fout << "Value of someName in main = " << someName << "\n";
	fout << "Memory address of someName in main = " << &someName << "\n";
	fout << "--------------------------\n\n";
	
	fout.close();
	
	// Function by Value
	getValue(someName, "foutlog.txt");
	
	fout.open("foutlog.txt", ios::app);
	cout << "New Value of someName in main = " << someName << "\n";
	cout << "Memory address of someName in main = " << &someName << "\n";
	cout << "--------------------------\n\n";
	
	fout << "New Value of someName in main = " << someName << "\n";
	fout << "Memory address of someName in main = " << &someName << "\n";
	fout << "--------------------------\n\n";
	
	fout.close();
	
	// Function by Reference
	getReference(someName, "foutlog.txt");
		
	fout.open("foutlog.txt", ios::app);
	cout << "New Value of someName in main = " << someName << "\n";
	cout << "Memory address of someName in main = " << &someName << "\n";
	cout << "--------------------------\n\n";
	
	fout << "New Value of someName in main = " << someName << "\n";
	fout << "Memory address of someName in main = " << &someName << "\n";
	fout << "--------------------------\n\n";
	
	fout.close();
	
	// Pause the Terminal
	system("pause");
	
	// Return control to the OS
	return 0;
}

void getValue(string name, char* outputLog)
{
	name = "Rachel";
	// Reserve a Block of Memory
	// for an output log
	ofstream fout;
	
	// Open an Output Log
	// Let's erase the current contents
	// to start things over from scratch
	fout.open(outputLog, ios::app);
	cout << "Value of someName in getValue() = " << name << "\n";
	cout << "Memory address of someName in getValue() = " << &name << "\n";
	
	fout << "Value of someName in getValue() = " << name << "\n";
	fout << "Memory address of someName in getValue() = " << &name << "\n";
	
	fout.close();
}

void getReference(string& name, char* outputLog)
{
	name = "Caroline";
	// Reserve a Block of Memory
	// for an output log
	ofstream fout;
	
	// Open an Output Log
	// Let's erase the current contents
	// to start things over from scratch
	fout.open(outputLog, ios::app);
	cout << "Value of name in getReference() = " << name << "\n";
	cout << "Memory address of name in getReference() = " << &name << "\n";
	
	fout << "Value of someName in getReference() = " << name << "\n";
	fout << "Memory address of name in getReference() = " << &name << "\n";
	
	fout.close();
}
