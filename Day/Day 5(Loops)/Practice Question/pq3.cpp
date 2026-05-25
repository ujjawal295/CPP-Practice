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
        n=n/10;
        s++;
        if(ld%2!=0)
        {
            k=ld+k;
        }
        
    }
    cout<<"\nEnter no is of " <<s<<" digit"<<endl;
    cout<<"Sum of odd digit is :- "<<k;


}