#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter last number :- ";
    cin>>n;
    
    
    for(int i=2;i<=n;i++)
    {
        int c=0;
        for(int j=2;j<=i;j++)
        {
            if(i%(j-1)==0)
            {
                c++;
            }  
        }
        if(c==1)
        {
            cout<<" "<<i;
        }       
    }
    //cout<<c;
    
}