// Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
// corresponding operation and displays the result.

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    float result;
    char ch;
    cout<<"Enter Number 1"<<endl;
    cin>>a;
    cout<<"Enter Number 2"<<endl;
    cin>>b;
    cout<<"Enter the Operator - (+,-,*,/ or ^ for Exit)"<<endl;
    cin>>ch;


    switch(ch)
    {
        case '+':
            result = a + b;
            cout<<"The Addition of "<<a<<" and "<<b<<" is "<<result<<endl;
            break;
        case '-':
            result = b - a;
            cout<<"The Subtraction of "<<a<<" and "<<b<<" is "<<result<<endl;
            break;
        case '*':
            result = a * b;
            cout<<"The Multiplication of "<<a<<" and "<<b<<" is "<<result<<endl;
            break;
        case '/':
            result = a / b;
            cout<<"The Division of "<<a<<" and "<<b<<" is "<<result<<endl;
            break;

    }
}