#ifdef RS_FUNC
#define RS_FUNC
#endif
using namespace std;

// IT 210 Business Applications with C++
// Programmer: Michael Ragsdale

// This header defines prototypes for my
// credit card average daily balance
// calculator program

// This Prototypes the instruction
// printer for the program
void printInstructions();

// These getters & setters let us use the
// username (First Name & Last Name)
string getUserFirstName();
void setUserFirstName(string);

string getUserLastName();
void setUserLastName(string);

// This prototypes the function
// for entering the credit card #
// Yes, it's a string since no
// math functions are used
string getCardNumber();


// This is where is all happens.
// This function takes everything
// and formats it into a nice
// DOS table
void displayStatement(string, float, float, int, int);

// This function gets our correct APR
float getAPR(int);

// This returns the interest on unpaid balance
float getInterest(float);
