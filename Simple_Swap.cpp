//Write a program to swap two numbers
#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter 2 Numbers"<<endl;
    cin>>a>>b;
    cout<<"Before Swap Numbers : "<<a<<" "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After Swap Numbers : "<<a<<" "<<b<<endl;
}