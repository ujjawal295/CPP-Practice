#include <iostream>
using namespace std;

int main()
{
    int n=119;
    int k=0;
    if(n<10)
    {
        cout<<n;
        return 0;
    }
    while(n>9)
    {
        int ans=0;
        while(n>0)
        {
            ans+=n%10;
            n=n/10;
        }
        n=ans;   
    }
    cout<<n;
}