#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no :- ";
    cin>>n;
    int b = 1;
    int a = 0;
    int l;
    //cout<<sum<<" ";
    //cout<<j<<" ";
    //cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++)
    {
        l=a+b;
        a=b;
        b=l;
        
        
    }
    cout<<l<<" ";
    

    
}