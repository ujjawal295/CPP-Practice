#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr No :- ";
    cin>>n;

    int k=n;

    int dig=0;

    int sum=0;

    while(n>0)
    {
        dig=n%10;
        sum=sum*10+dig;
        n=n/10;   
    }
    cout<<sum<<endl; 

    if(sum==k)
        cout<<"Palindrome";
    else
        cout<<"Nai hai";
    
    
}