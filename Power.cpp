//Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3

#include <iostream>
using namespace std;

int main()
{
    int m,n,power = 1;
    cout<<"Enter the Base Number"<<endl;
    cin>>m;
    cout<<"Enter the Index Number"<<endl;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        power = power * m;
    }
    cout<<"The Answer is "<<power<<endl;
}