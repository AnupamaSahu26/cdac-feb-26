#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    int *p = &x;   // pointer
    int &r = x;    // reference

    cout<<"Original value: "<<x<<endl;

    *p = 20;
    cout<<"After pointer change: "<<x<<endl;

    r = 30;
    cout<<"After reference change: "<<x<<endl;

    return 0;
}


// Two differences

// Pointer stores address of variable, reference is another name for the variable.

// Pointer can be NULL, reference cannot.

// Why references cannot be reseated?
// Because once a reference is linked to a variable, it cannot refer to another variable.

// Why references cannot be NULL?
// A reference must always refer to a valid variable.
