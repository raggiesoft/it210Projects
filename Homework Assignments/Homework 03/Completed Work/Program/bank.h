#ifdef BANK_H
#define BANK_H
#endif

// This header prototypes out
// functions needed by the Bank

using namespace std;

// This prototype gets the APR
// of the interest owed, based
// on the users card balance
// Returns a Float.  For example:
// a return of .1 would refer to
// 10% interest
float getAPR(float);

// This prototypes the return of our Interest
float getInterest(float);


// This prototypes reading the customer data
void readCustomerData(char*, char*);


