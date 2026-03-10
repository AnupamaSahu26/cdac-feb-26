#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:

    void setDetails(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout<<"Amount Deposited Successfully\n";
    }

    void withdraw(double amount)
    {
        if(amount > balance)
            cout<<"Insufficient Balance\n";
        else
        {
            balance = balance - amount;
            cout<<"Withdrawal Successful\n";
        }
    }

    void displayAccountDetails()
    {
        cout<<"\nAccount Number: "<<accountNumber<<endl;
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount acc;
    int choice;

    acc.setDetails(101,"Shreya",5000);

    do
    {
        cout<<"\n1. Deposit";
        cout<<"\n2. Withdraw";
        cout<<"\n3. Display Details";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        double amt;

        switch(choice)
        {
            case 1:
                cout<<"Enter amount to deposit: ";
                cin>>amt;
                acc.deposit(amt);
                break;

            case 2:
                cout<<"Enter amount to withdraw: ";
                cin>>amt;
                acc.withdraw(amt);
                break;

            case 3:
                acc.displayAccountDetails();
                break;
        }

    } while(choice != 4);

    return 0;
}
