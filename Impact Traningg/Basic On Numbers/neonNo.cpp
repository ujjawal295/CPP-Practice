#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr Number -> ";
    cin>>n;

    int sum=0;

    int sqrt=n*n;


    while(sqrt>0)
    {
        int ld=sqrt%10;
        sum=sum+ld;
        sqrt=sqrt/10;
    }

    if(sum==n)
        cout<<"Neon No";
    else
        cout<<"Normal No";
 
}