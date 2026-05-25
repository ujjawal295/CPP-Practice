#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr No :- ";
    cin>>n;

    int temp=n;

    int fact = 1;
    int dig=0;

    int sum=0;

    while(n>0)
    {
        dig=n%10;
        for(int i=1;i<=dig;i++)
        {
            fact=fact*i;
        }
        n=n/10;
        sum=fact+sum  ;
    }
    if(sum==temp)
        cout<<"Strong No";
    else
        cout<<"Normal No";
}