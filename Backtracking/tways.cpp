#include <iostream>
using namespace std;

int main()
{
    int n = -134;
    int k=0;
    int ans = 0;
    while(n>0)
    {
        k=n%10;
        n=n/10;
        ans=ans*10+k;
    }
    
    cout<<ans;
    
    
}


    
