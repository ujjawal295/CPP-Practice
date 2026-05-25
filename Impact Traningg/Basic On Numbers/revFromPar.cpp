#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Entr no -> ";
    cin>>n;

    int rev;
    cout<<"Rev No -> ";
    cin>>rev;

    int value=(pow(10,rev));
    int m=n%value;

    int l=n/value;

    while(m>0)
    {
        int dig=m%10;
        l=(l*10+dig);
        m=m/10;
    }
    cout<<l;
    
}