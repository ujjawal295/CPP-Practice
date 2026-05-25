#include <iostream>
using namespace std;

int main()
{
    int n;
    int s=0;
    int res=0;
    int ld=0;
    cout<<"Enter No :- ";
    cin>>n;
    while(n>0)
    {
        ld=n%10;
        res=res*10+ld;
        n=n/10;
        s++;
        
    }
    cout<<"Result :- "<<res;


}