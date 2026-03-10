#include<iostream>
using namespace std;

class Vector
{
public:
    int *arr;
    int size;

    Vector(int s)
    {
        size=s;
        arr=new int[size];
    }

    int& operator[](int index)
    {
        return arr[index];
    }

    int operator()()
    {
        int sum=0;
        for(int i=0;i<size;i++)
            sum+=arr[i];
        return sum;
    }
};

int main()
{
    Vector v(5);

    for(int i=0;i<5;i++)
        cin>>v[i];

    v[2]=50;

    cout<<"Sum: "<<v();

    return 0;
}
