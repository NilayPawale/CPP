//Write a program to accept an integer and check if it is even or odd
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a Number"<<endl;
    cin>>a;
    if(a%2==0)
    {
        cout<<"Even Number"<<endl;
    }
    else
    {
        cout<<"Odd Number"<<endl;
    }
}