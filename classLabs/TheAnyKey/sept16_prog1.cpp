// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/16/2014
// Objective: Control Structures

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int age;
	cout << "Please enter your age: ";
	cin >> age;
	if (age < 18)
	{
		cout << "Bus fare is $1" << endl;
	}
	
	int temp;
	cout << "Please enter the temperature: ";
	cin >> temp;
	
	if (temp <= 90)
	{
		cout << "Off to the beach I go!" << endl;
	}
	else
	{
		cout << "I should stay home!" << endl;
	}
	
	// Remember: *NOT* required for New Bloodshed
	// Included for the sake of completeness
	//system("pause");
	return 0;
}
