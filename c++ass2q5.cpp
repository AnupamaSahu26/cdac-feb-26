#include<iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int marks;

    Student()
    {
        rollNo=0;
        name="None";
        marks=0;
    }

    Student(int r,string n,int m)
    {
        rollNo=r;
        name=n;
        marks=m;
    }

    void display()
    {
        cout<<rollNo<<" "<<name<<" "<<marks<<endl;
    }
};

int main()
{
    Student s1;

    Student s2(1,"Rahul",85);
    Student s3(2,"Aman",90);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

// 1. When does compiler generate default constructor?
// When no constructor is written by the programmer.

// 2. When does it NOT generate one?
// If the programmer already defines any constructor.

// 3. Can constructors be overloaded?
// Yes. A class can have multiple constructors with different parameters.
