//Write a  program to find sum of all even and odd numbers between 1 to n. 

#include <iostream>
using namespace std;

int main()
{
    int n,i,sumEven=0,sumOdd=0;
    cout<<"Enter the Number for Range"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sumEven = sumEven + i;
        }
        else
        {
            sumOdd = sumOdd + i;
        }
    }

    cout<<sumEven<<" is the Sum of Even Numbers"<<endl;
    cout<<sumOdd<<" is the Sum of Odd Numbers"<<endl;
}