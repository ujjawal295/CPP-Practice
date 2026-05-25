// WAP to find the Factorial of a number entered by the user.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number :- ";
    cin>>n;
    int f=1;
    int i=1;
    while(n>=i)
    {
        f=f*i;
        i++;
    }
    cout<<"Factorial of given Number is :-  "<<f;
}