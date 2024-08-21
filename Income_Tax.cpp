// Write a program, which accepts annual basic salary of an employee and calculates and displays the 
// Income tax as per the following rules. 
// Basic: < 1, 50,000 Tax = 0
//  1, 50,000 to 3,00,000 Tax = 20% 
//  > 3,00,000 Tax = 30% 

#include <iostream>
using namespace std;

int main()
{
    float sal,tax;
    cout<<"Enter Salary"<<endl;
    cin>>sal;

    if(sal < 150000)
    {
        tax = 0;
        cout<<"Income Tax for Salary of "<<sal<<" is "<<tax<<endl;
    }
    else if(sal > 150000 && sal < 300000)
    {
        tax = sal * 0.2;
        cout<<"Income Tax for Salary of "<<sal<<" is "<<tax<<endl;
    }
    else if(sal > 300000)
    {
        tax = sal * 0.3;
        cout<<"Income Tax for Salary of "<<sal<<" is "<<tax<<endl;
    }
}