// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 10/09/2014
// Objective: File I/O

// Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	// Turn the Terminal black text
	// on white background
	system("color f0");
	
	// Variables for our record set
	string menu1, menu2;
	float price;
	
	// Declare the file input/output variables
	ifstream fin;
	ofstream fout;
	
	fin.open("breakfast.txt");
	
	// Let's create an output file
	fout.open("output.txt");
	
    // Error Trapper
	if (!fin)
	{
		cout << "Input Failure!\n";
		system("pause");
		return 1;  // Error 1: Input Failure
	}
	
	if (!fout)
	{
		cout << "Output Failure!\n";
		system("puause");
		return 2; // Error 2: Output Failure
	}
	
	
	cout << "What's on the Menu:\n";
	cout << "[DEBUG] show records on the console:\n";
	while (fin)
	{
		// Read from the Record
		fin >> menu1 >> menu2 >> price;
		
		// Show to user
		// going to cout for debugging purposes
		// This would be deleted before the shipping code
		cout << menu1 + " " + menu2 << " " << price << "\n";
		
		// Write it to our log
		fout << menu1 + " " + menu2 << " " << price << "\n";
		
		// Stops us from seeing the last record
		// a second time
		if (fin.peek() == '\n')
		{
			fin.ignore();
		}
	}
	
	// Close our two files
	fin.close();
	fout.close();
	
	// Pause the terminal
	system("pause");
}// End of Main
