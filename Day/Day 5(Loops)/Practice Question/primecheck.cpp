#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    int i=1;
    int c=0;
    if(n>0)
    {
        while(sqrt(n)>=i)
        {
            if(n%i==0)
            {
                c++;            
            }
            i++;
        }
        if(c>1)
        {
            cout<<"Not Prime";
        }
        else
        {
            cout<<"Prime";
        }
    }
    else
    {
        cout<<"Invalid input";
    }
    
}