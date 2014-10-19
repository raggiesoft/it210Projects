// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/18/2014
// Objective: The Pause Program

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int age;
	cout << "Please enter your age: ";
	cin >> age;
	if (age < 16)
	{
		cout << "You're old enough to watch cartoons!" << endl;
	}
	else if (age < 18)
	{
		cout << "You're old enough to drive!" << endl;
	}
	else if (age < 21)
	{
		cout << "You may join the Military!" << endl;
	}
	else if (age < 25)
	{
		cout << "Chug Booze!!!!! (NEVER!)" << endl;
	}
	else
	{
		cout << "Time to retire!" << endl;
	}
	
	// Now legal in "New Bloodshed"
	// Pauses the Terminal
	system("pause");
	return 0;
}
