#include<iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    mutable int accessCount;

    Employee(int i,string n)
    {
        id=i;
        name=n;
        accessCount=0;
    }

    // copy constructor
    Employee(const Employee &e)
    {
        id=e.id;
        name=e.name;
        accessCount=e.accessCount;
    }

    void display() const
    {
        accessCount++;   // allowed because mutable
        cout<<"ID: "<<id<<" Name: "<<name<<endl;
    }
};

int main()
{
    Employee e1(1,"Rahul");

    e1.display();
    e1.display();

    Employee e2 = e1;   // copy constructor

    e2.display();

    return 0;
}


// Shallow copy: copies memory addresses

// Deep copy: copies actual data

// Default copy constructor: made by compiler

// User-defined copy constructor: written by programmer

// Why display() const?
// Because it should not change object data.

// Why mutable?
// accessCount can still change even inside a const function.
