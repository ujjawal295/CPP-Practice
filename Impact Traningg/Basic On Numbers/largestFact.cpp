#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr No -> ";
    cin>>n;

    int k;
    cout<<"Kth largest factor -> ";
    cin>>k;

    int reqFact=0;

    int count =0;

    int maxi=INT_MIN;
    int mini=INT_MAX;

    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            maxi=max(i,maxi);
            mini=min(i,mini);
            count++;
        }

        if(count==k)
            reqFact=i;
         
    }
    if(k>count)
        cout<<"Out of range";
    else
        cout<<"\nrequired factor is -> "<<reqFact;
    
    cout<<"\nMaximum is -> "<<maxi;
    cout<<"\nMinimum is -> "<<mini;
}