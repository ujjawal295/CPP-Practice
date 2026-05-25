#include <iostream>
using namespace std;

void power(int num,int pow)
{
    
    int ans = 1 ;
    for(int i=0;i<pow;i++)
    {
        ans=num*ans;
        
    }
    cout<<ans;
}

int main()
{

    power(3,3);
}