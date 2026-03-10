#include <iostream>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    double empSalary;
    double grossSalary;

public:

    void setEmployee(int id, string name, double salary)
    {
        empID = id;
        empName = name;
        empSalary = salary;
    }

    void calculateGrossSalary()
    {
        if(empSalary <= 5000)
            grossSalary = empSalary + (empSalary * 0.10);
        else if(empSalary <= 10000)
            grossSalary = empSalary + (empSalary * 0.15);
        else
            grossSalary = empSalary + (empSalary * 0.20);
    }

    void displayEmployeeDetails()
    {
        cout<<"\nEmployee ID: "<<empID<<endl;
        cout<<"Employee Name: "<<empName<<endl;
        cout<<"Salary: "<<empSalary<<endl;
        cout<<"Gross Salary: "<<grossSalary<<endl;
    }

    void updateEmployee(string name, double salary)
    {
        empName = name;
        empSalary = salary;
    }
};

int main()
{
    Employee emp;
    int choice;

    emp.setEmployee(1,"Shreya",6000);

    do
    {
        cout<<"\n1. Calculate Gross Salary";
        cout<<"\n2. Display Employee Details";
        cout<<"\n3. Update Employee";
        cout<<"\n4. Exit";

        cout<<"\nEnter choice: ";
        cin>>choice;

        string name;
        double salary;

        switch(choice)
        {
            case 1:
                emp.calculateGrossSalary();
                cout<<"Gross Salary Calculated\n";
                break;

            case 2:
                emp.displayEmployeeDetails();
                break;

            case 3:
                cout<<"Enter new name: ";
                cin>>name;
                cout<<"Enter new salary: ";
                cin>>salary;
                emp.updateEmployee(name, salary);
                break;
        }

    } while(choice != 4);

    return 0;
}
