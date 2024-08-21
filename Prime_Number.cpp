//Check if number is a prime number or not.:

#include <iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"Enter the Number"<<endl;
    cin>>num;

    bool status = false;

    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            break;
        }
    }

    if(i == num)
    {
        status = true;
    }

    if(status)
    {
        cout<<"The Number is Prime Number"<<endl;
    }

    else
    {
        cout<<"The Number is not Prime Number"<<endl;
    }
}


//OR

// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//     if(n==1 || n==0)
//     {
//         return false;
//     }

//     for(int i=2;i<=n/2;i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n,i;
//     cout<<"Enter the Number for Range"<<endl;
//     cin>>n;
   
//     if(isPrime(n))
//     {
//         cout<<n<<"is a Prime Number"<<endl;
//     }
//     else{
//         cout<<n<<"is not a Prime Number"<<endl;
//     }
// }

