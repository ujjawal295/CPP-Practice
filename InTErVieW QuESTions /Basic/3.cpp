#include <iostream>
using namespace std;

int main()
{
    int n=4;
    int j=0;
    for(int i=1;i<=4;i++)
    {
        j=n%i;
        if(j==0)
        {
            cout<<i;
        }
    }
}