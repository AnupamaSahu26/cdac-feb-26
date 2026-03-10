#include<iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v){ value=v; }

    Number& operator++()
    {
        value++;
        return *this;
    }

    Number operator++(int)
    {
        Number temp=*this;
        value++;
        return temp;
    }

    Number& operator=(Number n)
    {
        value=n.value;
        return *this;
    }

    friend bool operator>(Number a,Number b);

    friend class Inspector;
};

bool operator>(Number a,Number b)
{
    return a.value>b.value;
}

class Inspector
{
public:
    void show(Number n)
    {
        cout<<"Value: "<<n.value<<endl;
    }
};

int main()
{
    Number n1(10),n2(20);

    ++n1;
    n2++;

    Inspector i;
    i.show(n1);

    if(n2>n1)
        cout<<"n2 greater";

    return 0;
}
