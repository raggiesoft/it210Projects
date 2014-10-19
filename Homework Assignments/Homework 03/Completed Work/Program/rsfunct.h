#ifdef RSFUNCT_H
#define RSFUNCT_H
#endif
// That prevents a header from being
// embedded twice, shrinking the program

using namespace std;
// Function Prototype to print
// the lead instructions
void printInstructions();

// A fancy-pants way of encapsulating
// if fin has a file or not
bool doesFileExist(bool,char*);
