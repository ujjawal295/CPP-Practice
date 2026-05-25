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

int main()
{
    cout<<primeNo(15);
}