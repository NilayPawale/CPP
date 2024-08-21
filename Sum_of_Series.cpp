// Sum of series :	1+2+3+….+n

#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        sum += i;
    }
    cout<<"Sum of Series is "<<sum<<endl;

    //OR

    // int formula = n*(n+1)/2;
    // cout<<"Sum of Series By Formula is "<<formula<<endl;
}