#include<iostream>
#include<cstring>
using namespace std;

class String
{
public:
    char *str;

    String()
    {
        str=new char[100];
    }

    String(const char *s)
    {
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }

    String(const String &s)
    {
        str=new char[strlen(s.str)+1];
        strcpy(str,s.str);
    }

    ~String()
    {
        delete[] str;
    }

    String operator+(String s)
    {
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }

    friend ostream& operator<<(ostream &out,String s)
    {
        out<<s.str;
        return out;
    }

    friend istream& operator>>(istream &in,String &s)
    {
        in>>s.str;
        return in;
    }
};

int main()
{
    String s1,s2;

    cin>>s1>>s2;

    String s3=s1+s2;

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;

    return 0;
}
