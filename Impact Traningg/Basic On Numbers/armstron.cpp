#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout<<"Entr No :- ";
    cin>>n;

    int k=n;

    int sum = 0;
    int dig;

    if(n==0)
    {
        cout<<"0";
        return 0; 
    }
    int count=log10(n);
    int val=count+1;
  
    for(int i=0;i<val;i++)
    {
        dig=n%10;
        sum=sum+pow(dig,val);
        n=n/10;
    }

    


    
    cout<<sum;
}