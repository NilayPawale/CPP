#include <iostream>
using namespace std;

int main()
{
   int n,i,rem,sum=0;
   cout<<"Enter the Number to check if Palindrome"<<endl;
   cin>>n;
   int temp = n;

    while(n>0)
    {
        rem = n%10;
        sum = (sum*10)+rem;
        n = n/10;
    }

    if(sum == temp)
    {
        cout<<sum<<" is Palindrome"<<endl;
        cout<<temp<<" is a Palindrome Number"<<endl;
    }
    else
    {
        cout<<sum<<" is Palindrome"<<endl;
        cout<<temp<<" is not a Palindrome Number"<<endl;
    }

}