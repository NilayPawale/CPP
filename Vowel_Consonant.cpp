//Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
//(Hint: a, e, i, o, u are vowels)

#include <iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter a Lower Case Character"<<endl;
    cin>>a;
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        cout<<"Character is a Vowel"<<endl;
    }
    else
    {
        cout<<"Character is a Consonant"<<endl;
    }
}