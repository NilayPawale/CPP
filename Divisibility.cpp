//Write a program to accept a number and check if it is divisible by 5 and 7
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Number"<<endl;
    cin>>a;
    if(a%5==0 && a%7==0)
    {
        cout<<"Divisible by 5 and 7"<<endl;
    }
    else
    {
        cout<<"Not Divisible by 5 and 7"<<endl;
    }
}