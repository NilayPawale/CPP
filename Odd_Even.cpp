//Write a program to accept an integer and check if it is odd or even
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a Number"<<endl;
    cin>>a;
    if(a%2!=0)
    {
        cout<<"Odd Number"<<endl;
    }
    else
    {
        cout<<"Even Number"<<endl;
    }
}