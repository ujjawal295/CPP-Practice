#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr No -> ";
    cin>>n;

    int k=n;
    
    

    while(k>9)
    {
        int sum=0;
        while(k>0)
        {
            int ld=k%10;
            sum=ld+sum;
            k=k/10;
        }
        k=sum;
    }   
    if(k==1)
        cout<<"Magic No";
    else
        cout<<"Normal No";
}

