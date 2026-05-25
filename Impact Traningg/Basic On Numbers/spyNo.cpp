#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr Number -> ";
    cin>>n;
    int sum=0;
    int pro=1;
    

    while(n>0)
    {
        int ld=n%10;
        sum=sum+ld;
        pro=pro*ld;
        n=n/10;
    }

    if(sum==pro)
        cout<<"Spy No";
    else
        cout<<"Normal No";
 
}