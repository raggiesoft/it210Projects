// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 09/25/2014
// Objective: Average out a Grade

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants, global variables


// Function definitions
int main()
{
	// Start of Main
	
	// The user's name
	string firstName, lastName;
	
	// The three grades, stored as an Array
	int score[3];
	
	// The Average
	double averageScore;
	
	// The letter grade
	// use this score chart:
	// >= 90 A
	// 80-89 B
	// 70-79 C
	// < 70 F
	char letterGrade;
	
	// output the name, scores, average, and letter grade
	
	
	// Change the Terminal color
	system ("color f0");
	
	// Enter data
	cout << "Please enter your first name: ";
	cin >> firstName;
	
	cout << "Please enter your last name: ";
	cin >> lastName;
	
	// Enter the three grades
	cout << "Please enter the first grade: ";
	cin >> score[0];
	
	cout << "Please enter the second grade: ";
	cin >> score[1];
	
	cout << "Please enter the third grade: ";
	cin >> score[2];
	
	// Let's get the average
	averageScore = (score[0] + score[1] + score[2]) / 3;
	
	// Assign a grade to the Average
	if (averageScore >= 90)
	{
		letterGrade = 'A';
	}
	else if (averageScore >= 80)
	{
		letterGrade = 'B';
	}
	else if (averageScore >= 70)
	{
		letterGrade = 'C';
	}
	else
	{
		letterGrade = 'F';
	}
	
	// Quick & Dirty: Let's show the user
	// This can always be formatted into a nice little table
	cout << "\n\n";
	cout << firstName << " " << lastName <<", you received the following grades:\n\n";
	cout << "First Grade: " << score[0] << "\n";
	cout << "Second Grade: " << score[1] << "\n";
	cout << "Third Grade: " << score[2] << "\n";
	cout << "Average: " << fixed << setprecision(2) << averageScore << "\n";
	cout << "Letter Grade of " << letterGrade << "\n";

	
	
	// Pause the Terminal
	system("pause");

	
	return 0;
} // End of main


