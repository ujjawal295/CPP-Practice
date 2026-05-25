#include <iostream>
using namespace std;

int main()
{
    int n = 16;
    int k=n;
    if(n==1 || n==2)
    {
        cout<<"yes";
        return 0;
    }
    while(k>=INT_MIN)
    {
        if((k%2!=0 && k!=1) || k<=0)
        {
            cout<<"NO";
            return 0;
        }
        if(k==1)
        {
            cout<<"yes";
            return 0;
        }
        k=k/2;
    }
    cout<<"Yes";
}



