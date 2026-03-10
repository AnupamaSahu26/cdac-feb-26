#include<iostream>
using namespace std;

class Matrix
{
public:
    int a[2][2];

    friend istream& operator>>(istream &in, Matrix &m)
    {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                in>>m.a[i][j];
        return in;
    }

    friend ostream& operator<<(ostream &out, Matrix &m)
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                out<<m.a[i][j]<<" ";
            out<<endl;
        }
        return out;
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                temp.a[i][j]=a[i][j]+m.a[i][j];
        return temp;
    }

    bool operator==(Matrix m)
    {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                if(a[i][j]!=m.a[i][j])
                    return false;
        return true;
    }
};

int main()
{
    Matrix m1,m2,m3;

    cin>>m1>>m2;

    m3=m1+m2;

    cout<<m3;

    if(m1==m2)
        cout<<"Matrices equal";
    else
        cout<<"Matrices not equal";

    return 0;
}
