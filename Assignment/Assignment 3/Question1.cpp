// Write a C++ program to get a number from the user and print whether
// it's positive, negative or zero.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    if(n>0)
        cout<<"No is positive";
    else if(n==0)
        cout<<"No is 0";
    else
        cout<<"No is negative";
}