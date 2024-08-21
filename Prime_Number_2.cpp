//Write a  program to print all Prime numbers between 1 to n.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==1 || n==0)
    {
        return false;
    }

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,i;
    cout<<"Enter the Number for Range"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" is a Prime Number"<<endl;
        }
    }

    return 0;
}

