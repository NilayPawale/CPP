// Write a program to find greatest of three numbers using nested if-else.

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter First Number"<<endl;
    cin>>a;
    cout<<"Enter Second Number"<<endl;
    cin>>b;
    cout<<"Enter Third Number"<<endl;
    cin>>c;


    if(a > b)
    {
        if(a > c)
        {
            cout<<a<<" is the Greatest Number"<<endl;
        }
    }
    else if(b > c)
    {
        if(b > a)
        {
            cout<<b<<" is the Greatest Number"<<endl;
        }
    }
    else if(c > a)
    {
        if(c > b)
        {
            cout<<c<<" is the Greatest Number"<<endl;
        }
    }

}