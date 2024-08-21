//Write a  program to enter a number and print its reverse.

#include <iostream>
using namespace std;

int main()
{
    int n,i,rem,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int temp = n;

    while(n>0)
    {
        rem = n%10;
        sum = (sum*10)+rem;
        n = n/10;
    }

    cout<<sum<<" is the Reverse of "<<temp<<endl;
}