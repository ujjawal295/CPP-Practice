#include <iostream>
using namespace std;

int main()
{
    int n;
    int s=0;
    int k=0;
    int ld=0;
    cout<<"Enter No :- ";
    cin>>n;
    while(n>0)
    {
        ld=n%10;
        cout<<ld<<" ";
        k=ld+k;
        n=n/10;
        s++;
        
        
    }
    cout<<"\nEnter no is of " <<s<<" digit"<<endl;
    cout<<"Sum of digit is :- "<<k;


}