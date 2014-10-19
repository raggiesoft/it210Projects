// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 10/07/2014
// Objective: Let's Learn fin/fout

// Preprocessor Directives
#include <iostream>
#include <iomanip>

// File input/output Library
#include <fstream>
using namespace std;

// Global constants, global variables

// Function Prototypes

int main()
{
	// Change the color of the terminal to
	// white background, black text
	system("color f0");	
	
	// Declare the file input/output variables
	ifstream fin;
	ofstream fout;
	string team;
	int wins;
	
	// Let's associate teams.txt with fin
	// It recognizes the Working Directory
	fin.open("teams.txt");
	
	// Error Trapper
	if (!fin)
	{
		cout << "Input Failure!\n";
		system("pause");
		return 1;  // Error 1: Input Failure
	}
	
	
	
	// Let's create an output file
	fout.open("output.txt");
	
	if (!fout)
	{
		cout << "Output Failure!\n";
		system("puause");
		return 2; // Error 2: Output Failure
	}
	
	
	// Let's read the data from teams.txt
	while (fin)
	{
		fin >> team >> wins;
		cout << team << " " << wins << "\n";
	
		// Write it to our log file
		fout << team << " " << wins << "\n";
		
		// Stops us from seeing the last team
		// a second time
		if (fin.peek() == '\n')
		{
			fin.ignore();
		}
	}
	
	// Close the files
	fin.close();
	fout.close();
	
	// Pause the Terminal
	system("pause");
}
