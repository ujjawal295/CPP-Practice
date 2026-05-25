#include <iostream>
using namespace std;

int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        for(int j=i*2;j<(2*n)-2;j++)
        {
            cout<<" ";
        }

        for(int l=0;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
 
    }

    
    for(int i=0;i<n;i++)
    {
        for(int k=n-i-1;k>0;k--)
        {
            cout<<"*";
        }
        for(int a=0;a<(i*2)+2;a++) 
        {
            cout<<" ";
        } 
        for(int a=n-i-1;a>0;a--) 
        {
            cout<<"*";
        }
        cout<<endl;
 
    }
}