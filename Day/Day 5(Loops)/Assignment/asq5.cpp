//For a positive N , WAP that prints the first N Fibonacci numbers.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter last number :- ";
    cin>>n;
    int f1=0;
    int f2=1;
    int t=0;
    cout<<f1<<" "<<f2<<" ";
    
    for(int i=2;i<=n;i++)
    {
        t=f1+f2;
        cout<<t<<" ";
        f1=f2;
        f2=t;

    }
}   