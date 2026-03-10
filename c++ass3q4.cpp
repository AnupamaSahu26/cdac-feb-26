#include<iostream>
using namespace std;

class DivideByZero{};

int divide(int a,int b) throw(DivideByZero)
{
    if(b==0)
        throw DivideByZero();

    return a/b;
}

int main()
{
    try
    {
        try
        {
            cout<<divide(10,0);
        }
        catch(DivideByZero)
        {
            cout<<"Inside inner catch"<<endl;
            throw;
        }
    }
    catch(DivideByZero)
    {
        cout<<"Handled in outer catch"<<endl;
    }

    return 0;
}
