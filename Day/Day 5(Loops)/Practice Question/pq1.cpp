#include <iostream>
using namespace std;

int main()
{
    int n;
    int s=0;
    cout<<"Enter No :- ";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        s++;
    }
    cout<<"Enter no is of " <<s<<" digit";

}