#ifdef BANK_H
#define BANK_H
#endif

// This header prototypes out
// functions needed by the Bank

using namespace std;

// This prototypes reading the customer data
void readCustomerData(char*);

// This prototypes writing data
// to both the Terminal and an
// output log file
void writeOutput();


// This prototype gets the APR
// of the interest owed, based
// on the users card balance
// Returns a Float.  For example:
// a return of .1 would refer to
// 10% interest
float getAPR(float);
