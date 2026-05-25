#include <iostream>
#include <math.h>
using namespace std;

bool primeNo(int n)
{
    int i=2;
    int c=0;
    if(n==1)
    {
        return false;
    }
    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
    
}
void primeCheck(int n)
{
    int i=2;
    while(i<=n)
    {
        if(primeNo(i))
        {
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
}
 
int main()
{
    //cout<<primeNo(15);
    primeCheck(18); 
}