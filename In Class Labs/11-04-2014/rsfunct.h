#ifdef RSFUNCT_H
#define RSFUNCT_H
#endif

// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Objective: Print Instructions

// That prevents a header from being
// embedded twice, shrinking the program

using namespace std;
// Function Prototype to print
// the lead instructions
void printInstructions(char*);

// A fancy-pants way of encapsulating
// if fin/fout has a file or not
bool doesFileExist(bool,char*);

// Let's get the User's Name
string getUserName();

// Prototype Number Averaging
float getAvgOfNum(string);

// Let's prototype our Output
void showOutput(string, float, float, char*);
