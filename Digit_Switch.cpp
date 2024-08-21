//Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Sigle Digit Number"<<endl;
    cin>>n;

    switch(n)
    {
        case 0:
            cout<<"Zero : "<<n<<endl;
            break;
        case 1:
            cout<<"One : "<<n<<endl;
            break;
        case 2:
            cout<<"Two : "<<n<<endl;
            break;
        case 3:
            cout<<"Three : "<<n<<endl;
            break;
        case 4:
            cout<<"Four : "<<n<<endl;
            break;
        case 5:
            cout<<"Five : "<<n<<endl;
            break;
        case 6:
            cout<<"Six : "<<n<<endl;
            break;
        case 7:
            cout<<"Seven : "<<n<<endl;
            break;
        case 8:
            cout<<"Eight : "<<n<<endl;
            break;
        case 9:
            cout<<"Nine : "<<n<<endl;
            break;
        case 10:
            cout<<"Ten : "<<n<<endl;
            break;
    }
}
