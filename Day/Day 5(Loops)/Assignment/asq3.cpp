/*WAP to input a number and check whether the number is an Armstrong
number or not.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number :- ";
    cin>>n;
    int y=n;
    int k=0;
    int i=0;
    int j=0;
    while(n>0)
    {
        k=n%10;
        j=(k*k*k)+j;
        n=n/10;
        i++;    
    }
    cout<<endl<<j;
    if(j==y)
    {
        cout<<" Number is armstrong";
    }
    else
    {
        cout<<" Not armstrong";
    }
    
    



}