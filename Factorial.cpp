//Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120

#include <iostream>
using namespace std;

int main()
{
    int num,fact=1;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial is "<<fact<<endl;
}