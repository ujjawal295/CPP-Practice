#include <iostream>
#include <math.h>
using namespace std;

int fact(int n)
{
    int f=1;
    int i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;

}

int bioCoff(int n , int r)
{
    int first=fact(n);
    int second=fact(r);
    int third=fact(n-r);
    
    int val=first/(second*third);
    return val;

}


int main()
{
    cout<<bioCoff(3,2);
}