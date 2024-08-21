//Write a  program to input angles of a triangle and check whether triangle is valid or not.

#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter First Angle of Triangle"<<endl;
    cin>>a;
    cout<<"Enter Second Angle of Triangle"<<endl;
    cin>>b;
    cout<<"Enter Third Angle of Triangle"<<endl;
    cin>>c;

    if(a+b+c == 180)
    {
        cout<<"It is a Triangle"<<endl;
    }
    else
    {
        cout<<"It is not a Triangle"<<endl;
    }
}