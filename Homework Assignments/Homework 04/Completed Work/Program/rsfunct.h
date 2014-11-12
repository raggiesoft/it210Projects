#ifdef RSFUNCT_H
#define RSFUNCT_H
#endif

// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale
// Date: 11/20/2014
// Objective: Credit Card Interest Calculator 2.0

// That prevents a header from being
// embedded twice, shrinking the program

using namespace std;

// Function Prototype to print
// the lead instructions
void printInstructions(char*);

// A fancy-pants way of encapsulating
// if fin has a file or not
bool doesFileExist(bool,char*);
