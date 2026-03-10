#include<iostream>
using namespace std;

class Employee
{
private:
    const int employeeId;
    string name;
    float salary;

public:

    Employee(int id,string n,float s) : employeeId(id)
    {
        name=n;
        salary=s;
    }

    void display()
    {
        cout<<"ID: "<<employeeId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    Employee e1(101,"Riya",50000);
    e1.display();

    return 0;
} 

// 1. Why must const members be initialized in initializer list?
// Because const variables cannot be assigned later after creation.

// 2. What happens if you assign const inside constructor body?
// It will give a compile error.

// 3. Why initializer list is faster?
// Because it initializes variables directly instead of creating them first and assigning later.

// If you want, I can also show you 3 small modifications professors expect in CDAC assignments (many students lose marks because of these).
