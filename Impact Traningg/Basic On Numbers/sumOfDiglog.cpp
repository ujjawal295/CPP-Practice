#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cout<<"Entr No -> ";
    cin>>n;

    int val=log10(n);

    if(n==0)
    {
        cout<<"0";
        return 0;

    }
        


    cout<<val+1;
}