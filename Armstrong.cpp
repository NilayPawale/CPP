// Write a program to check entered number is Armstrong number or not.

#include <iostream>
using namespace std;

int main()
{
    int n,i,rem,sum=0;
    cout<<"Enter the Number to check if Armstrong or not"<<endl;
    cin>>n;
    int temp = n;

    while(n>0)
    {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }

    if(sum == temp)
    {
        cout<<sum<<" is a Armstrong Number"<<endl;
    }
    else
    {
        cout<<sum<<" is not a Armstrong Number"<<endl;
    }
}