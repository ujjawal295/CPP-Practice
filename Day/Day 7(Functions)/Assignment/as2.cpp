#include <iostream>
using namespace std;

int sumOfDigit(int n)
{
    int k=0;
    int res=0;
    while(n>0)
    {
        k=n%10;
        res=k+res;
        n=n/10;
    }
    return res;
}

int main()
{
    cout<<sumOfDigit(1214);
}